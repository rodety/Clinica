#include"fotos_ui.h"
#include"ui_fotos_ui.h"
#include<QSqlQuery>
#include<QDebug>
#include<QMessageBox>
#include<QFileDialog>
#include<QStringList>
#include<QFtp>
#include<dos.h>
#include<stdio.h>
#include<conio.h>
#include<windows.h>
using namespace std;

fotos_ui::fotos_ui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::fotos_ui)
{
    ui->setupUi(this);
    ui->lineEdit_documentCode->setText("NULL");
    state = false;
    ui->lineEdit_documentCode->setReadOnly(true);
    ui->lineEdit_historiaClinicaCode->setReadOnly(true);
    ui->lineEdit_patientName->setReadOnly(true);
}

fotos_ui::~fotos_ui()
{   
    delete ui;
}

void fotos_ui::on_pushButton_5_clicked()
{
    this->close();
}

void fotos_ui::show_name(QString name)
{
    ui->lineEdit_patientName->setText(name);
}

void fotos_ui::show_historial_code(QString code)
{
    ui->lineEdit_historiaClinicaCode->setText(code);
}

void fotos_ui::update_form()
{
    QString HISTORIAL_CODE,DNI,FECHA_CREACION,DOCUMENT_CODE;
    int COUNT;
    DNI = this->dni_var;
    HISTORIAL_CODE = historial_code_var;
    COUNT = 0;
    ui->tableWidget_reporteOperatorio->insertRow(COUNT);
    ui->tableWidget_reporteOperatorio->setItem(COUNT,0,new QTableWidgetItem("-"));
    ui->tableWidget_reporteOperatorio->setItem(COUNT,1,new QTableWidgetItem("Imágenes Generales"));
    ui->tableWidget_reporteOperatorio->setItem(COUNT,2,new QTableWidgetItem("NULL"));
    COUNT++;
    QSqlQuery query;
    query.prepare("SELECT reporte_operatorio_pk,fecha_creacion FROM e_reporte_operatorio WHERE historial_documento_pk IN (SELECT historial_documento_pk FROM r_historial_documento WHERE tipo ='Reporte Operatorio' AND historia_clinica_pk = (SELECT historia_clinica_pk FROM e_historia_clinica WHERE dni_pk ="+DNI+"))");
    query.exec();
    while(query.next())
    {
        DOCUMENT_CODE = query.value(0).toString();
        FECHA_CREACION = query.value(1).toString();
        qDebug()<<"Documento"<<DOCUMENT_CODE<<endl;
        ui->tableWidget_reporteOperatorio->insertRow(COUNT);
        ui->tableWidget_reporteOperatorio->setItem(COUNT,0,new QTableWidgetItem(FECHA_CREACION));
        ui->tableWidget_reporteOperatorio->setItem(COUNT,1,new QTableWidgetItem("Reporte Operatorio"));
        ui->tableWidget_reporteOperatorio->setItem(COUNT,2,new QTableWidgetItem(DOCUMENT_CODE));
        COUNT++;
    }
}

void fotos_ui::on_tableWidget_reporteOperatorio_itemClicked(QTableWidgetItem *item)
{
    int FILA;
    QString DOCUMENT_CODE;
    FILA = item->row();
    DOCUMENT_CODE = ui->tableWidget_reporteOperatorio->item(FILA,2)->text();
    ui->lineEdit_documentCode->setText(DOCUMENT_CODE);
}
void fotos_ui::on_pushButton_uploadPicture_clicked()
{
    QSqlQuery query;
    QString fileName,name;
    QString CARPETA,DOCUMENTO;
    CARPETA = carpeta;
    DOCUMENTO = ui->lineEdit_documentCode->text();
    listFiles = QFileDialog::getOpenFileNames(this,tr("Open File"), QDir::currentPath());

    for (int tam = 0; tam < listFiles.size(); ++tam)
    {
        fileName = listFiles.at(tam);
        if(fileName.endsWith(".JPG") || fileName.endsWith(".jpg") || fileName.endsWith(".jpeg"))
        {
            if(DOCUMENTO == "NULL")
            {
                query.exec("INSERT INTO e_imagen(url) VALUES('"+CARPETA+"')");
            }
            else
            {
                query.exec("INSERT INTO e_imagen(url,reporte_operatorio_pk) VALUES('"+CARPETA+"','"+DOCUMENTO+"')");
            }
            query.exec("SELECT LAST_INSERT_ID()");
            query.next();
            name = query.value(0).toString()+".JPG";
            viaftp->setnombreFile(fileName);
            viaftp->setRenameFile(name);
            viaftp->subirfile();
        }
        else
           {
               QMessageBox::warning(this, tr("Warning"), tr("El Archivo %1 tiene una extension no soportada. Los formatos soportados son: jpg y jpeg").arg(fileName),QMessageBox::Close);
           }
    }
}

void fotos_ui::on_pushButton_showPictures_clicked()
{
    this->on_pushButton_downloadPicture_clicked();
    view = new View("trolltechoffice", "images",carpeta);
    view->setcarpeta(carpeta);
    view->setPatch(abspath);
    view->setDocumento(ui->lineEdit_documentCode->text());
    if(ui->lineEdit_documentCode->text() == "NULL")
        view->setComportamiento(0);
    else
        view->setComportamiento(1);
    view->addItems();
#ifndef Q_OS_SYMBIAN
     view->show();
     view->centerOn(0,0);
     view->setFocus();
 #else
     view->showFullScreen();
 #endif
 #ifdef QT_KEYPAD_NAVIGATION
     QApplication::setNavigationMode(Qt::NavigationModeCursorAuto);
 #endif
}

void fotos_ui::createconexion()
{
    viaftp = new FtpWindow;
    progressDialog = new QProgressDialog;
    viaftp->setnombreCarpeta(carpeta);
    connect(viaftp,SIGNAL(putCorrect()),this,SLOT(putCorrected()));
    connect(viaftp,SIGNAL(downloadCorrect()),this,SLOT(downloadCorrected()));
    connect(viaftp,SIGNAL(puterror(QString)),this,SLOT(puterror(QString)));
    connect(viaftp,SIGNAL(closeconecction()),this,SLOT(closeconecction()));
    connect(viaftp,SIGNAL(openconnecction()),this,SLOT(openconeccion()));
}

void fotos_ui::on_pushButton_goFilePicture_clicked()
{
    if(state)
        this->on_pushButton_downloadPicture_clicked();
    system("explorer .");
}
void fotos_ui::on_pushButton_downloadPicture_clicked()
{
    if(ui->lineEdit_documentCode->text().count() == 0)
    {
        QMessageBox::information(this, tr("Atención"),
                                 tr("Seleccione un Documento"));
        return;
    }
    QSqlQuery query;
    QString DNI,DOCUMENTO,NOMBRE;
    DNI = carpeta;
    DOCUMENTO = ui->lineEdit_documentCode->text();
    if(DOCUMENTO == "NULL")
    {
        query.prepare("select imagen_pk from e_imagen where url = "+DNI+" and reporte_operatorio_pk IS NULL");
    }
    else
    {
        query.prepare("select imagen_pk from e_imagen where url = "+DNI+" and reporte_operatorio_pk = "+DOCUMENTO);
    }
    query.exec();

    while(query.next())
    {
        NOMBRE = query.value(0).toString()+".JPG";
        if (QFile::exists(NOMBRE))
        {
           continue;
        }
        viaftp->downloadFile(NOMBRE);
    }
}
void fotos_ui::setPatch(QString path)
{
    abspath = path;   
}
void fotos_ui::setDni(QString numberdni)
{
    dni_var = numberdni;
}
void fotos_ui::putCorrected()
{
    qDebug()<<"Se guardo correctemanete el archivo en el FTP"<<endl;   
}
void fotos_ui::downloadCorrected()
{    
    qDebug()<<"Se descargo correctamente"<<endl;
}

void fotos_ui::setFolderFtp(QString val)
{
    carpeta =  val;
}
void fotos_ui::puterror(QString name)
{
    int ini = name.size() - 4;
    name.remove(ini,4);
    query.exec("DELETE FROM e_imagen WHERE imagen_pk = '"+name+"'");
}
void fotos_ui::closeconecction()
{
    ui->pushButton_downloadPicture->setEnabled(false);
    ui->pushButton_uploadPicture->setEnabled(false);
    ui->pushButton_showPictures->setEnabled(false);
    setWindowTitle("Fotos de Paciente    Deconectado");
    state = false;
}

void fotos_ui::openconeccion()
{
    ui->pushButton_downloadPicture->setEnabled(true);
    ui->pushButton_uploadPicture->setEnabled(true);
    ui->pushButton_showPictures->setEnabled(true);
    setWindowTitle("Fotos de Paciente    Conectado");
    state = true;
}
