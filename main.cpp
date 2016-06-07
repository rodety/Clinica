#include <QtGui/QApplication>
#include "mainwindow.h"
#include "login_ui.h"
#include "configurador.h"
#include "configprogram.h"
class login_ui;

int main(int argc, char *argv[])
{

    //LOGIN TO EXECUTE PROGRAM

    QApplication a(argc, argv);
    MainWindow principalWindow;
    configurador* config = configurador::Instance();
    config->setnamefiles("config.txt","configftp.txt");

        if(config->conectar_db())
        {
            config->conectar_ftp();
            login_ui* LOGIN_FORM =  new login_ui;
            LOGIN_FORM->PRINCIPAL_FORM = &principalWindow;
            LOGIN_FORM->show();
        }
        else
        {
            ConfigProgram* windowConfig =  new ConfigProgram;
            windowConfig->show();
        }
    return a.exec();

   // newPaciente_paciente_ui * p = new newPaciente_paciente_ui();
   // p->reg_Dato();
}
