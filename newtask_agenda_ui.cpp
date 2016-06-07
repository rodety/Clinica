#include "newtask_agenda_ui.h"
#include "ui_newtask_agenda_ui.h"
#include <QSqlQuery>
#include <QDebug>
#include "funciones.h"
#include <QMessageBox>

newTask_agenda_ui::newTask_agenda_ui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::newTask_agenda_ui)
{
    ui->setupUi(this);
    ui->dateEdit->setDate(QDate::currentDate());
    ui->timeEdit->setTime(QTime::currentTime());
    model = new QSqlQueryModel();
    HISTORIA_CLINICA="no";
    flag=FALSE;
    ui->lineEdit_Name->setFocus();
}

newTask_agenda_ui::~newTask_agenda_ui()
{
    delete ui;
}

void newTask_agenda_ui::on_pushButton_Acept_clicked()
{
    //#################REVISAR CUANDO LISTA DE PERSONAL ESTA VACIA
    QSqlQuery query;
    QMessageBox *msgBox=new QMessageBox;
    int ret;
    if(ui->lineEdit_Name->text().size()    == 0)
    {
        msgBox->setIcon(QMessageBox::Critical);
        msgBox->setWindowTitle("Error");
        msgBox->setWindowIcon(QIcon(":/new/1329798431_Application.png"));
        msgBox->setText("Es obligatorio ingresar el nombre del paciente.");
        msgBox->exec();
        ui->lineEdit_Name->setFocus();
        return;
    }
    if(ui->lineEdit_Descripcion->text().size()== 0)
    {
        msgBox->setIcon(QMessageBox::Critical);
        msgBox->setWindowTitle("Error");
        msgBox->setWindowIcon(QIcon(":/new/1329798431_Application.png"));
        msgBox->setText("Es obligatorio ingresar una descripcion.");
        msgBox->exec();
        ui->lineEdit_Descripcion->setFocus();
        return;
    }

    query.prepare("INSERT INTO e_agenda(dni_pk,nombre,fecha,hora,descripcion,ficha,color,telefono) VALUES(?,?,?,?,?,?,?,?)");
    query.bindValue(0,dni_task);
    query.bindValue(1,ui->lineEdit_Name->text());
    query.bindValue(2,ui->dateEdit->text());
    query.bindValue(3,ui->timeEdit->text());
    query.bindValue(4,ui->lineEdit_Descripcion->text());
    query.bindValue(5,ui->lineEdit_Historia->text());
    query.bindValue(6,"#ffffff");
    query.bindValue(7,ui->lineEdit_Telefono->text());


    //######AGREGAR FICHA- - - > TERMINAR PACIENTE Y REGRESAR

    query.exec();

    if(query.numRowsAffected()==1)
    {       
        this->close();
        emit update_list();
    }
    else
    {
        QString str_warning = "No se pudo crear la nueva tarea";
        msgBox->setIcon(QMessageBox::Warning);
        msgBox->setWindowTitle("Advertencia");
        msgBox->setWindowIcon(QIcon(":/new/file_add.png"));

        msgBox->setText(str_warning);
        msgBox->setStandardButtons(QMessageBox::Save);
        msgBox->setDefaultButton(QMessageBox::Save);
        msgBox->setButtonText(QMessageBox::Save, "Aceptar");

        ret = msgBox->exec();
        return;
    }


}

void newTask_agenda_ui::on_pushButton_Save_clicked()
{
    QString DNI,CODE;

    DNI = dni_task;
    CODE = code_task;

    QSqlQuery query;

    QMessageBox *msgBox = new QMessageBox;
    int ret;

    msgBox->setIcon(QMessageBox::Warning);
    msgBox->setWindowTitle("Confirmar Guardar");
    msgBox->setWindowIcon(QIcon(":/new/application.png"));

    msgBox->setText("Los datos de la tarea van a ser modificados.");
    msgBox->setInformativeText("Guardar los cambios?");
    msgBox->setStandardButtons(QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
    msgBox->setDefaultButton(QMessageBox::Save);
    msgBox->setButtonText(QMessageBox::Save, "Guardar");
    msgBox->setButtonText(QMessageBox::Discard, "No, guardar");
    msgBox->setButtonText(QMessageBox::Cancel, "Cancelar");
    ret = msgBox->exec();

    switch(ret)
    {
    case QMessageBox::Save:

        query.prepare("UPDATE e_agenda SET nombre=?,fecha=?,hora=?,descripcion=?,ficha=?,telefono=? WHERE agenda_pk="+CODE);
        query.bindValue(0,ui->lineEdit_Name->text());
        query.bindValue(1,ui->dateEdit->text());
        query.bindValue(2,ui->timeEdit->text());
        query.bindValue(3,ui->lineEdit_Descripcion->text());
        query.bindValue(4,ui->lineEdit_Historia->text());
        query.bindValue(5,ui->lineEdit_Telefono->text());
        query.exec();

        emit update_list();
        this->close();

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
void newTask_agenda_ui::on_pushButton_Cancel_clicked()
{
    this->close();
}

//PARA HABILITAR BOTONOS ACEPTAR; GUARDAR; CANCELAR
void newTask_agenda_ui::set_cliked_type(int type)
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
void newTask_agenda_ui::setDate(QDate date)
{
    ui->dateEdit->setDate(date);
}

void newTask_agenda_ui::enableDate(bool val)
{
    ui->dateEdit->setEnabled(val);
}

void newTask_agenda_ui::setTitle(QString val)
{
    this->setWindowTitle(val);
}

void newTask_agenda_ui::hideButton()
{
    //ui->tableWidget->hide();
    ui->pushButton_Acept->hide();
    ui->pushButton_Save->hide();
    this->resize(481,100);
}


void newTask_agenda_ui::show_data_task_form(QString code)
{
    QString CODIGO,FECHA,NOMBRE,DESCRIPCION,TELEFONO;
    QTime HORA;

    CODIGO = code;

    QSqlQuery query;
    query.prepare("SELECT fecha,hora,nombre,descripcion,ficha,telefono FROM e_agenda WHERE agenda_pk="+CODIGO);
    query.exec();
    query.next();

    FECHA = query.value(0).toString();
    HORA = query.value(1).toTime();
    NOMBRE = query.value(2).toString();
    DESCRIPCION =query.value(3).toString();
    HISTORIA_CLINICA = query.value(4).toString();
    TELEFONO = query.value(5).toString();

    ui->lineEdit_Name->insert(NOMBRE);
    ui->lineEdit_Descripcion->insert(DESCRIPCION);
    ui->dateEdit->setDate(toDate(FECHA));
    ui->lineEdit_Telefono->insert(TELEFONO);
    ui->timeEdit->setTime(HORA);
    ui->lineEdit_Historia->setText(HISTORIA_CLINICA);
}
void newTask_agenda_ui::on_lineEdit_Name_textEdited(const QString &arg1)
{
    if(ui->lineEdit_Name->text().isEmpty())
        flag=false  ;

    if(flag==false)
    {
        model->clear();
        QSqlQuery query_paciente;
        qDebug()<<arg1<<endl;
        query_paciente.prepare("SELECT concat(d.apellido_paterno, ' ',d.apellido_materno, ' ',d.primer_nombre, ' ',d.segundo_nombre), h.nick, p.telefono_paciente, p.celular_paciente FROM e_dni d LEFT JOIN e_historia_clinica h ON d.dni_pk=h.dni_pk LEFT JOIN e_paciente p ON d.dni_pk=p.dni_pk WHERE d.apellido_paterno LIKE \""+arg1+"%\""+"OR d.apellido_materno LIKE \""+arg1+"%\""+"OR d.primer_nombre LIKE \""+arg1+"%\""+"OR d.segundo_nombre LIKE \""+arg1+"%\""+" OR concat(d.apellido_paterno, ' ',d.apellido_materno, ' ',d.primer_nombre, ' ',d.segundo_nombre) LIKE \""+arg1+"%\""+" OR concat(d.primer_nombre, ' ',d.segundo_nombre, ' ',d.apellido_paterno, ' ',d.apellido_materno) LIKE \""+arg1+"%\""+"OR concat(d.apellido_paterno, ' ',d.apellido_materno, ' ',d.primer_nombre, ' ',d.segundo_nombre) LIKE \""+arg1+"%\""+" OR concat(d.primer_nombre,' ',d.apellido_paterno, ' ',d.apellido_materno) LIKE \""+arg1+"%\""+"&& d.dni_pk = ANY (SELECT dni_pk FROM e_persona WHERE tipo='Paciente')");
        if(!query_paciente.exec()) qDebug()<<query_paciente.lastError().text();
        model->setQuery(query_paciente);
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("Apellidos y Nombres"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("Historial"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("Teléfono"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("Celular"));
        QFont fuente;
        fuente.setPointSize(14);
        ui->tableView->setModel(model);
        //ui->tableView_ListaPacientes1->setSortingEnabled(1);
        ui->tableView->setColumnWidth(0,300);
        ui->tableView->setColumnWidth(1,100);
        ui->tableView->setColumnWidth(1,100);
        ui->tableView->setColumnWidth(1,100);
        ui->tableView->setFont(fuente);
        ui->tableView->show();
    }
}
void newTask_agenda_ui::on_tableView_clicked(const QModelIndex &index)
{
    flag=false;
    QString NOMBRE =ui->tableView->model()->data(ui->tableView->model()->index(index.row(),0)).toString();
    HISTORIA_CLINICA =ui->tableView->model()->data(ui->tableView->model()->index(index.row(),1)).toString();
    QString TELEFONO=ui->tableView->model()->data(ui->tableView->model()->index(index.row(),2)).toString();
    QString CELULAR = ui->tableView->model()->data(ui->tableView->model()->index(index.row(),3)).toString();
    ui->lineEdit_Name->clear();
    ui->lineEdit_Name->insert(NOMBRE);
    ui->lineEdit_Telefono->clear();
    ui->lineEdit_Historia->clear();
    ui->lineEdit_Historia->insert(HISTORIA_CLINICA);
    if(mode_uso == 1){

    }
    else{

        ui->lineEdit_Descripcion->clear();
    }


    if(TELEFONO=="" && CELULAR!="")
    {
        ui->lineEdit_Telefono->insert(CELULAR);
        ui->lineEdit_Descripcion->setFocus();
    }
    if(TELEFONO!="" && CELULAR=="")
    {
        ui->lineEdit_Telefono->insert(TELEFONO);
        ui->lineEdit_Descripcion->setFocus();
    }
    if(TELEFONO!="" && CELULAR!="")
    {
        ui->lineEdit_Telefono->insert(TELEFONO+"-"+CELULAR);
        ui->lineEdit_Descripcion->setFocus();
    }
    if(TELEFONO=="" && CELULAR=="")
    {
        ui->lineEdit_Telefono->setFocus();
        ui->lineEdit_Telefono->insert(TELEFONO);
    }
}

void newTask_agenda_ui::on_lineEdit_Telefono_editingFinished()
{
    ui->lineEdit_Descripcion->setFocus();
}

void newTask_agenda_ui::setModoUso(int m_uso)
{
    // 0 NUEVO 1 EDITAR
    mode_uso = m_uso;
}

int newTask_agenda_ui::getModoUso(int m_uso)
{
    return mode_uso;
}

void newTask_agenda_ui::setParentWindow(MainWindow *parent)
{
    parentWindow=parent;
}

void newTask_agenda_ui::setcodeWindow(int code)
{
    codeWindow=code;
}

bool newTask_agenda_ui::changeParentWindow(int code)
{

    if(code == parentWindow->getlastcodeWindow()){

        return false;
    }
    else return true;
}

