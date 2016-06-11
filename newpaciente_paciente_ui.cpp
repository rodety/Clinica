#include "newpaciente_paciente_ui.h"
#include "ui_newpaciente_paciente_ui.h"
#include <QDebug>
#include <QMessageBox>
#include "funciones.h"
#include <fstream>
#include <QFile>
#include <QTextStream>
#include <iostream>
#include <QSqlError>

using namespace std;

newPaciente_paciente_ui::newPaciente_paciente_ui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::newPaciente_paciente_ui)
{
    ui->setupUi(this);
    //reg_Dato();
    //ui->lineEdit_Dni->setValidator(new QIntValidator(0, 99999999));
    accept=true;
}

newPaciente_paciente_ui::~newPaciente_paciente_ui()
{
    delete ui;
}

void newPaciente_paciente_ui::reg_Dato()
{
    ifstream in("database2.csv");
    QString buffer;
    while(!in.eof())
    {
        buffer.clear();
        vector<QString> data;
        string buf;
        getline(in,buf);
        buffer = QString::fromStdString(buf);
        //qDebug()<<buffer<<endl;
        int posInit=0;
        for(int i=0;i< buffer.size(); i++)
        {
            if(buffer[i]==',')
             {
                    data.push_back(buffer.mid(posInit,i-posInit));
                    posInit = i+1;
             }
        }


        qDebug()<<data[0]<<endl;

        QString DNI_TO_INSERT;

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

        qDebug()<<"este es el dni que necesita insertar "<< DNI_TEMP;

        QSqlQuery query;
        int count=0;
        //------------------------------CREANDO DNI----------------------------------------

        query.prepare("INSERT INTO e_dni(dni_pk,apellido_paterno,apellido_materno,primer_nombre,segundo_nombre,sexo,fecha_nacimiento,donacion_organos,estado_civil,pais,departamento,provincia,distrito,direccion) Values(?,?,?,?,?,?,?,?,?,?,?,?,?,?)");
        query.bindValue(0,DNI_TO_INSERT);
        if(data.size()==3)
        {
            query.bindValue(1,data[0]);
            query.bindValue(2,"");
            query.bindValue(3,data[1]);
            query.bindValue(4,"");
        }
        if(data.size()==4)
        {
            query.bindValue(1,data[0]);
            query.bindValue(2,data[1]);
            query.bindValue(3,data[2]);
            query.bindValue(4,"");
        }
        if(data.size()>=5 )
        {
            query.bindValue(1,data[0]);
            query.bindValue(2,data[1]);
            query.bindValue(3,data[2]);
            query.bindValue(4,data[3]);
        }

        if(data.size()==0 ||data.size()==1 || data.size()==2 )
            qDebug()<<"el vector esta vacio"<<endl;

            query.bindValue(5,"Femenino");
            query.bindValue(6,"2000-01-01");
            query.bindValue(7,"No información");
            query.bindValue(8,"Soltero/a");
            query.bindValue(9,"");
            query.bindValue(10,"");
            query.bindValue(11,"");
            query.bindValue(12,"");
            query.bindValue(13,"");
            query.exec();
        count = query.numRowsAffected();
        //------------------------------CREANDO PERSONA----------------------------------------

        query.prepare("INSERT INTO e_persona(dni_pk,tipo) VALUES(?,?)");
        query.bindValue(0,DNI_TO_INSERT);
        query.bindValue(1,"Paciente");//PACIENTE
        query.exec();
        count += query.numRowsAffected();
        //------------------------------CREANDO PACIENTE----------------------------------------

        query.prepare("INSERT INTO e_paciente(dni_pk,alergias,ocupacion,telefono_paciente,celular_paciente,email,cirujias_previas,medicacion_actual,persona_recurrir,telefono_persona_recurrir,antecedentes) VALUES(?,?,?,?,?,?,?,?,?,?,?)");
        query.bindValue(0,DNI_TO_INSERT);
        query.bindValue(1,"");
        query.bindValue(2,"");
        query.bindValue(3,"");
        query.bindValue(4,"");
        query.bindValue(5,"");
        query.bindValue(6,"");
        query.bindValue(7,"");
        query.bindValue(8,"");
        query.bindValue(9,"");
        query.bindValue(10,"");
        query.exec();
        count += query.numRowsAffected();
        //------------------------------CREANDO HISTORIA CLINICA----------------------------------------

        query.prepare("INSERT INTO e_historia_clinica(dni_pk,nick) VALUES(?,?)");
        query.bindValue(0,DNI_TO_INSERT);
        query.bindValue(1,data.back());
        query.exec();

        count += query.numRowsAffected();
        //qDebug()<<count<<endl;
    }
}

void newPaciente_paciente_ui::set_cod_historia(int letra, QString numero)
{
    cod_index=letra;
    cod_numero=numero;
}

int newPaciente_paciente_ui::get_index()
{
    return cod_index;
}

QString newPaciente_paciente_ui::get_numero()
{
    return cod_numero;
}

void newPaciente_paciente_ui::on_pushButton_Acept_clicked()
{
   QMessageBox *msgBox=new QMessageBox;
   QString APELLIDO_PATERNO=  ui->lineEdit_FatherName->text();
    int ret;
    accept=true;
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

    if(APELLIDO_PATERNO.size()== 0)
    {
        msgBox->setIcon(QMessageBox::Critical);
        msgBox->setWindowTitle("Error");
        msgBox->setWindowIcon(QIcon(":/new/1329798431_Application.png"));
        msgBox->setText("Es obligatorio ingresar el Apellido Paterno.");
        msgBox->exec();
        ui->lineEdit_FatherName->setFocus();
        return;
    }




    QSqlQuery query;




    //------------------------------CREANDO DNI----------------------------------------

    //query.prepare("INSERT INTO Paciente(dni_pk,apellido_paterno,apellido_materno,primer_nombre,segundo_nombre,sexo,fecha_nacimiento,donacion_organos,estado_civil,pais,departamento,provincia,distrito,direccion) Values(?,?,?,?,?,?,?,?,?,?,?,?,?,?)");
    QString consulta = "INSERT INTO Paciente (dni,apellido_paterno,apellido_materno,primer_nombre,segundo_nombre,sexo,fecha_nacimiento,donacion_organos,estado_civil,pais,departamento,provincia,distrito,direccion,alergias,ocupacion,telefono_paciente,celular_paciente,email,cirujias_previas,medicacion_actual,persona_recurrir,telefono_persona_recurrir,antecedentes,codigo) VALUES(";
            consulta += "'"+ui->lineEdit_Dni->text()+"',";
            consulta += "'"+ui->lineEdit_FatherName->text()+"',";
            consulta += "'"+ui->lineEdit_MotherName->text()+"',";
            consulta += "'"+ui->lineEdit_FirstName->text()+"',";
            consulta += "'"+ui->lineEdit_SecondName->text()+"',";
            consulta += "'"+ui->comboBox_Sex->currentText()+"',";
            consulta += "'"+ui->dateEdit_DateofBirth->date().toString(Qt::ISODate)+"',";
            consulta += "'"+ui->comboBox_OrganDonor->currentText()+"',";
            consulta += "'"+ui->comboBox_MaritalStatus->currentText()+"',";
            consulta += "'"+ui->lineEdit_Country->text()+"',";
            consulta += "'"+ui->lineEdit_Departamento->text()+"',";
            consulta += "'"+ui->lineEdit_Provincia->text()+"',";
            consulta += "'"+ui->lineEdit_Distrito->text()+"',";
            consulta += "'"+ui->lineEdit_Lugar->text()+"',";
            consulta += "'"+ui->lineEdit_alergias->text()+"',";
            consulta += "'"+ui->lineEdit_Ocupation->text()+"',";
            consulta += "'"+ui->lineEdit_Telephone->text()+"',";
            consulta += "'"+ui->lineEdit_Cellphone->text()+"',";
            consulta += "'"+ui->lineEdit_Email->text()+"',";

            if(ui->comboBox_PrefSurgery->currentText() == "No")
                consulta += "'"+ui->comboBox_PrefSurgery->currentText()+"',";
            else
                consulta += "'"+ui->lineEdit_cirujias_previas->text()+"',";

            if(ui->comboBox_CurrentMedication->currentText() == "No")
                 consulta += "'"+ui->comboBox_CurrentMedication->currentText()+"',";
            else
                 consulta += "'"+ui->lineEdit_Medicacion_actual->text()+"',";



            consulta += "'"+ui->lineEdit_TutorPerson->text()+"',";
            consulta += "'"+ui->lineEdit_TelephoneTutorPerson->text()+"',";
            consulta += "'"+ui->lineEdit_antecedentes->text()+"',";
            consulta += "'"+ui->lineEdit_historiaClinica->text()+"')";







    if(ui->lineEdit_historiaClinica->text().size() > 0)
    {
        // Buscando historia Clinica Repetida

        //VERIFICANDO QUE EL CODIGO ESTE CORRECTAMENTE ESCRITO Y SEA MENOR
        QString  historia = ui->lineEdit_historiaClinica->text();
        QString letra = historia.at(0);
        int index=(int)historia[0].toAscii();


        if((index>=65 && index<=90) || (index>=97 && index<=122) )
        {
            //Aqui esta bien el codigo
            //VERIFICANDO QUE EL CODIGO SEA MENOR.
            QString candidato = historia.remove(0,1);
            query.prepare("SELECT numero FROM codigo WHERE letra = '"+letra+"'");
            query.exec();
            if(query.next())
            {
                QString ultimo_codigo = query.value(0).toString();

                if(ultimo_codigo.toInt(0)+1 >= candidato.toInt(0))
                {
                    query.prepare("SELECT * FROM Paciente WHERE codigo = '"+ui->lineEdit_historiaClinica->text()+"'");
                    query.exec();
                    if(query.next()){
                        QString str_warning = "El paciente con Historia "+ui->lineEdit_historiaClinica->text()+" ya existe."+"\nPorvafor ingrese otro codigo de historia";
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

                    if (ultimo_codigo.toInt(0)+1 == candidato.toInt(0)){

                        if(flag_status && ui->checkBox_Historia->checkState() == false){
                            query.prepare("UPDATE codigo SET numero="+get_numero()+" WHERE pk="+QString::number(get_index())+";");
                            query.exec();
                        }

                    }


                }

                else{
                    //El codigo tiene se estricatamente menor
                    msgBox->setText("El Codigo de historia clinica debe ser mayor a la secuencia");
                    msgBox->exec();
                    return;
                }
            }



        }
        else{
            //El codigo tiene se estricatamente menor
            msgBox->setText("La primera letra de la historia clinica debe ser una letra");
            msgBox->exec();
            return;

        }

    }
        query.prepare(consulta);
        if(!query.exec())
        {
            QString str_warning = "La persona con DNI "+ui->lineEdit_Dni->text()+" ya existe en el personal."+"\nPorvafor ingrese otro DNI";
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
        else
        {                        
            QString info = "Paciente con DNI "+ui->lineEdit_Dni->text()+"\nfue registrado con historia "+ui->lineEdit_historiaClinica->text();
            msgBox->setIcon(QMessageBox::Information);
            msgBox->setWindowTitle("Información");
            msgBox->setWindowIcon(QIcon(":/new/Add-Male-User.png"));

            msgBox->setText(info);
            msgBox->setStandardButtons(QMessageBox::Save);
            msgBox->setDefaultButton(QMessageBox::Save);
            msgBox->setButtonText(QMessageBox::Save, "Aceptar");

            ret = msgBox->exec();
            emit update_List_patients();


        }






    //------------------------CERRANDO VENTANA-------------------------------------------------------


        this->close();
    //SOLO ACTUALIZAR SI LA VENTANA NO CAMBIO

}

void newPaciente_paciente_ui::on_pushButton_Save_clicked()
{
    QMessageBox *msgBox = new QMessageBox;
    int ret;
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

    QString id = current_ID;
    QSqlQuery query;






    msgBox->setIcon(QMessageBox::Warning);
    msgBox->setWindowTitle("Confirmar Guardar");
    msgBox->setWindowIcon(QIcon(":/new/sign-up.png"));

    msgBox->setText("Los datos del paciente van a ser modificados.");
    msgBox->setInformativeText("¿Desea guardar los cambios?");
    msgBox->setStandardButtons(QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
    msgBox->setDefaultButton(QMessageBox::Save);
    msgBox->setButtonText(QMessageBox::Save, "Guardar");
    msgBox->setButtonText(QMessageBox::Discard, "No, guardar");
    msgBox->setButtonText(QMessageBox::Cancel, "Cancelar");
    ret = msgBox->exec();




    switch(ret)
    {
    case QMessageBox::Save:



        query.prepare("UPDATE Paciente SET dni=?,apellido_paterno=?,apellido_materno=?,primer_nombre=?,segundo_nombre=?,sexo=?,fecha_nacimiento=?,donacion_organos=?,estado_civil=?,pais=?,departamento=?,provincia=?,distrito=?,direccion=?,alergias=?,ocupacion=?,telefono_paciente=?,celular_paciente=?,email=?,cirujias_previas=?,medicacion_actual=?,persona_recurrir=?,telefono_persona_recurrir=?,antecedentes=?,codigo=? WHERE idPaciente='"+id+"'");



        query.bindValue(0,ui->lineEdit_Dni->text());
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

        query.bindValue(14,ui->lineEdit_alergias->text());
        query.bindValue(15,ui->lineEdit_Ocupation->text());
        query.bindValue(16,ui->lineEdit_Telephone->text());
        query.bindValue(17,ui->lineEdit_Cellphone->text());
        query.bindValue(18,ui->lineEdit_Email->text());
        if(ui->comboBox_PrefSurgery->currentText() == "No")
            query.bindValue(19,ui->comboBox_PrefSurgery->currentText());
        else
            query.bindValue(19,ui->lineEdit_cirujias_previas->text());

        if(ui->comboBox_CurrentMedication->currentText() == "No")
            query.bindValue(20,ui->comboBox_CurrentMedication->currentText());
        else
            query.bindValue(20,ui->lineEdit_Medicacion_actual->text());
        query.bindValue(21,ui->lineEdit_TutorPerson->text());
        query.bindValue(22,ui->lineEdit_TelephoneTutorPerson->text());
        query.bindValue(23,ui->lineEdit_antecedentes->text());
        query.bindValue(24,ui->lineEdit_historiaClinica->text());
        query.exec();



        emit update_List_patients();
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



void newPaciente_paciente_ui::on_pushButton_Cancel_clicked()
{

    accept=false;
    this->close();
}
//PARA HABILITAR BOTONOS ACEPTAR; GUARDAR; CANCELAR

void newPaciente_paciente_ui::set_cliked_type(int type)
{
    switch(type)
    {
        case 0:
            ui->pushButton_Acept->setDisabled(1);
            ui->pushButton_Save->setDisabled(1);
            flag_status = false;
            break;

        case 1:
            ui->pushButton_Acept->setDisabled(1);
            flag_status = false;
            break;
        case 2:
            ui->pushButton_Save->setDisabled(1);
            flag_status = true;
            break;
    }
}

//PARA ACTUALIZAR CONTENIDO DE LA UI
void newPaciente_paciente_ui::show_data_paciente_form(QString id)
{

    QSqlQuery query;
    query.prepare("SELECT * FROM Paciente WHERE idPaciente='"+id+"'");
    query.exec();
    query.next();


    const QString DNI = query.value(1).toString();
    const QString APELLIDO_PATERNO =query.value(2).toString();
    const QString APELLIDO_MATERNO =query.value(3).toString();
    const QString PRIMER_NOMBRE =query.value(4).toString();
    const QString SEGUNDO_NOMBRE =query.value(5).toString();
    const QString SEXO =query.value(6).toString();
    const QString FECHA_NACIMENTO =query.value(7).toString(); //Update show this var in the form
    const QString DONACION_ORGANOS =query.value(8).toString();
    const QString ESTADO_CIVIL =query.value(9).toString();
    const QString PAIS =query.value(10).toString();
    const QString DEPARTAMENTO =query.value(11).toString();
    const QString PROVINCIA =query.value(12).toString();
    const QString DISTRITO =query.value(13).toString();
    const QString DIRECCION =query.value(14).toString();



    const QString ALERGIAS = query.value(15).toString();
    const QString OCUPACION = query.value(16).toString();
    const QString TELEFONO_PACIENTE = query.value(17).toString();
    const QString CELULAR_PACIENTE = query.value(18).toString();
    const QString EMAIL = query.value(19).toString();
    const QString CIRUJIAS_PREVIAS = query.value(20).toString();
    const QString MEDICACION_ACTUAL = query.value(21).toString();
    const QString PERSONAS_RECURRIR = query.value(22).toString();
    const QString TELEFONO_PERSONA_RECURRIR = query.value(23).toString();
    const QString ANTECEDENTES = query.value(24).toString();
    const QString NICK_HISTORIA_CLINICA = query.value(25).toString();


    if(DNI.toInt(0) < 0)
        ui->lineEdit_Dni->setText("");
    else
        ui->lineEdit_Dni->setText(DNI);

    ui->lineEdit_FatherName->insert(APELLIDO_PATERNO);
    ui->lineEdit_MotherName->insert(APELLIDO_MATERNO);
    ui->lineEdit_FirstName->insert(PRIMER_NOMBRE);
    ui->lineEdit_SecondName->insert(SEGUNDO_NOMBRE);
 //   ui->lineEdit_Dni->insert(DNI);
    ui->lineEdit_Ocupation->insert(OCUPACION);
    ui->lineEdit_Telephone->insert(TELEFONO_PACIENTE);
    ui->lineEdit_Cellphone->insert(CELULAR_PACIENTE);
    ui->lineEdit_Email->insert(EMAIL);

    ui->dateEdit_DateofBirth->setDate(toDate(FECHA_NACIMENTO));

    if(SEXO=="Femenino")ui->comboBox_Sex->setCurrentIndex(0);
    if(SEXO=="Masculino")ui->comboBox_Sex->setCurrentIndex(1);

    if(DONACION_ORGANOS=="No información")ui->comboBox_OrganDonor->setCurrentIndex(0);
    if(DONACION_ORGANOS=="Si")ui->comboBox_OrganDonor->setCurrentIndex(1);
    if(DONACION_ORGANOS=="No")ui->comboBox_OrganDonor->setCurrentIndex(2);

    if(ESTADO_CIVIL=="Soltero/a")ui->comboBox_MaritalStatus->setCurrentIndex(0);
    if(ESTADO_CIVIL=="Casado/a")ui->comboBox_MaritalStatus->setCurrentIndex(1);
    if(ESTADO_CIVIL=="Divorciado/a")ui->comboBox_MaritalStatus->setCurrentIndex(2);
    if(ESTADO_CIVIL=="Viudo/a")ui->comboBox_MaritalStatus->setCurrentIndex(3);


    if(CIRUJIAS_PREVIAS=="No")
    {
        ui->comboBox_PrefSurgery->setCurrentIndex(1);
    }
    else
    {
        ui->comboBox_PrefSurgery->setCurrentIndex(0);
        ui->lineEdit_cirujias_previas->setText(CIRUJIAS_PREVIAS);
    }
    if(MEDICACION_ACTUAL=="No")
    {
        ui->comboBox_CurrentMedication->setCurrentIndex(1);
    }
    else
    {
        ui->comboBox_CurrentMedication->setCurrentIndex(0);
        ui->lineEdit_Medicacion_actual->setText(MEDICACION_ACTUAL);
    }
    //-------------------------------------------------------------
    ui->lineEdit_alergias->insert(ALERGIAS);
    ui->lineEdit_TutorPerson->insert(PERSONAS_RECURRIR);
    ui->lineEdit_TelephoneTutorPerson->insert(TELEFONO_PERSONA_RECURRIR);
    ui->lineEdit_antecedentes->insert(ANTECEDENTES);
    //-------------------------------------------------------------

    ui->lineEdit_Country->insert(PAIS);
    ui->lineEdit_Departamento->insert(DEPARTAMENTO);
    ui->lineEdit_Provincia->insert(PROVINCIA);
    ui->lineEdit_Distrito->insert(DISTRITO);
    ui->lineEdit_Lugar->insert(DIRECCION);
    ui->lineEdit_historiaClinica->insert(NICK_HISTORIA_CLINICA);
    if(ui->lineEdit_historiaClinica->text().size()>0)
    {
        ui->checkBox_Historia->setChecked(false);
        ui->checkBox_Historia->setDisabled(true);

    }
    else{
        ui->checkBox_Historia->setChecked(true);
    }

}

void newPaciente_paciente_ui::hideButtonShow()
{
    ui->pushButton_Acept->hide();
    ui->pushButton_Save->hide();
}

void newPaciente_paciente_ui::on_lineEdit_Dni_textChanged(const QString &arg1)
{

}
void newPaciente_paciente_ui::on_lineEdit_FatherName_editingFinished()
{


}

void newPaciente_paciente_ui::on_lineEdit_FatherName_textChanged(const QString &arg1)
{   
    //CALCULAR SOLO SI ESTA EN NUEVO Y EL TAMANO ES 1
    if(flag_status && arg1.size()==1 && !ui->checkBox_Historia->checkState())
    {
        ui->lineEdit_historiaClinica->setText(calculateCodeHistoryClinic(arg1));
    }
}


void newPaciente_paciente_ui::setParentWindow(MainWindow *parent)
{
    parentWindow=parent;
}

void newPaciente_paciente_ui::setcodeWindow(int code)
{
    codeWindow=code;
}

bool newPaciente_paciente_ui::changeParentWindow(int code)
{
    if(code == parentWindow->getlastcodeWindow())
        return false;
    else return true;
}

QString newPaciente_paciente_ui::calculateCodeHistoryClinic(QString arg1)
{
    QMessageBox *msgBox=new QMessageBox;

    QString APELLIDO_PATERNO= arg1;
    QString letra;
    QString svalor;

    QSqlQuery query;
    //SOLO NUEVO PACIENTE
    svalor.clear();
    letra = APELLIDO_PATERNO[0];
    int index=(int)APELLIDO_PATERNO[0].toAscii();
    letra=letra.toStdString().c_str();
    int pos=0;
    if((index>=65 && index<=90) || (index>=97 && index<=122) || index==-47 || index==-15 )
    {
        if(index>=65 && index<=90 )
            pos=index-64;
        if(index>=97 && index<=122 )
            pos=index-96;
        if(index== -47 || index==-15)
            pos=27;

        int valor;
        query.prepare("select numero from codigo where pk="+QString::number(pos)+";");
        query.exec();
        query.next();
        valor=query.value(0).toInt();
        valor++;
        set_cod_historia(pos,QString::number(valor));
        svalor=QString::number(valor);
        svalor = letra.toUpper() + svalor;
        return svalor;

    }
    else
    {
        if(!arg1.isEmpty())
        {
            msgBox->setIcon(QMessageBox::Critical);
            msgBox->setWindowTitle("Error");
            msgBox->setWindowIcon(QIcon(":/new/1329798431_Application.png"));
            msgBox->setText("Error en apellido paterno.");
            msgBox->exec();
            ui->lineEdit_FatherName->setFocus();
        }
        return "";
    }




}


void newPaciente_paciente_ui::on_checkBox_Historia_clicked(bool checked)
{
    ui->lineEdit_historiaClinica->setEnabled(!checked);
    if(checked){
        ui->lineEdit_historiaClinica->clear();
    }
    else{
        QString apellido = ui->lineEdit_FatherName->text().at(0);
        qDebug()<<"Llamando "<<apellido<<endl;
        ui->lineEdit_historiaClinica->setText(calculateCodeHistoryClinic(apellido));
    }
}


