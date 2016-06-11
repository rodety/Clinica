#ifndef NEWCONSULTA_PACIENTE_UI_H
#define NEWCONSULTA_PACIENTE_UI_H

#include <QWidget>
#include "consulta_paciente_ui.h"

class consulta_paciente_ui;

namespace Ui {
    class newconsulta_paciente_ui;
}

class newconsulta_paciente_ui : public QWidget
{
    Q_OBJECT

public:
    explicit newconsulta_paciente_ui(QWidget *parent = 0);
    ~newconsulta_paciente_ui();

    void set_clicked_type(int type);
    QString id_var;
    QString code_consulta_var;
    void show_name();
    void update_new_consulta_form();

    consulta_paciente_ui* parent_ui_form;

private slots:
    void on_pushButton_Acept_clicked();

    void on_pushButton_Save_clicked();

    void on_pushButton_Cancel_clicked();

private:
    Ui::newconsulta_paciente_ui *ui;
};

#endif // NEWCONSULTA_PACIENTE_UI_H
