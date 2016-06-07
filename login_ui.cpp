#include "login_ui.h"
#include "ui_login_ui.h"
using namespace std;


login_ui::login_ui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login_ui)
{
    ui->setupUi(this);
    flag = true;

    CONFIG_PROGRAM_FORM = new ConfigProgram;
    CONFIG_PROGRAM_FORM->setWidgetLogin(this);

}
void login_ui::crearFichero()
{

}




login_ui::~login_ui()
{
    delete ui;
}

void login_ui::on_pushButton_Login_clicked()
{

    QString NOMBRE,NICK,CLAVE,NAME_EDIT,PASS_EDIT,CURRENT_USER;
    int AGENDA,PACIENTE,HISTORIA_CLINICA,TRATAMIENTOS,USUARIOS,MAILING,FACEBOOK,ALERTAS,PERSONAL,LOGIN;
    NAME_EDIT = ui->lineEdit_User->text();
    PASS_EDIT = ui->lineEdit_Password->text();

    if(NAME_EDIT==""||PASS_EDIT=="")
    {
        return;
    }

    qDebug()<<" NICK_LOGIN : "<<NAME_EDIT<<endl;
    qDebug()<<" PASSWORD : "<<PASS_EDIT<<endl;

    QSqlQuery query;
    query.prepare("SELECT nombre,nick,clave,agenda,paciente,historia_clinica,tratamientos,usuarios,mailing,facebook,alertas,personal,login,usuario_pk FROM e_usuario WHERE nick='"+NAME_EDIT+"'");
    query.exec();
    query.next();


    NOMBRE = query.value(0).toString();
    NICK = query.value(1).toString();
    CLAVE = query.value(2).toString();

    //-----PERMISOS-----------

    AGENDA = query.value(3).toInt();
    PACIENTE = query.value(4).toInt();
    HISTORIA_CLINICA = query.value(5).toInt();
    TRATAMIENTOS = query.value(6).toInt();
    USUARIOS = query.value(7).toInt();
    MAILING = query.value(8).toInt();
    FACEBOOK = query.value(9).toInt();
    ALERTAS = query.value(10).toInt();
    PERSONAL = query.value(11).toInt();
    LOGIN = query.value(12).toInt();
    CURRENT_USER = query.value(13).toString();

    qDebug()<<"REAL_PASS : "<<CLAVE<<endl;

    bool validUser=qstrcmp(NICK.toAscii().constData(),ui->lineEdit_User->text().toAscii().constData())!=0;
    bool validPass=qstrcmp(CLAVE.toAscii().constData(),ui->lineEdit_Password->text().toAscii().constData())!=0;

    qDebug()<<"Nombre1: "<<NICK<<endl;
    qDebug()<<"Clave1: "<<CLAVE<<endl;
    qDebug()<<"ui->lineEdit_User: "<<ui->lineEdit_User->text()<<endl;
    qDebug()<<"ui->lineEdit_Password: "<<ui->lineEdit_Password->text()<<endl;

    if(validUser || validPass)
    {
        //QMessageBox *msgBox=new QMessageBox;
        int ret;
        if(validUser)
            ret = QMessageBox::warning(this, tr("Warning"), tr("Usuario no registrado"),
                                           QMessageBox::Close);
        else
            ret = QMessageBox::warning(this, tr("Warning"), tr("La clave es incorrecta"),
                                           QMessageBox::Close);
        qDebug()<<"MASTER OUT"<<endl;


    }
    else
    {
        qDebug()<<"MASTER ON"<<endl;
        ///*
        ((MainWindow*)PRINCIPAL_FORM)->initialize();

        PRINCIPAL_FORM->agenda_access_var = AGENDA;
        PRINCIPAL_FORM->paciente_access_var = PACIENTE;
        PRINCIPAL_FORM->historia_clinica_access_var = HISTORIA_CLINICA;
        PRINCIPAL_FORM->tratamientos_agenda_access_var = TRATAMIENTOS;
        PRINCIPAL_FORM->usuarios_agenda_access_var = USUARIOS;
        PRINCIPAL_FORM->mailing_agenda_access_var = MAILING;
        PRINCIPAL_FORM->facebook_agenda_access_var = FACEBOOK;
        PRINCIPAL_FORM->alertas_agenda_access_var = ALERTAS;
        PRINCIPAL_FORM->personal_agenda_access_var = PERSONAL;
        PRINCIPAL_FORM->login_access_var = LOGIN;

        PRINCIPAL_FORM->current_user_code_var = CURRENT_USER;

        //*/
        qDebug()<<" PK_CURRENT USER : "<<PRINCIPAL_FORM->current_user_code_var<<endl;

        PRINCIPAL_FORM->executeProgram();


        this->close();
    }
}

void login_ui::on_pushButton_configurar_clicked()
{    
}

void login_ui::on_tabWidget_destroyed()
{

}

void login_ui::on_lineEdit_Password_returnPressed()
{
    on_pushButton_Login_clicked();
}

bool login_ui::ejecutar_conexiones()
{


}
