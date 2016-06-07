#include "configuracion_ui.h"
#include "ui_configuracion_ui.h"
#include <QDebug>
#include <QConstString>
#include <QMessageBox>
configuracion_ui::configuracion_ui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::configuracion_ui)
{
    ui->setupUi(this);


    ui->lineEdit_Dni->hide();
    //Update current data base information
    update_table_personal();
    ui->lineEdit_Cargo->setReadOnly(true);
    ui->lineEdit_Dni->setReadOnly(true);
    ui->lineEdit_Nombre->setReadOnly(true);
    ui->lineEdit_dni_show->setReadOnly(true);
    ui->tableWidget_trabajadores->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

configuracion_ui::~configuracion_ui()
{
    delete ui;
}

void configuracion_ui::on_pushButton_VerDatos_clicked()
{

    newpersonal_personal_ui *DATA_PERSONAL_FORM = new newpersonal_personal_ui;
    DATA_PERSONAL_FORM->set_cliked_type(0);
    DATA_PERSONAL_FORM->show_data_personal_form(ui->lineEdit_Dni->text(),ui->lineEdit_Cargo->text());
    DATA_PERSONAL_FORM->setParentWindow(parentWindow);
    DATA_PERSONAL_FORM->setcodeWindow(parentWindow->getcodeWindow());
    DATA_PERSONAL_FORM->show();
}

void configuracion_ui::on_pushButton_Editar_clicked()
{
    newpersonal_personal_ui *EDIT_PERSONAL_FORM = new newpersonal_personal_ui;
    EDIT_PERSONAL_FORM->setWindowTitle("Editar personal");
    EDIT_PERSONAL_FORM->set_cliked_type(1);
    EDIT_PERSONAL_FORM->show_data_personal_form(ui->lineEdit_Dni->text(),ui->lineEdit_Cargo->text());
    EDIT_PERSONAL_FORM->var_dni = ui->lineEdit_Dni->text();
    EDIT_PERSONAL_FORM->parent_ui_var=this;
    EDIT_PERSONAL_FORM->setParentWindow(parentWindow);
    EDIT_PERSONAL_FORM->setcodeWindow(parentWindow->getcodeWindow());
    EDIT_PERSONAL_FORM->show();
}

void configuracion_ui::on_pushButton_newPersonal_clicked()
{
    newpersonal_personal_ui *NEW_PERSONAL_FORM = new newpersonal_personal_ui;
    NEW_PERSONAL_FORM->setWindowTitle("Nuevo personal");
    NEW_PERSONAL_FORM->set_cliked_type(2);
    NEW_PERSONAL_FORM->parent_ui_var=this;
    NEW_PERSONAL_FORM->setParentWindow(parentWindow);
    NEW_PERSONAL_FORM->setcodeWindow(parentWindow->getcodeWindow());
    NEW_PERSONAL_FORM->show();
}

void configuracion_ui::on_tableWidget_trabajadores_itemClicked(QTableWidgetItem *item)
{
    int FILA = item->row();

    const QString NOMBRE = ui->tableWidget_trabajadores->item(FILA,0)->text() +" "+ ui->tableWidget_trabajadores->item(FILA,1)->text();
    const QString DNI = ui->tableWidget_trabajadores->item(FILA,2)->text();
    const QString CARGO = ui->tableWidget_trabajadores->item(FILA,3)->text();

    ui->lineEdit_Nombre->clear();
    ui->lineEdit_Nombre->insert(NOMBRE);

    ui->lineEdit_Dni->clear();
    ui->lineEdit_Dni->insert(DNI);

    ui->lineEdit_Cargo->clear();
    ui->lineEdit_Cargo->insert(CARGO);
}

void configuracion_ui::update_table_personal()
{
    //=================================================================================

    int TAM = 1330;
    ui->tableWidget_trabajadores->setColumnWidth(0,TAM*(0.4));
    ui->tableWidget_trabajadores->setColumnWidth(1,TAM*(0.4));
    ui->tableWidget_trabajadores->setColumnWidth(2,0);
    ui->tableWidget_trabajadores->setColumnWidth(3,TAM*(0.2));


    for (int i=ui->tableWidget_trabajadores->rowCount()-1; i >= 0; --i)
        ui->tableWidget_trabajadores->removeRow(i);

    //=================================================================================


    ui->tableWidget_trabajadores->setSortingEnabled(0);
    QSqlQuery query,query_DNI;
    query.prepare("SELECT *FROM e_persona WHERE tipo!=\"Paciente\"");
    query.exec();

    QString DNI,CARGO,APELLIDOS,NOMBRES;

    int COUNT = 0;
    while(query.next())
    {
        DNI = query.value(0).toString();
        CARGO = query.value(1).toString();

        query_DNI.prepare("SELECT apellido_paterno,apellido_materno,primer_nombre,segundo_nombre FROM e_dni WHERE dni_pk="+DNI);
        query_DNI.exec();

        while(query_DNI.next())
        {
            APELLIDOS = query_DNI.value(0).toString()+" "+query_DNI.value(1).toString();
            NOMBRES = query_DNI.value(2).toString()+" "+query_DNI.value(3).toString();
        }
        qDebug()<<"DNI : "<<DNI<<endl;
        qDebug()<<"CARGO : "<<CARGO<<endl;
        qDebug()<<"APELLIDOS : "<<APELLIDOS<<endl;
        qDebug()<<"NOMBRES : "<<NOMBRES<<endl;
        qDebug()<<"================================="<<endl;

         //=======================MOSTRANDO PERSONAL================================

        ui->tableWidget_trabajadores->insertRow(COUNT);

            ui->tableWidget_trabajadores->setItem(COUNT,0,new QTableWidgetItem(APELLIDOS));
            ui->tableWidget_trabajadores->setItem(COUNT,1,new QTableWidgetItem(NOMBRES));
            ui->tableWidget_trabajadores->setItem(COUNT,2,new QTableWidgetItem(DNI));
            ui->tableWidget_trabajadores->setItem(COUNT,3,new QTableWidgetItem(CARGO));

        COUNT++;
    }
    ui->tableWidget_trabajadores->setSortingEnabled(1);
}

void configuracion_ui::on_pushButton_3_clicked() //ELIMINAR
{
    if(ui->lineEdit_Dni->text()=="")
        return;

    QString DNI;
    QSqlQuery query;
    int ret;
    QMessageBox *msgBox = new QMessageBox;


    QString str_warning = "¿Esta seguro que desea eliminarlo?.";
    msgBox->setIcon(QMessageBox::Warning);
    msgBox->setWindowTitle("Confirmar Eliminar");
    msgBox->setWindowIcon(QIcon(":/new/Remove-Male-User.png"));

    msgBox->setText(str_warning);
    msgBox->setStandardButtons(QMessageBox::Save | QMessageBox::Discard);
    msgBox->setDefaultButton(QMessageBox::Save);
    msgBox->setButtonText(QMessageBox::Save, "Elimniar");
    msgBox->setButtonText(QMessageBox::Discard, "No, gracias");
    ret = msgBox->exec();

    switch (ret) {
      case QMessageBox::Save:
          // Save was clicked

            DNI = ui->lineEdit_Dni->text();
            query.prepare("DELETE FROM e_persona WHERE dni_pk="+DNI);
            query.exec();

            query.prepare("DELETE FROM e_dni WHERE dni_pk="+DNI);
            query.exec();

            this->update_table_personal();
          break;
      case QMessageBox::Discard:
          // Don't Save was clicked
          break;
      default:
          // should never be reached
          break;
    }

}


void configuracion_ui::set_access_level(int access)
{

    int NIVEL_ACCESO;

    NIVEL_ACCESO= access;

    if(access == 1)
    {
        ui->pushButton_newPersonal->hide();
        ui->pushButton_Editar->hide();
        ui->pushButton_3->hide();
    }
}

void configuracion_ui::on_lineEdit_Dni_textChanged(const QString &arg1)
{
    int DNI_TO_SHOW;
    DNI_TO_SHOW = arg1.toInt();

    ui->lineEdit_dni_show->clear();

    if(DNI_TO_SHOW<0)
        ui->lineEdit_dni_show->insert("");
    else
        ui->lineEdit_dni_show->insert(arg1);
}

void configuracion_ui::setParentPrincipal(MainWindow *parent)
{
    parentWindow = parent;
}
