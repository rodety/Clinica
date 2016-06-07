#ifndef LOGIN_UI_H
#define LOGIN_UI_H

#include <QWidget>
#include <QMessageBox>
#include "MainWindow.h"
#include "configprogram.h"
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

private slots:
    void on_pushButton_Login_clicked();

    void on_pushButton_configurar_clicked();

private:
    Ui::login_ui *ui;
    ConfigProgram *CONFIG_PROGRAM_FORM;
    void crearFichero();
    //bool eventFilter(QObject *, QEvent *);
};
#endif // LOGIN_UI_H
