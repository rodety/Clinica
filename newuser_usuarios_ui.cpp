#include "newuser_usuarios_ui.h"
#include "ui_newuser_usuarios_ui.h"
#include <QSqlQuery>
#include <QDebug>
#include <string>
#include <QMessageBox>

using namespace  std;

newuser_usuarios_ui::newuser_usuarios_ui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::newuser_usuarios_ui)
{

    ui->setupUi(this);
    //ui->lineEdit_dni->setValidator(new QIntValidator(0, 99999999));
}

newuser_usuarios_ui::~newuser_usuarios_ui()
{
    delete ui;
}

void newuser_usuarios_ui::on_pushButton_Acept_clicked()
{
    QMessageBox *msgBox = new QMessageBox;
    int ret;
    /*
    if(ui->lineEdit_dni->text().length() != 8)
    {
        QString str_warning = "Porfavor ingrese un dni con 8 caracteres";
        ret = QMessageBox::warning(this, tr("Warning"), tr(str_warning.toStdString().data()),
                                       QMessageBox::Ok);
        msgBox->setButtonText(QMessageBox::Close, "Ok");
        return;
    }
    */
    QSqlQuery query;
    QString NOMBRE,USUARIO,CLAVE,CONFIRMACION_CLAVE;
    bool FLAG = true;


    while(FLAG)
    {
        CLAVE = ui->lineEdit_Password->text().toAscii();
        CONFIRMACION_CLAVE = ui->lineEdit_confirmPassword->text().toAscii().constData();

        NOMBRE = ui->lineEdit_Name->text();
        USUARIO = ui->lineEdit_UserNick->text();

        if(qstrcmp(ui->lineEdit_Password->text().toAscii().constData(), ui->lineEdit_confirmPassword->text().toAscii().constData())!=0)
        {
            qDebug()<<"CLAVES DISTINTAS";
            ui->lineEdit_Password->clear();
            ui->lineEdit_confirmPassword->clear();
            FLAG = false;

            QString str_warning = "Usted debe ingresar una misma clave en los campos Clave y Confimar clave.";
            ret = QMessageBox::warning(this, tr("Warning"), tr(str_warning.toStdString().data()),
                                           QMessageBox::Ok);
            msgBox->setButtonText(QMessageBox::Close, "Ok");
            return;
        }else{
            qDebug()<<"CLAVES IGUALES :)";
            FLAG = false;
            query.prepare("INSERT INTO e_usuario(nombre,nick,clave,agenda,paciente,historia_clinica,tratamientos,usuarios,mailing,facebook,alertas) VALUES(?,?,?,?,?,?,?,?,?,?,?)");
            query.bindValue(0,NOMBRE);
            query.bindValue(1,USUARIO);
            query.bindValue(2,CLAVE);
            query.bindValue(3,0);//agenda
            query.bindValue(4,0);//paciente
            query.bindValue(5,0);//historia_clinica
            query.bindValue(6,0);//tratamientos
            query.bindValue(7,0);//usuarios
            query.bindValue(8,0);//mailing
            query.bindValue(9,0);//facebook
            query.bindValue(10,0);//alerta
            query.exec();
            if(query.numRowsAffected()==1)
            {
                QString info = "Se creo una nuevo usuario "+USUARIO+".";

                msgBox->setIcon(QMessageBox::Information);
                msgBox->setWindowTitle("Información");
                msgBox->setWindowIcon(QIcon(":/new/add-user.png"));

                msgBox->setText(info);
                msgBox->setStandardButtons(QMessageBox::Save);
                msgBox->setDefaultButton(QMessageBox::Save);
                msgBox->setButtonText(QMessageBox::Save, "Aceptar");

                ret = msgBox->exec();
            }
            else
            {
                QString str_warning = "Ingrese un usuario válido porfavor.";
                msgBox->setIcon(QMessageBox::Warning);
                msgBox->setWindowTitle("Advertencia");
                msgBox->setWindowIcon(QIcon(":/new/add-user-.png"));

                msgBox->setText(str_warning);
                msgBox->setStandardButtons(QMessageBox::Save);
                msgBox->setDefaultButton(QMessageBox::Save);
                msgBox->setButtonText(QMessageBox::Save, "Aceptar");

                ret = msgBox->exec();
                return;
            }
        }
    }

    this->close();
    if(!changeParentWindow(codeWindow))
        parent_ui_form->update_table_users();
}

void newuser_usuarios_ui::on_pushButton_Save_clicked()
{

   QString CODIGO_USUARIO,CLAVE,CONFIRMACION_CLAVE,NOMBRE,USUARIO;
   QSqlQuery query;

   int ret;
   QMessageBox *msgBox = new QMessageBox;



   CODIGO_USUARIO = user_code_var;

   bool FLAG = true;

   while(FLAG)
   {
       CLAVE = ui->lineEdit_Password->text().toAscii();
       CONFIRMACION_CLAVE = ui->lineEdit_confirmPassword->text().toAscii().constData();

       NOMBRE = ui->lineEdit_Name->text();
       USUARIO = ui->lineEdit_UserNick->text();

       if(qstrcmp(ui->lineEdit_Password->text().toAscii().constData(), ui->lineEdit_confirmPassword->text().toAscii().constData())!=0)
       {
           qDebug()<<"CLAVES DISTINTAS";
           ui->lineEdit_Password->clear();
           ui->lineEdit_confirmPassword->clear();
           FLAG = false;
           msgBox->setIcon(QMessageBox::Warning);
           msgBox->setWindowTitle("Advertencia");
           msgBox->setWindowIcon(QIcon(":/new/edit-user.png"));

           msgBox->setText("Porfavor ingrese claves iguales.");

           msgBox->setStandardButtons(QMessageBox::Ok);
           msgBox->setDefaultButton(QMessageBox::Ok);
           msgBox->setButtonText(QMessageBox::Ok, "Ok");

           ret = msgBox->exec();
           return;
       }else{
           qDebug()<<"CLAVES IGUALES :)";

           msgBox->setIcon(QMessageBox::Warning);
           msgBox->setWindowTitle("Confirmar Guardar como");
           msgBox->setWindowIcon(QIcon(":/new/edit-user.png"));

           msgBox->setText("El usuario seleccionado va a ser modificado.");
           msgBox->setInformativeText("¿Desea guardar los cambios?");
           msgBox->setStandardButtons(QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
           msgBox->setDefaultButton(QMessageBox::Save);
           msgBox->setButtonText(QMessageBox::Save, "Guardar");
           msgBox->setButtonText(QMessageBox::Discard, "No, guardar");
           msgBox->setButtonText(QMessageBox::Cancel, "Cancelar");
           ret = msgBox->exec();

           FLAG = false;

           switch(ret)
           {
           case QMessageBox::Save:
               query.prepare("UPDATE e_usuario SET nombre=?,nick=?,clave=? WHERE usuario_pk="+CODIGO_USUARIO);
               query.bindValue(0,NOMBRE);
               query.bindValue(1,USUARIO);
               query.bindValue(2,CLAVE);
               query.exec();
               this->close();
               if(!changeParentWindow(codeWindow))
                parent_ui_form->update_table_users();
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
   }

}

void newuser_usuarios_ui::show_data_user_form(QString code)
{
    QSqlQuery query;
    QString CODIGO_USUARIO,NOMBRE,NICK,CLAVE;

    CODIGO_USUARIO = code;

    qDebug()<<"CURRENT_CODE_USER : "<<CODIGO_USUARIO<<endl;
    query.prepare("SELECT nombre,nick,clave FROM e_usuario WHERE usuario_pk="+CODIGO_USUARIO);
    query.exec();
    query.next();

    NOMBRE = query.value(0).toString();
    NICK = query.value(1).toString();
    CLAVE = query.value(2).toString();


    ui->lineEdit_Name->insert(NOMBRE);
    ui->lineEdit_UserNick->insert(NICK);
    ui->lineEdit_Password->insert(CLAVE);
    ui->lineEdit_confirmPassword->insert(CLAVE);


}

void newuser_usuarios_ui::set_cliked_type(int type)
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

void newuser_usuarios_ui::on_pushButton_Cancel_clicked()
{
    this->close();
}

void newuser_usuarios_ui::on_pushButton_consultar_clicked()
{
    QString DNI,NOMBRES,APELLIDOS,FULLNAME;

    DNI = ui->lineEdit_dni->text();

    QSqlQuery query;
    query.prepare("SELECT apellido_paterno,apellido_materno,primer_nombre,segundo_nombre FROM e_dni WHERE dni_pk="+DNI);
    query.exec();
    query.next();

    APELLIDOS = query.value(0).toString()+ " " + query.value(1).toString();
    NOMBRES = query.value(2).toString()+ " " + query.value(3).toString();

    FULLNAME = APELLIDOS +" "+NOMBRES;

    ui->lineEdit_Name->clear();
    ui->lineEdit_Name->setText(FULLNAME);
}

void newuser_usuarios_ui::setParentWindow(MainWindow *parent)
{
    parentWindow=parent;
}

void newuser_usuarios_ui::setcodeWindow(int code)
{
    codeWindow=code;
}

bool newuser_usuarios_ui::changeParentWindow(int code)
{

    if(code == parentWindow->getlastcodeWindow()){

        return false;
    }
    else return true;
}

