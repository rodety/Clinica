#ifndef USUARIOS_UI_H
#define USUARIOS_UI_H

#include <QWidget>
#include "newuser_usuarios_ui.h"
#include <QTableWidgetItem>
#include <mainwindow.h>
class MainWindow;

namespace Ui {
    class usuarios_ui;
}

class usuarios_ui : public QWidget
{
    Q_OBJECT

public:
    explicit usuarios_ui(QWidget *parent = 0);
    ~usuarios_ui();
    void update_table_users();
    void set_access_level(int access);

    int get_agenda_ui_access();
    int get_paciente_ui_access();
    int get_historia_clinica_ui_access();
    int get_tratamientos_ui_access();
    int get_usuarios_ui_access();
    int get_mailing_ui_access();
    int get_facebook_ui_access();
    int get_alertas_ui_access();
    int get_personal_ui_access();
    void setParentPrincipal(MainWindow* parent);


private:
    Ui::usuarios_ui *ui;
    MainWindow* parentWindow;

private slots:



    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
    void on_tableWidget_list_users_itemClicked(QTableWidgetItem *item);
    void on_pushButton_4_clicked();
    void on_pushButton_3_clicked();
};

#endif // USUARIOS_UI_H
