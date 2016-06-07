#include "newpersonal_personal_ui.h"
#include "ui_newpersonal_personal_ui.h"
#include <QDebug>
#include "funciones.h"
#include <QMessageBox>
#include <fstream>
#include <QFile>
#include <QTextStream>

newpersonal_personal_ui::newpersonal_personal_ui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::newpersonal_personal_ui)
{
    ui->setupUi(this);

    //ui->lineEdit_Dni->setValidator(new QIntValidator(0, 99999999));
    //hide elements::STAR
    ui->label_funcion->hide();
    ui->lineEdit_funcion->hide();
    ui->lineEdit_dni_to_insert->hide();
    //hide elements::END


}

newpersonal_personal_ui::~newpersonal_personal_ui()
{
    delete ui;
}

void newpersonal_personal_ui::on_pushButton_Acept_clicked()
{

    QMessageBox *msgBox=new QMessageBox;
    int ret;


    QSqlQuery query;
    QString DNI_TO_INSERT,DNI_TO_TEXT;

    if(ui->lineEdit_Dni->text().length()!=8)
    {
        if(ui->lineEdit_Dni->text()!="")
        {
            msgBox->setIcon(QMessageBox::Critical);
            msgBox->setWindowTitle("Error");
            msgBox->setWindowIcon(QIcon(":/new/1329798431_Application.png"));
            msgBox->setText("Ingrese un DNI válido o vacío.");
            msgBox->setStandardButtons(QMessageBox::Cancel);
            msgBox->setButtonText(QMessageBox::Cancel, "Cancelar");
            ret = msgBox->exec();

            return;
        }
    }

    DNI_TO_INSERT = ui->lineEdit_Dni->text();



    if(ui->lineEdit_Dni->text().length() == 0)
    {

        int DNI_TEMP;
        QSqlQuery invalid_dni;

        invalid_dni.prepare("select max(dni_pk) from e_invalid_dni");
        invalid_dni.exec();
        invalid_dni.next();

        DNI_TO_INSERT = invalid_dni.value(0).toString();
        DNI_TEMP = DNI_TO_INSERT.toInt();

        invalid_dni.prepare("UPDATE e_invalid_dni SET dni_pk=? WHERE dni_pk="+DNI_TO_INSERT);
        DNI_TEMP++;
        DNI_TO_INSERT = QString::number(DNI_TEMP);

        invalid_dni.bindValue(0,DNI_TO_INSERT);
        invalid_dni.exec();

        DNI_TO_INSERT = "-"+DNI_TO_INSERT;
    }


    query.prepare("INSERT INTO e_dni(dni_pk,apellido_paterno,apellido_materno,primer_nombre,segundo_nombre,sexo,fecha_nacimiento,donacion_organos,estado_civil,pais,departamento,provincia,distrito,direccion) VALUES(?,?,?,?,?,?,?,?,?,?,?,?,?,?)");
    query.bindValue(0,DNI_TO_INSERT);
    query.bindValue(1,ui->lineEdit_FatherName->text());
    query.bindValue(2,ui->lineEdit_MotherName->text());
    query.bindValue(3,ui->lineEdit_FirstName->text());
    query.bindValue(4,ui->lineEdit_SecondName->text());
    query.bindValue(5,ui->comboBox_Sex->currentText());
    query.bindValue(6,ui->dateEdit_DateofBirth->text());
    query.bindValue(7,ui->comboBox_OrganDonor->currentText());
    query.bindValue(8,ui->comboBox_MaritalStatus->currentText());
    query.bindValue(9,ui->lineEdit_Country->text());
    query.bindValue(10,ui->lineEdit_Departamento->text());
    query.bindValue(11,ui->lineEdit_Provincia->text());
    query.bindValue(12,ui->lineEdit_Distrito->text());
    query.bindValue(13,ui->lineEdit_Lugar->text());

    query.exec();


    if(query.numRowsAffected()==1)
    {
        QString info = "Usuario fue registrado con éxito!";
        msgBox->setIcon(QMessageBox::Information);
        msgBox->setWindowTitle("Información");
        msgBox->setWindowIcon(QIcon(":/new/Add-Male-User.png"));

        msgBox->setText(info);
        msgBox->setStandardButtons(QMessageBox::Save);
        msgBox->setDefaultButton(QMessageBox::Save);
        msgBox->setButtonText(QMessageBox::Save, "Aceptar");

        ret = msgBox->exec();
    }
    else
    {
        QString str_warning = "La persona con DNI "+DNI_TO_INSERT+" ya existe en el personal."+"\nPorvafor ingrese otro DNI";
        msgBox->setIcon(QMessageBox::Warning);
        msgBox->setWindowTitle("Advertencia");
        msgBox->setWindowIcon(QIcon(":/new/Add-Male-User.png"));

        msgBox->setText(str_warning);
        msgBox->setStandardButtons(QMessageBox::Save);
        msgBox->setDefaultButton(QMessageBox::Save);
        msgBox->setButtonText(QMessageBox::Save, "Aceptar");

        ret = msgBox->exec();
        return;
    }
    //--------------------------------------------------------------------

    query.prepare("INSERT INTO e_persona(dni_pk,tipo) VALUES(?,?)");
    query.bindValue(0,DNI_TO_INSERT);
    if(ui->comboBox_tipo->currentText()=="Otro")
    {
        query.bindValue(1,ui->lineEdit_funcion->text());
    }
    else
    {
        query.bindValue(1,ui->comboBox_tipo->currentText());
    }
    query.exec();

    //---------------------------------------------------------------------
/*
    switch(ui->comboBox_tipo->currentIndex())
    {
    case 0://medico
        query.prepare("INSERT INTO e_Medico(dni_pk,especialidad,colegiatura,cargo) VALUES(?,?,?,?)");
        query.bindValue(0,ui->lineEdit_Dni->text());
        query.bindValue(1,ui->lineEdit_especialidad->text());
        query.bindValue(2,ui->lineEdit_colegiatura->text());
        query.bindValue(3,ui->lineEdit_cargo->text());
        query.exec();
            break;
    case 1://enfermera
        query.prepare("INSERT INTO e_Enfermera(dni_pk,especialidad,colegiatura,cargo) VALUES(?,?,?,?)");
        query.bindValue(0,ui->lineEdit_Dni->text());
        query.bindValue(1,ui->lineEdit_especialidad->text());
        query.bindValue(2,ui->lineEdit_colegiatura->text());
        query.bindValue(3,ui->lineEdit_cargo->text());
        query.exec();
            break;
    case 2://recepcionista
        query.prepare("INSERT INTO e_Recepcionista(dni_pk,cargo,funciones) VALUES(?,?,?)");
        query.bindValue(0,ui->lineEdit_Dni->text());
        query.bindValue(1,ui->lineEdit_cargo->text());
        query.bindValue(2,ui->lineEdit_funciones->text());
        query.exec();
            break;
    }
*/
    if(!changeParentWindow(codeWindow))
        parent_ui_var->update_table_personal();
    this->close();


        //personal_form->update_table_personal(); //##### REVISAR ACTUALIZA TABLA ANTES FALTA BORRAR TODA LA TABLA
}

void newpersonal_personal_ui::on_pushButton_Cancel_clicked()
{
    this->close();
}

void newpersonal_personal_ui::on_pushButton_Save_clicked()
{
    QSqlQuery query;
    QString DNI;

    QMessageBox *msgBox = new QMessageBox;
    int ret;
    /*if(ui->lineEdit_Dni->text().length()!=8)
    {
        if(ui->lineEdit_Dni->text()!="")
        {
            msgBox->setIcon(QMessageBox::Critical);
            msgBox->setWindowTitle("Error");
            msgBox->setWindowIcon(QIcon(":/new/1329798431_Application.png"));
            msgBox->setText("Ingrese un DNI válido o vacío.");
            msgBox->setStandardButtons(QMessageBox::Cancel);
            msgBox->setButtonText(QMessageBox::Cancel, "Cancelar");
            ret = msgBox->exec();

            return;
        }
    }*/



    if(var_dni!=ui->lineEdit_Dni->text())
    {
        query.prepare("SELECT dni_pk FROM e_dni WHERE dni_pk='"+ui->lineEdit_Dni->text()+"'");
        query.exec();
        if(query.next())
        {

            msgBox->setIcon(QMessageBox::Critical);
            msgBox->setWindowTitle("Error");
            msgBox->setWindowIcon(QIcon(":/new/1329798431_Application.png"));
            msgBox->setText("El DNI ingresado ya existe.");
            msgBox->setStandardButtons(QMessageBox::Cancel);
            msgBox->setButtonText(QMessageBox::Cancel, "Cancelar");
            ret = msgBox->exec();
            return;
        }
    }

    msgBox->setIcon(QMessageBox::Warning);
    msgBox->setWindowTitle("Confirmar Guardar");
    msgBox->setWindowIcon(QIcon(":/new/1329798431_Application.png"));

    msgBox->setText("El personal seleccionado va a ser modificado.");
    msgBox->setInformativeText("¿Desea guardar los cambios?");
    msgBox->setStandardButtons(QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
    msgBox->setDefaultButton(QMessageBox::Save);
    msgBox->setButtonText(QMessageBox::Save, "Guardar");
    msgBox->setButtonText(QMessageBox::Discard, "No, guardar");
    msgBox->setButtonText(QMessageBox::Cancel, "Cancelar");
    ret = msgBox->exec();

    QString DNI_TO_INSERT;
    if(ui->lineEdit_Dni->text().length() == 0)
    {

        int DNI_TEMP;
        QSqlQuery invalid_dni;

        invalid_dni.prepare("select max(dni_pk) from e_invalid_dni");
        invalid_dni.exec();
        invalid_dni.next();

        DNI_TO_INSERT = invalid_dni.value(0).toString();
        DNI_TEMP = DNI_TO_INSERT.toInt();

        invalid_dni.prepare("UPDATE e_invalid_dni SET dni_pk=? WHERE dni_pk="+DNI_TO_INSERT);
        DNI_TEMP++;
        DNI_TO_INSERT = QString::number(DNI_TEMP);

        invalid_dni.bindValue(0,DNI_TO_INSERT);
        invalid_dni.exec();

        DNI_TO_INSERT = "-"+DNI_TO_INSERT;
        ui->lineEdit_dni_to_insert->setText(DNI_TO_INSERT);
    }
    else
        ui->lineEdit_dni_to_insert->setText(ui->lineEdit_Dni->text());
    switch (ret) {
       case QMessageBox::Save:
           // Save was clicked


            DNI = var_dni;
            qDebug()<<"DNI_TO_CHANGE : "<<DNI<<endl;

            //=============================GUARDANDO CON CAMBIOS=============================

            query.prepare("UPDATE e_dni SET dni_pk=?,apellido_paterno=?,apellido_materno=?,primer_nombre=?,segundo_nombre=?,sexo=?,fecha_nacimiento=?,donacion_organos=?,estado_civil=?,pais=?,departamento=?,provincia=?,distrito=?,direccion=? WHERE dni_pk="+DNI);
            query.bindValue(0,ui->lineEdit_dni_to_insert->text());
            query.bindValue(1,ui->lineEdit_FatherName->text());
            query.bindValue(2,ui->lineEdit_MotherName->text());
            query.bindValue(3,ui->lineEdit_FirstName->text());
            query.bindValue(4,ui->lineEdit_SecondName->text());
            query.bindValue(5,ui->comboBox_Sex->currentText());
            query.bindValue(6,ui->dateEdit_DateofBirth->text());
            query.bindValue(7,ui->comboBox_OrganDonor->currentText());
            query.bindValue(8,ui->comboBox_MaritalStatus->currentText());
            query.bindValue(9,ui->lineEdit_Country->text());
            query.bindValue(10,ui->lineEdit_Departamento->text());
            query.bindValue(11,ui->lineEdit_Provincia->text());
            query.bindValue(12,ui->lineEdit_Distrito->text());
            query.bindValue(13,ui->lineEdit_Lugar->text());

            query.exec();

            //--------------------------------------------------------------------

            query.prepare("UPDATE e_persona SET tipo=? WHERE dni_pk="+ui->lineEdit_dni_to_insert->text());
            //query.bindValue(0,ui->lineEdit_Dni->text());
            query.bindValue(0,ui->comboBox_tipo->currentText());
            query.exec();


            //##################################33PUT CONFIRM MESSAGE


            this->close();
            if(!changeParentWindow(codeWindow))
                parent_ui_var->update_table_personal();
           break;
       case QMessageBox::Discard:
           // Don't Save was clicked
        this->close();
           break;
       case QMessageBox::Cancel:
           // Cancel was clicked
           break;
       default:
           // should never be reached
           break;
    }

}

void newpersonal_personal_ui::show_data_personal_form(QString dni_var,QString profesion_var)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM e_dni WHERE dni_pk='"+dni_var+"'");
    query.exec();
    query.next();
    qDebug()<<"DNI TO VIEW : "<<dni_var<<endl;


     const QString DNI = dni_var;
     const QString PROFESION = profesion_var;
     const QString APELLIDO_PATERNO =query.value(1).toString();
     const QString APELLIDO_MATERNO =query.value(2).toString();
     const QString PRIMER_NOMBRE =query.value(3).toString();
     const QString SEGUNDO_NOMBRE =query.value(4).toString();
     const QString SEXO =query.value(5).toString();
     const QString FECHA_NACIMENTO =query.value(6).toString();
     const QString DONACION_ORGANOS =query.value(7).toString();
     const QString ESTADO_CIVIL =query.value(8).toString();
     const QString PAIS =query.value(9).toString();
     const QString DEPARTAMENTO =query.value(10).toString();
     const QString PROVINCIA =query.value(11).toString();
     const QString DISTRITO =query.value(12).toString();
     const QString DIRECCION =query.value(13).toString();

     qDebug()<<"LAST NAME : "<<APELLIDO_PATERNO<<endl;

//=====================================================================================

 //    ui->lineEdit_Dni->insert(DNI);
//<<<<<<< HEAD
     ui->lineEdit_dni_to_insert->insert(dni_var);
//=======
     ui->lineEdit_Dni->insert(DNI);
//>>>>>>> Toda mi parte terminada
     ui->lineEdit_FatherName->insert(APELLIDO_PATERNO);
     ui->lineEdit_MotherName->insert(APELLIDO_MATERNO);
     ui->lineEdit_FirstName->insert(PRIMER_NOMBRE);
     ui->lineEdit_SecondName->insert(SEGUNDO_NOMBRE);

     if(profesion_var=="Médico")ui->comboBox_tipo->setCurrentIndex(0);
     if(profesion_var=="Enfermera")ui->comboBox_tipo->setCurrentIndex(1);
     if(profesion_var=="Recepcionista")ui->comboBox_tipo->setCurrentIndex(2);

     if(SEXO=="Femenino")ui->comboBox_Sex->setCurrentIndex(0);
     if(SEXO=="Masculino")ui->comboBox_Sex->setCurrentIndex(1);

     if(DONACION_ORGANOS=="No información")ui->comboBox_OrganDonor->setCurrentIndex(0);
     if(DONACION_ORGANOS=="Si")ui->comboBox_OrganDonor->setCurrentIndex(1);
     if(DONACION_ORGANOS=="No")ui->comboBox_OrganDonor->setCurrentIndex(2);

     if(ESTADO_CIVIL=="Soltero/a")ui->comboBox_MaritalStatus->setCurrentIndex(0);
     if(ESTADO_CIVIL=="Casado/a")ui->comboBox_MaritalStatus->setCurrentIndex(1);
     if(ESTADO_CIVIL=="Divorciado/a")ui->comboBox_MaritalStatus->setCurrentIndex(2);
     if(ESTADO_CIVIL=="Viudo/a")ui->comboBox_MaritalStatus->setCurrentIndex(3);


    //. . . . . . . . .FECHA DE NACIMIENTO (WARNING) . . . . . . . . . .
     ui->dateEdit_DateofBirth->setDate(toDate(FECHA_NACIMENTO));
    //. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .

     ui->lineEdit_Country->insert(PAIS);
     ui->lineEdit_Departamento->insert(DEPARTAMENTO);
     ui->lineEdit_Provincia->insert(PROVINCIA);
     ui->lineEdit_Distrito->insert(DISTRITO);
     ui->lineEdit_Lugar->insert(DIRECCION);

//=======================================================================================

}


//PARA HABILITAR BOTONOS ACEPTAR; GUARDAR; CANCELAR
void newpersonal_personal_ui::set_cliked_type(int type)
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

void newpersonal_personal_ui::on_comboBox_tipo_activated(const QString &arg1)
{

}

void newpersonal_personal_ui::on_comboBox_tipo_currentIndexChanged(int index)
{
    int INDICE;
    INDICE = index;

    if(INDICE == 3)
    {
        ui->label_funcion->show();
        ui->lineEdit_funcion->show();
    }else{
        ui->label_funcion->hide();
        ui->lineEdit_funcion->hide();

    }
}

void newpersonal_personal_ui::on_lineEdit_Dni_cursorPositionChanged(int arg1, int arg2)
{
    if(arg1>=8)
    {

        QString str_dni=ui->lineEdit_Dni->text();
        str_dni.remove(arg1, str_dni.length());
        ui->lineEdit_Dni->setText(str_dni);
    }
    /*
    else
    {
        if(arg1>=0&&ui->lineEdit_Dni->isRedoAvailable())
        {

            QString str_dni=ui->lineEdit_Dni->text();
            QChar c=str_dni[arg2-1];
            qDebug()<<"c"<<c<<endl;
            if(!(c.isDigit()))
            {
                str_dni.remove(arg1, str_dni.length());
                ui->lineEdit_Dni->setText(str_dni);
            }

        }
    }
    */
    qDebug()<<"arg1"<<arg1<<endl;
    qDebug()<<"arg2"<<arg2<<endl;
}



void newpersonal_personal_ui::on_lineEdit_Dni_textChanged(const QString &arg1)
{
    ui->lineEdit_dni_to_insert->clear();
    ui->lineEdit_dni_to_insert->insert(arg1);
}

void newpersonal_personal_ui::setParentWindow(MainWindow *parent)
{
    parentWindow=parent;
}

void newpersonal_personal_ui::setcodeWindow(int code)
{
    codeWindow=code;
}

bool newpersonal_personal_ui::changeParentWindow(int code)
{
    if(code == parentWindow->getlastcodeWindow()){

        return false;
    }
    else return true;
}

