#ifndef NEWTASK_AGENDA_UI_H
#define NEWTASK_AGENDA_UI_H

#include <QWidget>
#include "agenda_ui.h"
#include <QSqlQueryModel>
#include <QSqlError>
#include <mainwindow.h>

class MainWindow;

namespace Ui {
    class newTask_agenda_ui;
}

class newTask_agenda_ui : public QWidget
{
    Q_OBJECT

public:
    explicit newTask_agenda_ui(QWidget *parent = 0);
    ~newTask_agenda_ui();

    void set_cliked_type(int type);
    void show_data_task_form(QString code);
    void setDate(QDate);
    void enableDate(bool);
    void setTitle(QString);
    void hideButton();
    agenda_ui* parent_ui_form;
    QString dni_task;
    QString code_task;
    QString HISTORIA_CLINICA;
    void setModoUso(int m_uso);
    int getModoUso(int m_uso);
    void setParentWindow(MainWindow* parent);
    void setcodeWindow(int code);
    bool changeParentWindow(int code);



private slots:
    void on_pushButton_Acept_clicked();
    void on_pushButton_Save_clicked();
    void on_pushButton_Cancel_clicked();
    void on_lineEdit_Name_textEdited(const QString &arg1);
    void on_tableView_clicked(const QModelIndex &index);
    void on_lineEdit_Telefono_editingFinished();

private:
    Ui::newTask_agenda_ui *ui;
    QSqlQueryModel * model;
    bool flag;
    int mode_uso;
    MainWindow* parentWindow;
    int codeWindow;
signals:
    void update_list();
};

#endif // NEWTASK_AGENDA_UI_H
