#ifndef NEWALERTA_ALERTA_UI_H
#define NEWALERTA_ALERTA_UI_H

#include <QSqlQuery>
#include <QWidget>
#include "alertas_ui.h"
#include "agenda_ui.h"

class alertas_ui;
class agenda_ui;

namespace Ui {
    class newalerta_alerta_ui;
}

class newalerta_alerta_ui : public QWidget
{
    Q_OBJECT

public:
    explicit newalerta_alerta_ui(QWidget *parent = 0);
    ~newalerta_alerta_ui();
    void set_clicked_type(int type);
    void update_new_alerta_form(QString code);
    QString code_var;
    QString alert_type_var;
    alertas_ui* parent_ui_form;
    agenda_ui* parent_ui_form_agenda;
    void create_alert(QString type);
    void setParentWindow(MainWindow* parent);
    void setcodeWindow(int code);
    bool changeParentWindow(int code);


private slots:
    void on_pushButton_Acept_clicked();

    void on_pushButton_Cancel_clicked();

    void on_pushButton_Save_clicked();

private:
    Ui::newalerta_alerta_ui *ui;
    MainWindow* parentWindow;
    int codeWindow;
};

#endif // NEWALERTA_ALERTA_UI_H
