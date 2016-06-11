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

    //REGISTRANDO DATOS SI ES UN PACIENTE



    //######AGREGAR FICHA- - - > TERMINAR PACIENTE Y REGRESAR



    if(query.exec())
    {
        if(flag == true)
        {
            insertarConsulta(ID_PACIENTE,ui->dateEdit->text(),ui->lineEdit_Descripcion->text(),query.lastInsertId().toString());
            actualizarCelular(ID_PACIENTE,ui->lineEdit_Telefono->text());
        }
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
    QString celular, id;
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

        query.prepare("UPDATE e_consulta, e_agenda, r_historial_documento SET e_consulta.fecha=e_agenda.fecha, e_consulta.motivo=e_agenda.descripcion WHERE r_historial_documento.comentario = e_agenda.agenda_pk AND r_historial_documento.historial_documento_pk = e_consulta.historial_documento_pk");
        query.exec();
        id = ui->tableView->model()->data(ui->tableView->model()->index(0,4)).toString();
        celular = ui->lineEdit_Telefono->text();
        actualizarCelular(id,celular);


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


}
void newTask_agenda_ui::on_tableView_clicked(const QModelIndex &index)
{
    flag=true;
    NOMBRE =ui->tableView->model()->data(ui->tableView->model()->index(index.row(),0)).toString();
    HISTORIA_CLINICA =ui->tableView->model()->data(ui->tableView->model()->index(index.row(),1)).toString();
    TELEFONO=ui->tableView->model()->data(ui->tableView->model()->index(index.row(),2)).toString();
    CELULAR = ui->tableView->model()->data(ui->tableView->model()->index(index.row(),3)).toString();
    ID_PACIENTE = ui->tableView->model()->data(ui->tableView->model()->index(index.row(),4)).toString();
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


void newTask_agenda_ui::on_lineEdit_Name_textChanged(const QString &arg1)
{
    QSqlQueryModel *model = new QSqlQueryModel;
    QString query;


    if(arg1.size() != 0)
    {
        QStringList splitted = arg1.split(" ");
        query = "SELECT concat(apellido_paterno, ' ',apellido_materno, ' ',primer_nombre, ' ',segundo_nombre) as 'Apellidos y Nombres', codigo as 'Codigo', telefono_paciente as 'Telefono', celular_paciente as 'Celular', idPaciente FROM Paciente WHERE (";

        switch ( splitted.size() ) {
          case 1:            // Note the colon, not a semicolon
            query+= "apellido_paterno REGEXP '"+splitted.at(0)+"' OR ";
            query+= "codigo REGEXP '"+splitted.at(0)+"'";
            break;
          case 2:            // Note the colon, not a semicolon
            query+= "apellido_paterno REGEXP '"+splitted.at(0)+"' AND ";
            query+= "apellido_materno REGEXP '"+splitted.at(1)+"'";
            break;
          case 3:            // Note the colon, not a semicolon
            query+= "apellido_paterno REGEXP '"+splitted.at(0)+"' AND ";
            query+= "apellido_materno REGEXP '"+splitted.at(1)+"' OR ";
            query+= "primer_nombre REGEXP '"+splitted.at(2)+"'";
            break;
          case 4:            // Note the colon, not a semicolon
            query+= "apellido_paterno REGEXP '"+splitted.at(0)+"' AND ";
            query+= "apellido_materno REGEXP '"+splitted.at(1)+"' OR ";
            query+= "primer_nombre REGEXP '"+splitted.at(2)+"' AND ";
            query+= "segundo_nombre REGEXP '"+splitted.at(3)+"'";
            break;
          default:            // Note the colon, not a semicolon
            for(int i=0;i<splitted.size();i++)
            {
                if(i==0)
                    query+= "apellido_paterno REGEXP '"+splitted.at(i)+"' OR ";
                else
                    query+= " OR apellido_paterno REGEXP '"+splitted.at(i)+"' OR ";
                query+= "apellido_materno REGEXP '"+splitted.at(i)+"' OR ";
                query+= "codigo REGEXP '"+splitted.at(i)+"'";
            }

            break;
          }
        query+= ") ORDER BY codigo DESC";


    }



    model->setQuery(query);
    ui->tableView->setModel(model);
    ui->tableView->show();
    ui->tableView->setColumnWidth(0,300);
    ui->tableView->setColumnWidth(1,100);
    ui->tableView->setColumnWidth(2,100);
    ui->tableView->setColumnWidth(3,100);
    ui->tableView->setColumnWidth(4,0);
    //GUARDANDO SI EDITO EL NOMBRE

}

void newTask_agenda_ui::insertarConsulta(QString id_var,QString fecha,QString motivo,QString id_task)
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
    query.bindValue(2,fecha);
    query.bindValue(3,id_task);
    query.exec();

    query.prepare("SELECT max(historial_documento_pk) as historial_documento_pk from r_historial_documento");
    query.exec();
    query.next();

    R_HISTORIAL_DOCUMENTO = query.value(0).toString();



    query.prepare("INSERT INTO e_consulta(historia_clinica_pk,historial_documento_pk,fecha,motivo) VALUES(?,?,?,?)");
    query.bindValue(0,HISTORIA_CLINICA_PK);
    query.bindValue(1,R_HISTORIAL_DOCUMENTO);
    query.bindValue(2,fecha);
    query.bindValue(3,motivo);

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

}

void newTask_agenda_ui::actualizarCelular(QString id_var, QString celular)
{
    QSqlQuery query;
    QString consulta = "UPDATE Paciente SET celular_paciente = "+celular+" WHERE idPaciente = "+id_var;
    query.prepare(consulta);

    if(!query.exec()){
        qDebug()<<query.lastError()<<endl;
    }
    qDebug()<<consulta<<endl;


}
