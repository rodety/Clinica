#ifndef HISTORIACLINICA_UI_H
#define HISTORIACLINICA_UI_H

#include <QWidget>
#include "documentos_historial_ui.h"
#include "newpaciente_paciente_ui.h"
#include "fotos_ui.h"
#include <QTableWidget>
#include "ftpwindow.h"
#include <QSqlQuery>
#include <mainwindow.h>

class MainWindow;
class documentos_historial_ui;

//Variables globales
const int num_generate_funcs=6;
namespace Ui {
    class historiaClinica_ui;
}

class historiaClinica_ui : public QWidget
{
    Q_OBJECT

public:
    explicit historiaClinica_ui(QWidget *parent = 0);
    ~historiaClinica_ui();
    void set_access_level(int access);
    void updateTableDocuments(QString clinic_code_var);
    void generateDocLatex();
    void uploadPdf(QString);
    void createConnexion();
    void setLastAdd(QString);
    void downloadPdf();
    void setAbsPath(QString);
    void setParentPrincipal(MainWindow* parent);

private:
    Ui::historiaClinica_ui *ui;

    // Tiene el nombre del documento seleccionado
    QString str_pB_generatePDF;
    //NOMBRE DE LA CARPETA DE INSTALACION
    int posAntecedentes(QString);
    int posReporteOp(QString);
    int posExamenClinico(QString);
    int posTerapeuticaMedica(QString);
    int posEpicrisis(QString);
    int posRiesgo_Quirurgico(QString);

    int (historiaClinica_ui::*ptr_pos[num_generate_funcs])(QString);

    void generateAntecedentes();
    void generateReporteOp();
    void generateExamenClinico();
    void generateTerapeuticaMEdica();
    void generateEpicrisis();
    void generateRiesgo_Quirurgico();
    void (historiaClinica_ui::*ptr_generates[num_generate_funcs])();//PUNTERO A FUNCION APRENDE!!
    void entering_folder(QString);
    static fotos_ui* FOTOS_FORM;
    FtpWindow *viaftp;
    documentos_historial_ui *DOCUMENT_FORM;
    QString lastadd;
    QString currentDocument;
    QString currentDni;
    QString absPath;
    MainWindow* parentWindow;

private slots:
    void on_nuevoDocumento_historial_clicked();
    void on_eliminarDocumento_historial_clicked();
    void on_verDocumento_historial_clicked();
    void on_verDatos_paciente_clicked();
    void on_pushButton_Search_clicked();
    void on_tableWidget_result_itemClicked(QTableWidgetItem *item);
    void on_tableWidget_DocumentList_itemClicked(QTableWidgetItem *item);
    void on_pushButton_generatePDF_clicked();
    void on_pushButton_editarDocuento_clicked();
    void on_pushButton_Fotos_clicked();
    void putCorrected();
    void getCorrected();
    void on_tableWidget_DocumentList_clicked(const QModelIndex &index);
    void on_tableWidget_result_clicked(const QModelIndex &index);
    void on_lineEdit_historialSearch_returnPressed();
};
#endif // HISTORIACLINICA_UI_H
