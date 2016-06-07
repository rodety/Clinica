#include "consulta_paciente_ui.h"
#include "ui_consulta_paciente_ui.h"
#include <QSqlQuery>
#include <QDate>
#include <QTableWidget>
#include <QMessageBox>
#include "clinica_tab_documento.h"
#include "funciones.h"
consulta_paciente_ui::consulta_paciente_ui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::consulta_paciente_ui)
{
    ui->setupUi(this);
    ui->tableWidget_SurgeryList->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_SurgeryList->setColumnWidth(0,80);
    ui->tableWidget_SurgeryList->setColumnWidth(1,380);
    ui->tableWidget_SurgeryList->setColumnWidth(2,60);
    ui->lineEdit_code->setReadOnly(true);
    ui->lineEdit_Patient->setReadOnly(true);
}

consulta_paciente_ui::~consulta_paciente_ui()
{
    delete ui;
}

void consulta_paciente_ui::update_consultas_form()
{

    for (int i=ui->tableWidget_SurgeryList->rowCount()-1; i >= 0; --i)
        ui->tableWidget_SurgeryList->removeRow(i);

    ui->tableWidget_SurgeryList->setSortingEnabled(0);
    QString DNI,NOMBRE,FECHA,MOTIVO,CODIGO,HISTORIA_CLINICA;
    int COUNT;


    DNI = dni_var;
    COUNT = 0;

    QSqlQuery query;
    query.prepare("SELECT apellido_paterno,apellido_materno,primer_nombre,segundo_nombre FROM e_dni WHERE dni_pk="+DNI);
    query.exec();
    query.next();

    NOMBRE = query.value(0).toString()+" "+query.value(1).toString()+" "+query.value(2).toString()+" "+query.value(3).toString();

    ui->lineEdit_Patient->clear();
    ui->lineEdit_Patient->insert(NOMBRE);

    query.prepare("SELECT historia_clinica_Pk FROM e_historia_clinica WHERE dni_pk="+DNI);
    query.exec();
    query.next();

    HISTORIA_CLINICA = query.value(0).toString();

    query.prepare("SELECT fecha,motivo,historial_documento_pk FROM e_consulta WHERE historia_clinica_pk="+HISTORIA_CLINICA);
    query.exec();

    while(query.next())
    {
        FECHA = query.value(0).toString();
        MOTIVO = query.value(1).toString();
        CODIGO = query.value(2).toString();

        ui->tableWidget_SurgeryList->insertRow(COUNT);

        ui->tableWidget_SurgeryList->setItem(COUNT,0,new QTableWidgetItem(FECHA));
        ui->tableWidget_SurgeryList->setItem(COUNT,1,new QTableWidgetItem(MOTIVO));
        ui->tableWidget_SurgeryList->setItem(COUNT,2,new QTableWidgetItem(CODIGO));

        COUNT++;
    }

    ui->tableWidget_SurgeryList->setSortingEnabled(1);


}

void consulta_paciente_ui::on_tableWidget_SurgeryList_itemClicked(QTableWidgetItem *item)
{
    int FILA;
    QString CODE;
    FILA = item->row();
    CODE = ui->tableWidget_SurgeryList->item(FILA,2)->text();
    ui->lineEdit_code->clear();
    ui->lineEdit_code->insert(CODE);
}

void consulta_paciente_ui::on_pushButton_editConsulta_clicked()
{
    if(ui->lineEdit_code->text() == "")
    {
        QMessageBox msgBox;
        msgBox.setText("Seleccione una consulta a editar.");
        msgBox.exec();
        return;
    }
    newconsulta_paciente_ui* EDIT_CONSULTA_FORM = new newconsulta_paciente_ui;

    EDIT_CONSULTA_FORM->code_consulta_var = ui->lineEdit_code->text();
    EDIT_CONSULTA_FORM->update_new_consulta_form();
    EDIT_CONSULTA_FORM->parent_ui_form = this;
    EDIT_CONSULTA_FORM->set_clicked_type(1);
    EDIT_CONSULTA_FORM->show();
    //__________________________________________

}

void consulta_paciente_ui::on_pushButton_showConsulta_clicked()
{
    if(ui->lineEdit_code->text() == "")
    {
        QMessageBox msgBox;
        msgBox.setText("Seleccione una consulta a para visualizar.");
        msgBox.exec();
        return;
    }
    newconsulta_paciente_ui* EDIT_CONSULTA_FORM = new newconsulta_paciente_ui;
    EDIT_CONSULTA_FORM->code_consulta_var = ui->lineEdit_code->text();
    EDIT_CONSULTA_FORM->update_new_consulta_form();
    EDIT_CONSULTA_FORM->set_clicked_type(0);
    EDIT_CONSULTA_FORM->show();
}


void consulta_paciente_ui::on_pushButton_deleteConsulta_clicked()
{

    QString CODIGO;

    CODIGO = ui->lineEdit_code->text();

    QSqlQuery query;

    int ret;
    QMessageBox *msgBox = new QMessageBox;

    QString str_warning = "¿Esta seguro que desea eliminar la consulta del paciente "+ui->lineEdit_Patient->text()+"?.";
    msgBox->setIcon(QMessageBox::Warning);
    msgBox->setWindowTitle("Confirmar Eliminar");
    msgBox->setWindowIcon(QIcon(":/new/delete.png"));

    msgBox->setText(str_warning);
    msgBox->setStandardButtons(QMessageBox::Save | QMessageBox::Discard);
    msgBox->setDefaultButton(QMessageBox::Save);
    msgBox->setButtonText(QMessageBox::Save, "Elimniar");
    msgBox->setButtonText(QMessageBox::Discard, "No, gracias");
    ret = msgBox->exec();

    switch(ret)
    {
    case QMessageBox::Save:
        query.prepare("DELETE FROM e_consulta WHERE historial_documento_pk="+CODIGO);
        query.exec();
        this->update_consultas_form();
        break;
    case QMessageBox::Discard:
        break;

    default:
        break;

    }
}

void consulta_paciente_ui::on_pushButton_printConsulta_clicked()
{

}

void consulta_paciente_ui::on_pushButton_printAll_clicked()
{

}


void consulta_paciente_ui::on_pushButton_generarPDF_clicked()
{

    Clinica_Tab_Documento *CLINIC_TAB_DOC = new Clinica_Tab_Documento;

    QSqlQuery query;

    QString HISTORIA_CLINICA, DNI;
    QString FECHA, MOTIVO;
    QString APELLIDOS, NOMBRES, DIRECCION, TELEFONO, ESTADO_CIVIL, EDAD;
    QString OCUPACION, CIRUJIAS_PREVIAS, ALERGIAS, ANTECEDENTES, MEDICACION_ACTUAL;

    QDate FECHA_NACIMIENTO, FECHA_ACTUAL;
    FECHA_ACTUAL = QDate::currentDate();
    int edad;
    vector< QString> date;
    vector< QString> reason;


    DNI = dni_var;

    query.prepare("SELECT apellido_paterno, apellido_materno, primer_nombre, segundo_nombre, direccion, estado_civil, fecha_nacimiento FROM e_dni WHERE dni_pk="+DNI);
    query.exec();
    query.next();

    APELLIDOS = query.value(0).toString()+" "+query.value(1).toString();
    NOMBRES = query.value(2).toString()+" "+query.value(3).toString();
    DIRECCION = query.value(4).toString();
    ESTADO_CIVIL = query.value(5).toString();
    FECHA_NACIMIENTO = query.value(6).toDate();

    edad = getEdad(FECHA_NACIMIENTO, FECHA_ACTUAL);
    EDAD.setNum(edad);

    query.prepare("SELECT telefono_paciente, ocupacion, cirujias_previas, alergias, antecedentes, medicacion_actual FROM e_paciente WHERE dni_pk="+DNI);
    query.exec();
    query.next();
    TELEFONO = query.value(0).toString();
    OCUPACION = query.value(1).toString();
    CIRUJIAS_PREVIAS = query.value(2).toString();
    ALERGIAS = query.value(3).toString();
    ANTECEDENTES = query.value(4).toString();
    MEDICACION_ACTUAL = query.value(5).toString();


    query.prepare("SELECT historia_clinica_Pk FROM e_historia_clinica WHERE dni_pk="+DNI);
    query.exec();
    query.next();

    HISTORIA_CLINICA = query.value(0).toString();

    query.prepare("SELECT fecha,motivo FROM e_consulta WHERE historia_clinica_pk="+HISTORIA_CLINICA);
    query.exec();

    while(query.next())
    {
        FECHA = query.value(0).toString();
        MOTIVO = query.value(1).toString();
        date.push_back(FECHA);
        reason.push_back(MOTIVO);
    }

    CLINIC_TAB_DOC->setlastname(APELLIDOS.toStdString());
    CLINIC_TAB_DOC->setname(NOMBRES.toStdString());
    CLINIC_TAB_DOC->setactualmedication(MEDICACION_ACTUAL.toStdString());
    CLINIC_TAB_DOC->setaddres(DIRECCION.toStdString());
    if(EDAD.toStdString() =="15")
        CLINIC_TAB_DOC->setage("");
    else {
        CLINIC_TAB_DOC->setage(EDAD.toStdString());
    }
    CLINIC_TAB_DOC->setallergy(ALERGIAS.toStdString());

    if(DNI.at(0) == '-')
        CLINIC_TAB_DOC->setdni("");
    else
        CLINIC_TAB_DOC->setdni(DNI.toStdString());

    CLINIC_TAB_DOC->setmaritalstatus(ESTADO_CIVIL.toStdString());
    CLINIC_TAB_DOC->setocupation(OCUPACION.toStdString());
    CLINIC_TAB_DOC->setphone(TELEFONO.toStdString());
    CLINIC_TAB_DOC->setprecedents(ANTECEDENTES.toStdString());
    CLINIC_TAB_DOC->setpreviouSurgeries(CIRUJIAS_PREVIAS.toStdString());

    CLINIC_TAB_DOC->setdate(date);
    CLINIC_TAB_DOC->setreason(reason);
    CLINIC_TAB_DOC->generateLatex();
}

void consulta_paciente_ui::on_pushButton_clicked()
{
    this->close();
}
