#ifndef DOCUMENTOS_HISTORIAL_UI_H
#define DOCUMENTOS_HISTORIAL_UI_H
#include "historiaclinica_ui.h"
#include <QWidget>
#include "ftpwindow.h"
#include <mainwindow.h>

class MainWindow;

class historiaClinica_ui;

namespace Ui {
    class documentos_historial_ui;
}

class documentos_historial_ui : public QWidget
{
    Q_OBJECT

public:
    explicit documentos_historial_ui(QWidget *parent = 0);
    ~documentos_historial_ui();
    void show_document(QString tipo, QString cod_doc);
    void show_name(QString name);
    void show_list_doctor_name();
    void show_data_document_form(QString document_code);
    void disable_pBs_Accept(QString name_tab);
    QString id_var;
    QString dni_var;
    QString code_document_var;
    QString clinic_history_code_var;
    historiaClinica_ui *currentParent;
    void createConnexion();
    void sentFile(QString);
    void update_list_Terapuetica();
    void agregar_terapeutica(QString,QString,QString,QString,QString);
    void setSorting(bool);
    void setParentWindow(MainWindow* parent);
    void setcodeWindow(int code);
    bool changeParentWindow(int code);


private slots:
    void on_pushButton_AceptAntecedentes_clicked();

    void on_comboBox_DoctorAntecedentes_currentIndexChanged(int index);

    void on_pushButton_consultarMedico_clicked();

    void on_lineEdit_medicoGlobal_textChanged(const QString &arg1);

    void on_pushButton_AceptReporteOperatorio_clicked();

    void on_pushButton_AceptExamenClinico_clicked();

    void on_pushButton_AceptTerapeuticaMedica_clicked();

    void on_pushButton_SaveTerapeuticaMedica_clicked();

    void on_pushButton_SaveRQCV_clicked();

    void on_pushButton_AceptRQCV_clicked();

    void on_pushButton_clicked();

    void on_pushButton_AceptEpicrisis_clicked();

    void on_pushButton_SaveEpicrisis_clicked();

    void on_pushButton_CancelRQCV_clicked();

    void on_pushButton_addItem_terapeutica_clicked();

    void on_lineEdit_dni_medico_consulta_returnPressed();

    void on_pushButton_quitar_Item_clicked();

    void on_tableWidget_Terapeutica_itemClicked(QTableWidgetItem *item);

private:
    Ui::documentos_historial_ui *ui;

    void llenar_doc_Antecedente(QString cod_doc);
    void llenar_doc_ReporteOp(QString cod_doc);
    void llenar_doc_ExamenClinico(QString cod_doc);
    void llenar_doc_TerapeuticaMedica(QString cod_doc);
    void llenar_doc_Epicrisis(QString cod_doc);
    void llenar_doc_Riesgo_Quirurgico(QString cod_doc);
    FtpWindow * viaftp;
    int COUNT;
    int row;
    MainWindow* parentWindow;
    int codeWindow;

};

#endif // DOCUMENTOS_HISTORIAL_UI_H


