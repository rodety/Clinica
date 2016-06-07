#ifndef PACIENTE_UI_H
#define PACIENTE_UI_H

#include <QWidget>
#include "newconsulta_paciente_ui.h"
#include "newpaciente_paciente_ui.h"
#include "consulta_paciente_ui.h"
#include <QTableWidgetItem>
#include <QSqlQueryModel>
#include <mainwindow.h>

class MainWindow;

namespace Ui {
    class paciente_ui;
}

class paciente_ui : public QWidget
{
    Q_OBJECT

public:
    explicit paciente_ui(QWidget *parent = 0);
    ~paciente_ui();
    bool flag_to_fk;
    bool flag_consultahistoria;
    QString DNI_CURRENT;
    QString cmpEditDni;
    void update_table_paciente();
    void paginacion(QString a);
    void set_access_level(int access);
    void setParentPrincipal(MainWindow* parent);

private:
    Ui::paciente_ui *ui;
   // int page;
    QSqlQueryModel * model;
    MainWindow* parentWindow;

private slots:
    void on_newPaciente_paciente_clicked();
    void on_newConsulta_paciente_clicked();
    void on_eliminar_paciente_clicked();
    void on_verImagenes_paciente_clicked();
    void on_verConsultas_paciente_clicked();
    void on_verDatos_paciente_clicked();
    void on_pushButton_editarDatos_clicked();
    void on_tableWidget_result_itemClicked(QTableWidgetItem *item);
    //void on_lineEdit_apellidoPaternoSearch_returnPressed();
    void on_lineEdit_dniCurrentPatient_textChanged(const QString &arg1);
    void on_comboBox_search_activated(int index);
   // void on_lineEdit_PacienteSearch_returnPressed();
    void on_comboBox_currentIndexChanged(const QString &arg1);
    void on_tableView_ListaPacientes1_clicked(const QModelIndex &index);
    void on_lineEdit_PacienteSearch_textEdited(const QString &arg1);
public slots:
    void update_list();
};

#endif // PACIENTE_UI_H



