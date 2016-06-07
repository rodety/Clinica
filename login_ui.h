#ifndef LOGIN_UI_H
#define LOGIN_UI_H

#include <QWidget>
#include <QSqlQuery>
#include <QDebug>
#include <QFileDialog>
#include <fstream>

#include <QMessageBox>
#include "MainWindow.h"
#include "configprogram.h"
#include <vector>
class MainWindow;

namespace Ui {
class login_ui;
}

class login_ui : public QWidget
{
    Q_OBJECT


public:
    explicit login_ui(QWidget *parent = 0);
    ~login_ui();

    MainWindow* PRINCIPAL_FORM;
    bool ejecutar_conexiones();
    bool flag;
private slots:
    void on_pushButton_Login_clicked();
    void on_pushButton_configurar_clicked();
    void on_tabWidget_destroyed();
    void on_lineEdit_Password_returnPressed();

private:
    Ui::login_ui *ui;
    ConfigProgram *CONFIG_PROGRAM_FORM;

    void crearFichero();
    QString host_name;
    QString database_name;
    QString user_name;
    QString password_name;
    QTabWidget tabWidget;


    //bool eventFilter(QObject *, QEvent *);
};

#endif // LOGIN_UI_H

