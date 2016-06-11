#ifndef NEWPACIENTE_PACIENTE_UI_H
#define NEWPACIENTE_PACIENTE_UI_H

#include <QWidget>
#include <QSqlQuery>
#include "paciente_ui.h"
#include <mainwindow.h>
class MainWindow;
class paciente_ui;

namespace Ui {
    class newPaciente_paciente_ui;
}

class newPaciente_paciente_ui : public QWidget
{
    Q_OBJECT

public:
    explicit newPaciente_paciente_ui(QWidget *parent = 0);
    ~newPaciente_paciente_ui();

     void set_cliked_type(int type);
     void show_data_paciente_form(QString dni_var);
     QString current_ID;
     paciente_ui* parent_ui_form;
     void hideButtonShow();
     void setParentWindow(MainWindow* parent);
     void setcodeWindow(int code);
     bool changeParentWindow(int code);
     QString calculateCodeHistoryClinic(QString arg1);


private slots:
    void on_pushButton_Acept_clicked();

    void on_pushButton_Save_clicked();

    void on_pushButton_Cancel_clicked();

    void on_lineEdit_Dni_textChanged(const QString &arg1);

    void on_lineEdit_FatherName_editingFinished();

    void on_lineEdit_FatherName_textChanged(const QString &arg1);

    void on_checkBox_Historia_clicked(bool checked);

signals :
    void update_List_patients();


private:
    Ui::newPaciente_paciente_ui *ui;
    int cod_index;
    QString cod_numero;
    void reg_Dato();
    void set_cod_historia(int letra, QString numero);
    int get_index();
    QString get_numero();
    bool flag_status;
    bool accept;
    int codeWindow;
    MainWindow* parentWindow;

};

#endif // NEWPACIENTE_PACIENTE_UI_H
