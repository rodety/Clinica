#ifndef CONSULTA_PACIENTE_UI_H
#define CONSULTA_PACIENTE_UI_H

#include <QWidget>
#include <QTableWidget>
#include "newconsulta_paciente_ui.h"

namespace Ui {
    class consulta_paciente_ui;
}

class consulta_paciente_ui : public QWidget
{
    Q_OBJECT

public:
    explicit consulta_paciente_ui(QWidget *parent = 0);
    ~consulta_paciente_ui();

    QString dni_var;
    void update_consultas_form();

private slots:
    void on_tableWidget_SurgeryList_itemClicked(QTableWidgetItem *item);

    void on_pushButton_editConsulta_clicked();

    void on_pushButton_deleteConsulta_clicked();

    void on_pushButton_printConsulta_clicked();

    void on_pushButton_printAll_clicked();

    void on_pushButton_showConsulta_clicked();

    void on_pushButton_clicked();

    void on_pushButton_generarPDF_clicked();

private:
    Ui::consulta_paciente_ui *ui;
};

#endif // CONSULTA_PACIENTE_UI_H
