#ifndef NEWPERSONAL_PERSONAL_UI_H
#define NEWPERSONAL_PERSONAL_UI_H

#include <QWidget>
#include <QSqlQuery>
#include "configuracion_ui.h"
#include <mainwindow.h>
class MainWindow;

class configuracion_ui;
namespace Ui {
class newpersonal_personal_ui;
}

class newpersonal_personal_ui : public QWidget
{
    Q_OBJECT
    
public:
    explicit newpersonal_personal_ui(QWidget *parent = 0);
    ~newpersonal_personal_ui();

    QString var_dni;
    void set_cliked_type(int type);
    void show_data_personal_form(QString dni_var,QString profesion_var);

    configuracion_ui *parent_ui_var;
    void setParentWindow(MainWindow* parent);
    void setcodeWindow(int code);
    bool changeParentWindow(int code);

    
private slots:
    void on_pushButton_Acept_clicked();

    void on_pushButton_Cancel_clicked();



    void on_pushButton_Save_clicked();

    void on_comboBox_tipo_activated(const QString &arg1);

    void on_comboBox_tipo_currentIndexChanged(int index);

    void on_lineEdit_Dni_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_Dni_textChanged(const QString &arg1);

private:
    Ui::newpersonal_personal_ui *ui;
    MainWindow* parentWindow;
    int codeWindow;

};

#endif // NEWPERSONAL_PERSONAL_UI_H
