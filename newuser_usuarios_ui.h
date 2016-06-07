#ifndef NEWUSER_USUARIOS_UI_H
#define NEWUSER_USUARIOS_UI_H
#include "usuarios_ui.h"
#include <mainwindow.h>
class MainWindow;

#include <QWidget>
class usuarios_ui;

namespace Ui {
    class newuser_usuarios_ui;
}

class newuser_usuarios_ui : public QWidget
{
    Q_OBJECT

public:
    explicit newuser_usuarios_ui(QWidget *parent = 0);
    ~newuser_usuarios_ui();
    QString user_code_var;
    void show_data_user_form(QString code);
    void set_cliked_type(int type);

    usuarios_ui *parent_ui_form;
    void setParentWindow(MainWindow* parent);
    void setcodeWindow(int code);
    bool changeParentWindow(int code);


private slots:
    void on_pushButton_Acept_clicked();

    void on_pushButton_Save_clicked();

    void on_pushButton_Cancel_clicked();

    void on_pushButton_consultar_clicked();

private:
    Ui::newuser_usuarios_ui *ui;
    MainWindow* parentWindow;
    int codeWindow;
};

#endif // NEWUSER_USUARIOS_UI_H
