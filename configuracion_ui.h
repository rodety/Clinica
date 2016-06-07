#ifndef CONFIGURACION_UI_H
#define CONFIGURACION_UI_H

#include <QWidget>
#include "newpersonal_personal_ui.h"
#include <QSqlQuery>
#include <QTableWidgetItem>
#include <mainwindow.h>
class MainWindow;

namespace Ui {
class configuracion_ui;
}

class configuracion_ui : public QWidget
{
    Q_OBJECT
    
public:
    explicit configuracion_ui(QWidget *parent = 0);
    ~configuracion_ui();

      void update_table_personal();
      void set_access_level(int access);
      void setParentPrincipal(MainWindow* parent);
    
private slots:

    void on_pushButton_VerDatos_clicked();//clicked tipe = 0;

    void on_pushButton_Editar_clicked(); //clicked tipe = 1;

    void on_pushButton_newPersonal_clicked(); //clicked tipe = 2;

    void on_tableWidget_trabajadores_itemClicked(QTableWidgetItem *item);

    void on_pushButton_3_clicked();

    void on_lineEdit_Dni_textChanged(const QString &arg1);

private:
    Ui::configuracion_ui *ui;
    MainWindow* parentWindow;

};

#endif // CONFIGURACION_UI_H
