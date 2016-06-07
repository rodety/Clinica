#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "agenda_ui.h"
#include "paciente_ui.h"
#include "historiaclinica_ui.h"
#include "alertas_ui.h"
#include "ayuda_ui.h"
#include "seguridad_ui.h"
#include "usuarios_ui.h"
#include "tratamientos_ui.h"
#include "mailing_ui.h"
#include "facebook_ui.h"
#include "login_ui.h"
#include "Clinica_database.h"
#include <QSqlDatabase>
#include <QDebug>
#include "configuracion_ui.h"
#include "funciones.h"
#include "login_ui.h"
#include <QString>
#include <vector>

enum e_pos_v_Widget { AGENDA_FORM, PACIENTE_FORM, HISTORIA_CLINICA_FORM, USUARIOS_FORM, TRATAMIENTOS_FORM
               , SEGURIDAD_FORM, ALERTAS_FORM, AYUDA_FORM, LOGIN_FORM, PERSONAL_FORM};

class MainWindow;

using namespace std;

class login_ui;

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void executeProgram();

    QString current_user_code_var;

    int agenda_access_var;
    int paciente_access_var;
    int historia_clinica_access_var;
    int documentos_access_var;
    int tratamientos_agenda_access_var;
    int usuarios_agenda_access_var;
    int mailing_agenda_access_var;
    int facebook_agenda_access_var;
    int alertas_agenda_access_var;
    int personal_agenda_access_var;
    int login_access_var;


    void initialize();
    int getcodeWindow();
    int getlastcodeWindow();
    ~MainWindow();


private:


    vector<QWidget*> v_widget;
    QWidget *ptr_centralWidget;
    Ui::MainWindow *ui;
    QString absPath;
    int codeWindow;


private slots:
    void on_actionLogin_triggered();
    void on_actionFacebook_triggered();
    void on_actionAyuda_triggered();
    void on_actionAlertas_triggered();
    void on_actionMailing_triggered();
    void on_actionSeguridad_triggered();
    void on_actionTratamientos_triggered();
    void on_actionUsuarios_triggered();
    void on_actionHistoriaClinica_triggered();
    void on_actionPaciente_triggered();
    void on_actionAgenda_triggered();
    void on_actionPersonal_triggered();
    void on_actionCaja_triggered();
};

#endif // MAINWINDOW_H
