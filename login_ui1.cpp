#include "login_ui.h"
#include "ui_login_ui.h"
#include <QSqlQuery>
#include <QDebug>
#include <QFileDialog>
#include <fstream>
using namespace std;

void login_ui::crearFichero()
{
    int count =0;
    ifstream is("pb_config.txt");
    if(!is.is_open())
    {
        ofstream os("pb_config.txt");
        if(os.is_open())
        {
            count++;
        }
    }
    else
    {
        count+=2;
    }
    is.open("config.txt");
    if(!is.is_open())
    {
        ofstream os("config.txt");
        if(os.is_open())
        {
            count++;
        }
    }
    else
    {
        count+=2;
    }

    QFile file("pb_config.txt");
    file.open(QIODevice::ReadOnly|QIODevice::Text);

    QString str_showWidget;

    QTextStream in(&file);

    str_showWidget = in.readLine(9);



    qDebug()<<"str_showWidget: "<<str_showWidget<<endl;


    //ui->gridLayout_2->addItem(new QPushButton("Configurar"));
    /*
    ui->pushButton_configurar->setDisabled(true);
    if(str_showWidget == "neymar10*")
    {
        ui->pushButton_configurar->setEnabled(true);
    }
*/
    qDebug()<<"COUNT: "<<count<<endl;
}

login_ui::login_ui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login_ui)
{
    ui->setupUi(this);

    //----------------------------------------------------------
    //Crear ficheros

    //------------------------------------------------------------------

    qDebug()<<"STAR PROGRAM"<<endl;

    QSqlDatabase db =  QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("clinicadb");
    //db.setHostName("praxismedical.sytes.net");
    //db.setDatabaseName("clinica");
    db.setUserName("root");
    db.setPassword("root");
    bool ok = db.open();
    if (ok)
    {
        qDebug() << "Conection Success";
    }




}
/*
bool login_ui::eventFilter(QObject *obj, QEvent *e)
{
    QKeyEvent *keyEvent = (QKeyEvent*)e;

    if(keyEvent->key() == 'a')
    {
        CONFIG_PROGRAM_FORM->show();
    }
    return login_ui::eventFilter(obj, e);
}
*/
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

    bool validUser=qstrcmp(NOMBRE.toAscii().constData(),ui->lineEdit_User->text().toAscii().constData())!=0;
    bool validPass=qstrcmp(CLAVE.toAscii().constData(),ui->lineEdit_Password->text().toAscii().constData())!=0;



    if(!(validUser || validPass))
    {
        QMessageBox *msgBox=new QMessageBox;
        int ret;
        if(!validUser)
            ret = QMessageBox::warning(this, tr("Warning"), tr("Usuario no registrado"),
                                           QMessageBox::Close);
        else
            ret = QMessageBox::warning(this, tr("Warning"), tr("La clave es incorrecta"),
                                           QMessageBox::Close);
        qDebug()<<"MASTER OUT"<<endl;


    }else{
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
    CONFIG_PROGRAM_FORM = new ConfigProgram;
    CONFIG_PROGRAM_FORM->show();
}
