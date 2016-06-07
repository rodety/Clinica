#include "usuarios_ui.h"
#include "ui_usuarios_ui.h"
#include <QSqlQuery>
#include <QDebug>
#include <QMessageBox>

usuarios_ui::usuarios_ui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::usuarios_ui)
{

    ui->setupUi(this);

    update_table_users();
    ui->lineEdit_userCode->setDisabled(true);
    ui->lineEdit_currentUserSelectec->setDisabled(true);
    ui->tableWidget_list_users->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_list_users->setColumnWidth(0, 250);
    ui->tableWidget_list_users->setColumnWidth(1, 500);
    ui->tableWidget_list_users->setColumnWidth(2, 110);

    ui->lineEdit_currentSesion->setReadOnly(true);
    ui->lineEdit_currentUserSelectec->setReadOnly(true);
    ui->lineEdit_userCode->setReadOnly(true);
}

usuarios_ui::~usuarios_ui()
{
    delete ui;
}

//----------------retorno de permisos para el usuario--------------

int usuarios_ui::get_agenda_ui_access()
{
    return ui->comboBox_agenda->currentIndex();
}

int usuarios_ui::get_paciente_ui_access()
{
    return ui->comboBox_paciente->currentIndex();
}

int usuarios_ui::get_historia_clinica_ui_access()
{
    return ui->comboBox_historia_clinica->currentIndex();
}

int usuarios_ui::get_tratamientos_ui_access()
{
    return ui->comboBox_tratamientos->currentIndex();
}
int usuarios_ui::get_usuarios_ui_access()
{
    return ui->comboBox_usuarios->currentIndex();
}
int usuarios_ui::get_mailing_ui_access()
{
    return ui->comboBox_mailing->currentIndex();
}
int usuarios_ui::get_facebook_ui_access()
{
    return ui->comboBox_facebook->currentIndex();
}
int usuarios_ui::get_alertas_ui_access()
{
    return ui->comboBox_alertas->currentIndex();
}
int usuarios_ui::get_personal_ui_access()
{
    return ui->comboBox_personal->currentIndex();
}

void usuarios_ui::on_pushButton_clicked()
{

    newuser_usuarios_ui* NEW_USER_FORM = new newuser_usuarios_ui;
    NEW_USER_FORM->setWindowTitle("Nuevo usuario");
    NEW_USER_FORM->set_cliked_type(2);
    NEW_USER_FORM->parent_ui_form = this;    
    NEW_USER_FORM->setParentWindow(parentWindow);
    NEW_USER_FORM->setcodeWindow(parentWindow->getcodeWindow());
    NEW_USER_FORM->show();
}

void usuarios_ui::on_pushButton_2_clicked()
{

    if(ui->lineEdit_userCode->text() == "")
    {
        QMessageBox *msgBox = new QMessageBox;
        int ret;
        msgBox->setWindowTitle("Advertencia");
        msgBox->setWindowIcon(QIcon(":\new\edit-user.png"));
        msgBox->setIcon(QMessageBox::Warning);
        msgBox->setText("Porfavor eleccione un elemento de la tabla");
        msgBox->setDefaultButton(QMessageBox::Close);
        msgBox->setButtonText(QMessageBox::Close, "Salir");
        ret = msgBox->exec();
        return;
    }
    newuser_usuarios_ui* EDIT_USER_FORM = new newuser_usuarios_ui;
    EDIT_USER_FORM->setWindowTitle("Editar Usuario");
    EDIT_USER_FORM->user_code_var = ui->lineEdit_userCode->text();
    EDIT_USER_FORM->show_data_user_form(ui->lineEdit_userCode->text());
    EDIT_USER_FORM->set_cliked_type(1);
    EDIT_USER_FORM->parent_ui_form = this;
    EDIT_USER_FORM->setParentWindow(parentWindow);
    EDIT_USER_FORM->setcodeWindow(parentWindow->getcodeWindow());
    EDIT_USER_FORM->show();
}

void usuarios_ui::update_table_users()
{
    //-------------------- CLEAR DATA
    for (int i=ui->tableWidget_list_users->rowCount()-1; i >= 0; --i)
        ui->tableWidget_list_users->removeRow(i);

    // -----------------UPDATE TABLE

    ui->tableWidget_list_users->setSortingEnabled(0);
    QSqlQuery query;
    QString NOMBRE,NICK,USER_CODE;
    int COUNT,AGENDA,PACIENTE,HISTORIA_CLINICA,TRATAMIENTOS,USUARIOS,MAILING,FACEBOOK,ALERTAS,PERSONAL,LOGIN;

    COUNT = 0;

    query.prepare("SELECT nombre,nick,agenda,paciente,historia_clinica,tratamientos,usuarios,mailing,facebook,alertas,personal,login,usuario_pk FROM e_usuario");
    query.exec();

    while(query.next())
    {
        NOMBRE = query.value(0).toString();
        NICK = query.value(1).toString();
        USER_CODE = query.value(12).toString();

        //- -  - - - -- - - - - PERMISOS

        AGENDA = query.value(2).toInt();
        PACIENTE = query.value(3).toInt();
        HISTORIA_CLINICA = query.value(4).toInt();
        TRATAMIENTOS = query.value(5).toInt();
        USUARIOS = query.value(6).toInt();
        MAILING = query.value(7).toInt();
        FACEBOOK = query.value(8).toInt();
        ALERTAS = query.value(9).toInt();
        PERSONAL = query.value(10).toInt();
        LOGIN = query.value(11).toInt();


        ui->tableWidget_list_users->insertRow(COUNT);

        ui->tableWidget_list_users->setItem(COUNT,0,new QTableWidgetItem(NICK));
        ui->tableWidget_list_users->setItem(COUNT,1,new QTableWidgetItem(NOMBRE));
        ui->tableWidget_list_users->setItem(COUNT,2,new QTableWidgetItem(USER_CODE));

        COUNT++;

    }
    ui->tableWidget_list_users->setSortingEnabled(1);

}

void usuarios_ui::on_tableWidget_list_users_itemClicked(QTableWidgetItem *item)
{
    int FILA;
    QString NOMBRE,NICK,CODIGO_USUARIO;
    int AGENDA,PACIENTE,HISTORIA_CLINICA,TRATAMIENTOS,USUARIOS,MAILING,FACEBOOK,ALERTAS,PERSONAL,LOGIN;

    FILA = item->row();

    NOMBRE = ui->tableWidget_list_users->item(FILA,0)->text();
    NICK = ui->tableWidget_list_users->item(FILA,1)->text();
    CODIGO_USUARIO = ui->tableWidget_list_users->item(FILA,2)->text();


    QSqlQuery query;
    query.prepare("SELECT agenda,paciente,historia_clinica,tratamientos,usuarios,mailing,facebook,alertas,personal,login FROM e_usuario WHERE usuario_pk='"+CODIGO_USUARIO+"'");
    query.exec();
    query.next();

    AGENDA = query.value(0).toInt();
    PACIENTE = query.value(1).toInt();
    HISTORIA_CLINICA = query.value(2).toInt();
    TRATAMIENTOS = query.value(3).toInt();
    USUARIOS = query.value(4).toInt();
    MAILING = query.value(5).toInt();
    FACEBOOK = query.value(6).toInt();
    ALERTAS = query.value(7).toInt();
    PERSONAL = query.value(8).toInt();
    LOGIN = query.value(9).toInt();

    ui->lineEdit_currentUserSelectec->clear();
    ui->lineEdit_currentUserSelectec->insert(NOMBRE);

    ui->lineEdit_userCode->clear();
    ui->lineEdit_userCode->insert(CODIGO_USUARIO);

    ui->comboBox_agenda->setCurrentIndex(AGENDA);
    ui->comboBox_alertas->setCurrentIndex(ALERTAS);
    ui->comboBox_facebook->setCurrentIndex(FACEBOOK);
    ui->comboBox_historia_clinica->setCurrentIndex(HISTORIA_CLINICA);
    ui->comboBox_mailing->setCurrentIndex(MAILING);
    ui->comboBox_paciente->setCurrentIndex(PACIENTE);
    ui->comboBox_personal->setCurrentIndex(PERSONAL);
    ui->comboBox_tratamientos->setCurrentIndex(2);
    ui->comboBox_usuarios->setCurrentIndex(USUARIOS);

    ui->lineEdit_userCode->setText(CODIGO_USUARIO);
}

void usuarios_ui::on_pushButton_4_clicked()
{
    QString CODIGO_USUARIO;
    int AGENDA,PACIENTE,HISTORIA_CLINICA,TRATAMIENTOS,USUARIOS,MAILING,FACEBOOK,ALERTAS,PERSONAL;

    QMessageBox *msgBox = new QMessageBox;
    int ret;
    if(ui->lineEdit_userCode->text() == "")
    {

        msgBox->setWindowTitle("Advertencia");
        msgBox->setWindowIcon(QIcon(":/new/edit-user.png"));
        msgBox->setIcon(QMessageBox::Warning);
        msgBox->setText("Porfavor eleccione un elemento de la tabla");
        msgBox->setDefaultButton(QMessageBox::Close);
        msgBox->setButtonText(QMessageBox::Close, "Salir");
        ret = msgBox->exec();
        return;
    }



    CODIGO_USUARIO = ui->lineEdit_userCode->text();

    AGENDA = ui->comboBox_agenda->currentIndex();
    PACIENTE = ui->comboBox_paciente->currentIndex();
    HISTORIA_CLINICA = ui->comboBox_historia_clinica->currentIndex();
    TRATAMIENTOS = ui->comboBox_tratamientos->currentIndex();
    USUARIOS = ui->comboBox_usuarios->currentIndex();
    MAILING = ui->comboBox_mailing->currentIndex();
    FACEBOOK = ui->comboBox_facebook->currentIndex();
    ALERTAS = ui->comboBox_alertas->currentIndex();
    PERSONAL = ui->comboBox_personal->currentIndex();


    QSqlQuery query;
    query.prepare("UPDATE e_usuario SET agenda=?,paciente=?,historia_clinica=?,tratamientos=?,usuarios=?,mailing=?,facebook=?,alertas=?,personal=? WHERE usuario_pk="+CODIGO_USUARIO);
    query.bindValue(0,AGENDA);
    query.bindValue(1,PACIENTE);
    query.bindValue(2,HISTORIA_CLINICA);
    query.bindValue(3,TRATAMIENTOS);
    query.bindValue(4,USUARIOS);
    query.bindValue(5,MAILING);
    query.bindValue(6,FACEBOOK);
    query.bindValue(7,ALERTAS);
    query.bindValue(8,PERSONAL);
    query.exec();


    if(query.isActive())
    {
        msgBox->setWindowTitle("Información");
        msgBox->setWindowIcon(QIcon(":/new/edit-user.png"));
        msgBox->setIcon(QMessageBox::Information);
        msgBox->setText("Se actualizaron los permisos  con éxito.");
        //msgBox->setDefaultButton(QMessageBox::Close);
        msgBox->setStandardButtons(QMessageBox::Close);
        msgBox->setButtonText(QMessageBox::Close, "Salir");
        ret = msgBox->exec();
    }
    else
    {
        msgBox->setWindowTitle("Advertencia");
        msgBox->setWindowIcon(QIcon(":/new/edit-user.png"));
        msgBox->setIcon(QMessageBox::Warning);
        msgBox->setText("No se pudo actualizar los permisos.");
        //msgBox->setDefaultButton(QMessageBox::Close);
        msgBox->setStandardButtons(QMessageBox::Close);
        msgBox->setButtonText(QMessageBox::Close, "Salir");
        ret = msgBox->exec();
    }
}

void usuarios_ui::set_access_level(int access)
{

    int NIVEL_ACCESO;

    NIVEL_ACCESO= access;

    if(access == 1)
    {
        ui->pushButton->hide();
        ui->pushButton_2->hide();
        ui->pushButton_3->hide();
        ui->pushButton_4->hide();
    }
}

void usuarios_ui::on_pushButton_3_clicked()
{

    if(ui->lineEdit_userCode->text() == "")
    {
        QMessageBox *msgBox = new QMessageBox;
        int ret;
        msgBox->setWindowTitle("Advertencia");
        msgBox->setWindowIcon(QIcon(":\new\edit-user.png"));
        msgBox->setIcon(QMessageBox::Warning);
        msgBox->setText("Porfavor eleccione un elemento de la tabla");
        msgBox->setDefaultButton(QMessageBox::Close);
        msgBox->setButtonText(QMessageBox::Close, "Salir");
        ret = msgBox->exec();
        return;
    }

    QSqlQuery query;
    QString CODIGO_USUARIO = ui->lineEdit_userCode->text();

    QMessageBox *msgBox = new QMessageBox;
    int ret;

    QString str_warning = "¿Esta seguro que desea eliminar al usurio con código "+CODIGO_USUARIO+"?";

    msgBox->setIcon(QMessageBox::Warning);
    msgBox->setWindowTitle("Confirmar Eliminar");
    msgBox->setWindowIcon(QIcon(":/new/delete-user.png"));

    msgBox->setText(str_warning);
    msgBox->setStandardButtons(QMessageBox::Save | QMessageBox::Discard);
    msgBox->setDefaultButton(QMessageBox::Save);
    msgBox->setButtonText(QMessageBox::Save, "Elimniar");
    msgBox->setButtonText(QMessageBox::Discard, "No, gracias");
    ret = msgBox->exec();

    switch(ret)
    {
    case QMessageBox::Save:

        qDebug()<<"CODIGO_USUARIO: "<<CODIGO_USUARIO<<endl;
        query.prepare("DELETE FROM e_usuario WHERE usuario_pk="+CODIGO_USUARIO);
        query.exec();
        this->update_table_users();
        break;
    case QMessageBox::Close:
        break;
    default:
        break;

    }
    ui->lineEdit_userCode->clear();
}

void usuarios_ui::setParentPrincipal(MainWindow *parent)
{
    parentWindow=parent;
}
