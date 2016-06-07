#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlQuery>
#include <QProcess>
#include <QVBoxLayout>
#include <QDir>
#include "caja_ui.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    absPath = QDir::currentPath();
    codeWindow = 0;
}


void MainWindow::initialize()
{

}
int MainWindow::getcodeWindow()
{
    codeWindow++;
    return codeWindow;
}

int MainWindow::getlastcodeWindow()
{
    return codeWindow;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::executeProgram()
{

    if(agenda_access_var==0 || agenda_access_var==1)ui->actionAgenda->setEnabled(1);else ui->actionAgenda->setDisabled(1);

    if(alertas_agenda_access_var==0 || alertas_agenda_access_var==1)ui->actionAlertas->setEnabled(1);else ui->actionAlertas->setDisabled(1);

    if(facebook_agenda_access_var==0 || facebook_agenda_access_var==1)ui->actionFacebook->setEnabled(1);else ui->actionFacebook->setDisabled(1);

    if(historia_clinica_access_var==0 || historia_clinica_access_var==1)ui->actionHistoriaClinica->setEnabled(1);else ui->actionHistoriaClinica->setDisabled(1);

    //if(login_access_var==0 || login_access_var==1)ui->actionLogin->setEnabled(1);else ui->actionLogin->setDisabled(1);

    if(mailing_agenda_access_var==0 || mailing_agenda_access_var==1)ui->actionMailing->setEnabled(1);else ui->actionMailing->setDisabled(1);

    if(paciente_access_var==0 || paciente_access_var==1)ui->actionPaciente->setEnabled(1);else ui->actionPaciente->setDisabled(1);

    if(personal_agenda_access_var==0 || personal_agenda_access_var==1)ui->actionPersonal->setEnabled(1);else ui->actionPersonal->setDisabled(1);

    if(tratamientos_agenda_access_var==0 || tratamientos_agenda_access_var==1)ui->actionTratamientos->setEnabled(1);else ui->actionTratamientos->setDisabled(1);

    if(usuarios_agenda_access_var==0 || usuarios_agenda_access_var==1)ui->actionUsuarios->setEnabled(1);else ui->actionUsuarios->setDisabled(1);
   this->showMaximized();
}
bool a=true, b=true;
void MainWindow::on_actionAgenda_triggered()
{
    agenda_ui *AGENDA_UI = new agenda_ui;
    AGENDA_UI->set_access_level(agenda_access_var);
    AGENDA_UI->curren_user_code_var = this->current_user_code_var;
    AGENDA_UI->update_table_alerta_personal();
    AGENDA_UI->setParentPrincipal(this);
    this->setCentralWidget(AGENDA_UI);
    QDir::setCurrent(absPath);
    codeWindow++;

}

void MainWindow::on_actionPaciente_triggered()
{    
    paciente_ui *PACIENTE_UI = new paciente_ui;
    PACIENTE_UI->set_access_level(paciente_access_var);
    this->setCentralWidget(PACIENTE_UI);
    PACIENTE_UI->setParentPrincipal(this);
    QDir::setCurrent(absPath);
    codeWindow++;

}

void MainWindow::on_actionHistoriaClinica_triggered()
{
    historiaClinica_ui *HISTORIACLINICA_UI = new historiaClinica_ui;
    HISTORIACLINICA_UI->set_access_level(historia_clinica_access_var);
    HISTORIACLINICA_UI->setAbsPath(absPath);
    this->setCentralWidget(HISTORIACLINICA_UI);
    HISTORIACLINICA_UI->setParentPrincipal(this);
    QDir::setCurrent(absPath);
    codeWindow++;

}

void MainWindow::on_actionUsuarios_triggered()
{    
    usuarios_ui *USUARIOS_UI = new usuarios_ui;
    USUARIOS_UI->set_access_level(usuarios_agenda_access_var);
    this->setCentralWidget(USUARIOS_UI);
    QDir::setCurrent(absPath);
    USUARIOS_UI->setParentPrincipal(this);
    codeWindow++;
}

void MainWindow::on_actionTratamientos_triggered()
{
    //this->setCentralWidget(new tratamientos_ui);
}

void MainWindow::on_actionSeguridad_triggered()
{
    //this->setCentralWidget(new seguridad_ui);
}
void MainWindow::on_actionMailing_triggered()
{
    system("start chrome https://www.google.com/a/clinicaesteticalaser.com/ServiceLogin?service=mail&passive=true&rm=false&continue=http://mail.google.com/a/clinicaesteticalaser.com/&ltmpl=default&ltmplcache=2 & exit");
}

void MainWindow::on_actionAlertas_triggered()
{
    alertas_ui *ALERTAS_UI = new alertas_ui;
    ALERTAS_UI->set_access_level(alertas_agenda_access_var);
    this->setCentralWidget(ALERTAS_UI);
    QDir::setCurrent(absPath);
    ALERTAS_UI->setParentPrincipal(this);

    codeWindow++;

}

void MainWindow::on_actionAyuda_triggered()
{
    //this->setCentralWidget(new ayuda_ui);
}

void MainWindow::on_actionFacebook_triggered()
{
    system("start chrome https://www.facebook.com/ & exit");
}

void MainWindow::on_actionLogin_triggered()
{
}

void MainWindow::on_actionPersonal_triggered()
{
    configuracion_ui *CONFIGURACION_UI = new configuracion_ui;
    CONFIGURACION_UI->set_access_level(personal_agenda_access_var);
    this->setCentralWidget(CONFIGURACION_UI);
    QDir::setCurrent(absPath);
    CONFIGURACION_UI->setParentPrincipal(this);
    codeWindow++;

}

void MainWindow::on_actionCaja_triggered()
{
    /*caja_ui * CAJA_UI = new caja_ui;
    this->setCentralWidget(CAJA_UI);*/

}
