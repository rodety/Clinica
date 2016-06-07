#ifndef FOTOS_UI_H
#define FOTOS_UI_H

#include <QWidget>
#include <QTableWidgetItem>
#include "view.h"
#include "ftpwindow.h"
#include <QSqlQuery>
#include <QProgressDialog>
namespace Ui {
class fotos_ui;
}

class fotos_ui : public QWidget
{
    Q_OBJECT

public:   
    explicit fotos_ui(QWidget *parent = 0);
    ~fotos_ui();
    QString historial_code_var;
    void show_name(QString name);
    void show_historial_code(QString code);
    void update_form();
    void createconexion();
    void setPatch(QString);
    void setDni(QString);
    void setFolderFtp(QString);
private slots:
    void on_pushButton_5_clicked();
    void on_tableWidget_reporteOperatorio_itemClicked(QTableWidgetItem *item);
    void on_pushButton_uploadPicture_clicked();
    void on_pushButton_showPictures_clicked();
    void on_pushButton_goFilePicture_clicked();
    void on_pushButton_downloadPicture_clicked();
    void putCorrected();
    void downloadCorrected();
    void puterror(QString);
    void closeconecction();
    void openconeccion();

private:
    Ui::fotos_ui *ui;
    FtpWindow *viaftp;
    QSqlQuery query;
    QString abspath;
    QString dni_var;
    View *view;
    QString carpeta;
    QStringList listFiles;
    QProgressDialog *progressDialog;
    bool state;

};

#endif // FORM_H
