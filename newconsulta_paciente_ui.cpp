#include "newconsulta_paciente_ui.h"
#include "ui_newconsulta_paciente_ui.h"
#include <QSqlQuery>
#include <QDebug>
#include <QMessageBox>
#include "funciones.h"

newconsulta_paciente_ui::newconsulta_paciente_ui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::newconsulta_paciente_ui)
{
    ui->setupUi(this);
    QDate FECHA = QDate::currentDate();
    ui->dateEdit->setDate(FECHA);
    ui->dateEdit_creation->setDate(FECHA);
    ui->dateEdit_creation->hide();
}

newconsulta_paciente_ui::~newconsulta_paciente_ui()
{
    delete ui;
}

void newconsulta_paciente_ui::set_clicked_type(int type)
{
    switch(type)
    {
        case 0:
            ui->pushButton_Acept->setDisabled(1);
            ui->pushButton_Save->setDisabled(1);
            break;

        case 1:
            ui->pushButton_Acept->setDisabled(1);
            break;
        case 2:
            ui->pushButton_Save->setDisabled(1);
            break;
    }
}

void newconsulta_paciente_ui::on_pushButton_Acept_clicked()
{
    QString id,HISTORIA_CLINICA_PK,R_HISTORIAL_DOCUMENTO, consulta;

    id = id_var;

    QSqlQuery query;
    int ret;
    QMessageBox *msgBox = new QMessageBox;


    //VERIFICANDO SI EXISTE historia_clinica_pk
    consulta = "SELECT historia_clinica_pk FROM e_historia_clinica WHERE Paciente_idPaciente = ?";
    query.prepare(consulta);
    query.bindValue(0,id);
    query.exec();
    if(query.next())
    {
        HISTORIA_CLINICA_PK = query.value(0).toString();
    }
    else
    {
        //REGISTRANDO HISTORIA CLINICA.

        consulta = "INSERT INTO e_historia_clinica(Paciente_idPaciente) values (?)";
        query.prepare(consulta);
        query.bindValue(0,id);
        if(query.exec())
        {

            HISTORIA_CLINICA_PK = query.lastInsertId().toString();
        }
        else
            qDebug()<<"fallo resgistro e_historia_clinica";


    }

    query.prepare("INSERT INTO r_historial_documento(historia_clinica_pk,tipo,fecha_creacion,comentario) VALUES(?,?,?,?)");
    query.bindValue(0,HISTORIA_CLINICA_PK);
    query.bindValue(1,"consulta");
    query.bindValue(2,ui->dateEdit_creation->text());
    query.bindValue(3,"Ninguno");
    query.exec();

    query.prepare("SELECT max(historial_documento_pk) as historial_documento_pk from r_historial_documento");
    query.exec();
    query.next();

    R_HISTORIAL_DOCUMENTO = query.value(0).toString();



    query.prepare("INSERT INTO e_consulta(historia_clinica_pk,historial_documento_pk,fecha,motivo) VALUES(?,?,?,?)");
    query.bindValue(0,HISTORIA_CLINICA_PK);
    query.bindValue(1,R_HISTORIAL_DOCUMENTO);
    query.bindValue(2,ui->dateEdit->text());
    query.bindValue(3,ui->textEdit_Reason->toPlainText());

    qDebug()<<"historia CLINICA PK "<<HISTORIA_CLINICA_PK<<endl;



    if(query.exec())
    {
        QString info = "Se creo una nueva consulta con éxito.";
        msgBox->setIcon(QMessageBox::Information);
        msgBox->setWindowTitle("Información");
        msgBox->setWindowIcon(QIcon(":/new/sign-up.png"));

        msgBox->setText(info);
        msgBox->setStandardButtons(QMessageBox::Save);
        msgBox->setDefaultButton(QMessageBox::Save);
        msgBox->setButtonText(QMessageBox::Save, "Aceptar");

        ret = msgBox->exec();
    }
    else
    {
        QString str_warning = "Fallo al crear una consulta";
        msgBox->setIcon(QMessageBox::Warning);
        msgBox->setWindowTitle("Advertencia");
        msgBox->setWindowIcon(QIcon(":/new/sign-up.png"));

        msgBox->setText(str_warning);
        msgBox->setStandardButtons(QMessageBox::Save);
        msgBox->setDefaultButton(QMessageBox::Save);
        msgBox->setButtonText(QMessageBox::Save, "Aceptar");

        ret = msgBox->exec();
        return;
    }


    this->close();

   // parent_ui_form->update_consultas_form();

}

void newconsulta_paciente_ui::on_pushButton_Save_clicked()
{

    QMessageBox *msgBox = new QMessageBox;
    QSqlQuery query;
    int ret;
    msgBox->setIcon(QMessageBox::Warning);
    msgBox->setWindowTitle("Confirmar Guardar");
    msgBox->setWindowIcon(QIcon(":/new/edit.png"));

    msgBox->setText("Los datos de la consulta van a ser modificados.");
    msgBox->setInformativeText("¿Desea guardar los cambios?");
    msgBox->setStandardButtons(QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
    msgBox->setDefaultButton(QMessageBox::Save);
    msgBox->setButtonText(QMessageBox::Save, "Guardar");
    msgBox->setButtonText(QMessageBox::Discard, "No, guardar");
    msgBox->setButtonText(QMessageBox::Cancel, "Cancelar");
    ret = msgBox->exec();

    QString CODIGO;
    switch(ret)
    {
    case QMessageBox::Save:

        CODIGO = code_consulta_var;

        query.prepare("UPDATE e_consulta SET fecha=?,motivo=? WHERE historial_documento_pk="+CODIGO);
        query.bindValue(0,ui->dateEdit->text());
        query.bindValue(1,ui->textEdit_Reason->toPlainText());
        query.exec();

        this->close();

        parent_ui_form->update_consultas_form();
        break;
    case QMessageBox::Discard:
        this->close();
        break;
    case QMessageBox::Cancel:
        break;
    default:
        break;
    }
}

void newconsulta_paciente_ui::on_pushButton_Cancel_clicked()
{
    this->close();
}

void newconsulta_paciente_ui::show_name()
{
    QString id,NOMBRE;

    id = id_var;

    QSqlQuery query;

    query.prepare("SELECT apellido_paterno,apellido_materno,primer_nombre,segundo_nombre FROM Paciente WHERE idPaciente="+id);
    query.exec();
    query.next();

    NOMBRE = query.value(0).toString()+" "+query.value(1).toString()+" "+query.value(2).toString()+" "+query.value(3).toString();
    ui->lineEdit_Patient->insert(NOMBRE);
}


void newconsulta_paciente_ui::update_new_consulta_form()
{
    QString CODIGO,DNI,FECHA,MOTIVO,NOMBRE,HISTORIA_CLINICA;

    CODIGO = code_consulta_var;

    QSqlQuery query;
    query.prepare("SELECT historia_clinica_pk,fecha,motivo FROM e_consulta WHERE historial_documento_pk="+CODIGO);
    query.exec();
    query.next();

    HISTORIA_CLINICA = query.value(0).toString();
    FECHA = query.value(1).toString();
    MOTIVO = query.value(2).toString();

    //############## UPDATE DATE ! DONT FORGET #######################

    //ui->dateEdit->setDate();
    ui->textEdit_Reason->insertPlainText(MOTIVO);
    ui->dateEdit->setDate(toDate(FECHA));

    query.prepare("SELECT dni_pk FROM e_historia_clinica WHERE historia_clinica_pk="+HISTORIA_CLINICA);
    query.exec();
    query.next();

    DNI = query.value(0).toString();

    query.prepare("SELECT apellido_paterno,apellido_materno,primer_nombre,segundo_nombre FROM e_dni WHERE dni_pk="+DNI);
    query.exec();
    query.next();

    NOMBRE = query.value(0).toString()+" "+query.value(1).toString()+" "+query.value(2).toString()+" "+query.value(3).toString();

    ui->lineEdit_Patient->insert(NOMBRE);
}
