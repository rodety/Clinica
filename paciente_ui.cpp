#include "paciente_ui.h"
#include "ui_paciente_ui.h"
#include <QDebug>
#include <QMessageBox>
#include <QKeyEvent>
#include <QSqlError>

paciente_ui::paciente_ui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::paciente_ui)
{

      ui->setupUi(this);
      flag_to_fk=true;
      model = new QSqlQueryModel();
      update_table_paciente();

      //ui->lineEdit_dniSearch->setValidator(new QIntValidator(0, 99999999));
      //ui->lineEdit_dni_show->hide();
     /* ui->tableView_ListaPacientes1->setEditTriggers(QAbstractItemView::NoEditTriggers);
      ui->tableWidget_result->setColumnWidth(0,80);
      ui->tableWidget_result->setColumnWidth(1,270);
      int TAM = 925;

      ui->lineEdit_CurrentPatient->setReadOnly(true);
      ui->lineEdit_dniCurrentPatient->setReadOnly(true);
      ui->lineEdit_fichaCurrentPatient->setReadOnly(true);*/
}


paciente_ui::~paciente_ui()
{
    delete ui;
}

//---------------------------PACIENTE-------------------------------

void paciente_ui::on_verDatos_paciente_clicked()
{
    newPaciente_paciente_ui *PACIENTE_DATOS_FORM = new newPaciente_paciente_ui;
    PACIENTE_DATOS_FORM->set_cliked_type(0);
    PACIENTE_DATOS_FORM->show_data_paciente_form(DNI_CURRENT);
    PACIENTE_DATOS_FORM->current_dni=DNI_CURRENT;
    PACIENTE_DATOS_FORM->setParentWindow(parentWindow);
    PACIENTE_DATOS_FORM->setcodeWindow(parentWindow->getcodeWindow());
    PACIENTE_DATOS_FORM->show();

}

void paciente_ui::on_pushButton_editarDatos_clicked()
{
    newPaciente_paciente_ui *EDIT_DATOS_FORM = new newPaciente_paciente_ui;
    EDIT_DATOS_FORM->set_cliked_type(1);
    EDIT_DATOS_FORM->show_data_paciente_form(DNI_CURRENT);
    EDIT_DATOS_FORM->current_dni=DNI_CURRENT;
    EDIT_DATOS_FORM->parent_ui_form = this;
    EDIT_DATOS_FORM->setParentWindow(parentWindow);
    EDIT_DATOS_FORM->setcodeWindow(parentWindow->getcodeWindow());
    EDIT_DATOS_FORM->show();
    connect(EDIT_DATOS_FORM,SIGNAL(update_List_patients()),this,SLOT(update_list()));
}

void paciente_ui::on_newPaciente_paciente_clicked()
{
    newPaciente_paciente_ui *PACIENTE_DATOS_FORM = new newPaciente_paciente_ui;
    PACIENTE_DATOS_FORM->set_cliked_type(2);
    //PACIENTE_DATOS_FORM->show_data_paciente_form(DNI_CURRENT);
    PACIENTE_DATOS_FORM->parent_ui_form = this;
    PACIENTE_DATOS_FORM->current_dni=DNI_CURRENT;
    PACIENTE_DATOS_FORM->setParentWindow(parentWindow);
    PACIENTE_DATOS_FORM->setcodeWindow(parentWindow->getcodeWindow());
    PACIENTE_DATOS_FORM->show();
    connect(PACIENTE_DATOS_FORM,SIGNAL(update_List_patients()),this,SLOT(update_list()));
}


void paciente_ui::on_eliminar_paciente_clicked()
{
    qDebug()<<"DNI_CURRENT: "<<DNI_CURRENT<<endl;
    if(DNI_CURRENT == "")
        return;
    QString DNI = DNI_CURRENT;

    QSqlQuery query;
    int ret;
    QMessageBox *msgBox = new QMessageBox;

    QString str_warning = "Esta seguro que desea eliminar el paciente con DNI "+DNI+"?.";
    msgBox->setIcon(QMessageBox::Warning);
    msgBox->setWindowTitle("Confirmar Eliminar");
    msgBox->setWindowIcon(QIcon(":/new/Remove-Male-User.png"));

    msgBox->setText(str_warning);
    msgBox->setStandardButtons(QMessageBox::Save | QMessageBox::Discard);
    msgBox->setDefaultButton(QMessageBox::Save);
    msgBox->setButtonText(QMessageBox::Save, "Elimniar");
    msgBox->setButtonText(QMessageBox::Discard, "No, gracias");
    ret = msgBox->exec();

    switch(ret)
    {
    case QMessageBox::Save:
        query.prepare("DELETE FROM e_dni WHERE dni_pk='"+DNI+"'");
        query.exec();

        query.prepare("DELETE FROM e_persona WHERE dni_pk='"+DNI+"'");
        query.exec();

        query.prepare("DELETE FROM e_paciente WHERE dni_pk='"+DNI+"'");
        query.exec();

        query.prepare("DELETE FROM e_historia_clinica WHERE dni_pk='"+DNI+"'");
        query.exec();

        this->update_table_paciente();
        break;
    case QMessageBox::Discard:
        break;
    default:
        break;
    }
}


//------------------------------CONSULTA-------------------------------------------

void paciente_ui::on_verConsultas_paciente_clicked()
{
    consulta_paciente_ui *CONSULTA_LIST_FORM = new consulta_paciente_ui;
    CONSULTA_LIST_FORM->dni_var = DNI_CURRENT;
    CONSULTA_LIST_FORM->update_consultas_form();
    CONSULTA_LIST_FORM->show();
}


void paciente_ui::on_newConsulta_paciente_clicked()
{
    newconsulta_paciente_ui *CONSULTA_DATOS_FORM = new newconsulta_paciente_ui;
    CONSULTA_DATOS_FORM->dni_var = DNI_CURRENT;
    CONSULTA_DATOS_FORM->show_name();
    CONSULTA_DATOS_FORM->set_clicked_type(2);
    CONSULTA_DATOS_FORM->show();
}

//-----------------------------IMAGENES---------------------------------------------

void paciente_ui::on_verImagenes_paciente_clicked()
{

}

//--------------------------PARA ACTUALIZAR TABLA DE PACIENTES------------------------
void paciente_ui::update_table_paciente()
{
    paginacion(ui->comboBox->currentText());
}
void paciente_ui::paginacion(QString a)
{
    model->clear();
    QSqlQuery query_paciente;
    QString consulta = "SELECT e_dni.dni_pk, e_historia_clinica.nick ,concat(e_dni.apellido_paterno, ' ', e_dni.apellido_materno,' ' , e_dni.primer_nombre, ' ', e_dni.segundo_nombre) FROM e_dni, e_historia_clinica , e_persona, e_paciente WHERE e_dni.dni_pk=e_persona.dni_pk and e_persona.dni_pk= e_paciente.dni_pk and e_paciente.dni_pk=e_historia_clinica.dni_pk  and e_dni.apellido_paterno like \""+a+"%\""+" ORDER BY CAST(SUBSTR(nick FROM 2) AS UNSIGNED) DESC LIMIT 1000;";
    qDebug()<<consulta<<endl;
    query_paciente.prepare(consulta);

    if(!query_paciente.exec()) qDebug()<<query_paciente.lastError().text();
    model->setQuery(query_paciente);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("DNI"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nro de Historia"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Apellidos y Nombres"));
    QFont fuente;
    fuente.setPointSize(14);
    ui->tableView_ListaPacientes1->setModel(model);    
    ui->tableView_ListaPacientes1->setColumnWidth(0,0);
    ui->tableView_ListaPacientes1->setColumnWidth(1,150);
    ui->tableView_ListaPacientes1->setColumnWidth(2,700);
    ui->tableView_ListaPacientes1->setFont(fuente);    
    ui->tableView_ListaPacientes1->show();
}


void paciente_ui::on_tableView_ListaPacientes1_clicked(const QModelIndex &index)
{
    DNI_CURRENT = ui->tableView_ListaPacientes1->model()->data(ui->tableView_ListaPacientes1->model()->index(index.row(),0)).toString();
    QString NOMBRE= ui->tableView_ListaPacientes1->model()->data(ui->tableView_ListaPacientes1->model()->index(index.row(),1)).toString();
    const QString FICHA = ui->tableView_ListaPacientes1->model()->data(ui->tableView_ListaPacientes1->model()->index(index.row(),2)).toString();
    ui->lineEdit_CurrentPatient->clear();
    ui->lineEdit_CurrentPatient->insert(NOMBRE);
    ui->lineEdit_fichaCurrentPatient->clear();
    ui->lineEdit_fichaCurrentPatient->insert(FICHA);
}

void paciente_ui::on_tableWidget_result_itemClicked(QTableWidgetItem *item)
{
    int FILA = item->row();
    //ui->tableWidget_result->showColumn(0);
    const QString NOMBRE = ui->tableWidget_result->item(FILA,1)->text();
    const QString DNI = ui->tableWidget_result->item(FILA,0)->text();
    DNI_CURRENT = DNI;
    qDebug()<<"DNI: "<<DNI<<endl;
    //ui->tableWidget_result->hideColumn(0);
    QSqlQuery query;
    query.prepare("SELECT nick FROM e_historia_clinica WHERE dni_pk='"+DNI+"'");
    query.exec();
    query.next();
    const QString FICHA = query.value(0).toString();
    ui->lineEdit_CurrentPatient->clear();
    ui->lineEdit_CurrentPatient->insert(FICHA);
    ui->lineEdit_fichaCurrentPatient->clear();
    ui->lineEdit_fichaCurrentPatient->insert(NOMBRE);
}

void paciente_ui::set_access_level(int access)
{
    int NIVEL_ACCESO;

    NIVEL_ACCESO= access;

    if(access == 1)
    {
       ui->newConsulta_paciente->hide();
       ui->newPaciente_paciente->hide();
       ui->pushButton_editarDatos->hide();
       ui->eliminar_paciente->hide();
       ui->verConsultas_paciente->hide();
    }
}

void paciente_ui::on_lineEdit_dniCurrentPatient_textChanged(const QString &arg1)
{
}
void paciente_ui::on_comboBox_search_activated(int index)
{
}

void paciente_ui::on_comboBox_currentIndexChanged(const QString &arg1)
{
    paginacion(arg1);
}

void paciente_ui::on_lineEdit_PacienteSearch_textEdited(const QString &arg1)
{
    //------------CLEAR TABLE---------------------------------
        for (int i=ui->tableWidget_result->rowCount()-1; i >= 0; --i)
            ui->tableWidget_result->removeRow(i);
        ui->tableWidget_result->setSortingEnabled(0);
        //--------------VAR---------------------------------------------
        QSqlQuery query_paciente,query_dni,query_historial,query_tmp;
        QString str_search,APELLIDO_PATERTNO,NOMBRE_RESULT,DNI_RESULT,HISTORIA_CLINICA;
        int COUNT = 0;

        //-------------GET VALUES TO SEARCH -----------------------------------------
        str_search = ui->lineEdit_PacienteSearch->text();

        //-----------------FIND FOR HISTORIA_CLINICA--------------------------------
        if(ui->comboBox_search->currentIndex()==1&&str_search!="")
        {
            QString consulta = "SELECT dni_pk, concat(apellido_paterno, ' ',apellido_materno, ' ',primer_nombre, ' ',segundo_nombre) FROM e_dni WHERE dni_pk = (SELECT dni_pk FROM e_historia_clinica WHERE REGEXP='"+arg1+"')";

        //query_historial.prepare("SELECT dni_pk, concat(apellido_paterno, ' ',apellido_materno, ' ',primer_nombre, ' ',segundo_nombre) FROM e_dni WHERE dni_pk = (SELECT dni_pk FROM e_historia_clinica WHERE nick like \""+arg1+"%\");");
            qDebug()<<consulta<<endl;
        query_historial.prepare(consulta);
        query_historial.exec();
        if(query_historial.next())
        {
                DNI_RESULT = query_historial.value(0).toString();
                NOMBRE_RESULT = query_historial.value(1).toString();
                ui->tableWidget_result->insertRow(COUNT);
                ui->tableWidget_result->setItem(COUNT,0,new QTableWidgetItem(DNI_RESULT));
                ui->tableWidget_result->setItem(COUNT,1,new QTableWidgetItem(NOMBRE_RESULT));
                COUNT++;
                ui->tableWidget_result->hideColumn(0);
        }

        }
        //-------------------------FIND FOR DNI----------------------------------------
        if(ui->comboBox_search->currentIndex()==2&&str_search!="")
        {
            bool b=false;
            str_search.toInt(&b);
            if(b)
            {
                qDebug()<<"Conversion sucess"<<endl;
                int n=str_search.toInt();
                if(n<=0)
                {
                    b=false;
                }
            }
            if(b)
            {
                query_dni.prepare("SELECT dni_pk, concat(apellido_paterno, ' ',apellido_materno, ' ',primer_nombre, ' ',segundo_nombre) FROM e_dni WHERE dni_pk LIKE \""+arg1+"%\";");
                query_dni.exec();
                ui->tableWidget_result->showColumn(0);
                    if(query_dni.next())
                    {
                        qDebug()<<"Query sucess"<<endl;
                        DNI_RESULT = query_dni.value(0).toString();
                        NOMBRE_RESULT = query_dni.value(1).toString();
                        ui->tableWidget_result->insertRow(COUNT);
                        ui->tableWidget_result->setItem(COUNT,0,new QTableWidgetItem(DNI_RESULT));
                        ui->tableWidget_result->setItem(COUNT,1,new QTableWidgetItem(NOMBRE_RESULT));
                        COUNT++;
                    }
            }
        }


        //----------------FIND FOR APELLIDO_PATERNO------------------------------------------------
        if(ui->comboBox_search->currentIndex()==0&&str_search!="")
        {
            if(str_search=="")
                    return;
           /*query_paciente.prepare("SELECT e_dni.dni_pk, e_historia_clinica.nick ,concat(e_dni.apellido_paterno, ' ', e_dni.apellido_materno,' ' , e_dni.primer_nombre, ' ', e_dni.segundo_nombre) FROM e_dni , e_historia_clinica , e_persona, e_paciente WHERE e_dni.dni_pk=e_persona.dni_pk and e_persona.dni_pk= e_paciente.dni_pk and e_paciente.dni_pk=e_historia_clinica.dni_pk  and e_dni.apellido_paterno like \""+arg1+"%\""
                                   +"OR e_dni.primer_nombre LIKE \""+arg1+"%\""
                                   +"OR e_dni.apellido_materno LIKE \""+arg1+"%\""
                                   +"OR e_dni.segundo_nombre LIKE \""+arg1+"%\""
                                   +"OR concat(e_dni.apellido_paterno, ' ',e_dni.apellido_materno, ' ',e_dni.primer_nombre, ' ',e_dni.segundo_nombre) LIKE \""+arg1+"%\""
                                   +"OR concat(e_dni.primer_nombre, ' ',e_dni.segundo_nombre, ' ',e_dni.apellido_paterno, ' ',e_dni.apellido_materno) LIKE \""+arg1+"%\""
                                   +"OR concat(e_dni.primer_nombre,' ',e_dni.apellido_paterno, ' ',e_dni.apellido_materno) LIKE \""+arg1+"%\"");*/
            QString consulta = "SELECT d.dni_pk,concat(d.apellido_paterno, ' ',d.apellido_materno, ' ',d.primer_nombre, ' ',d.segundo_nombre), h.nick, p.telefono_paciente, p.celular_paciente FROM e_dni d LEFT JOIN e_historia_clinica h ON d.dni_pk=h.dni_pk LEFT JOIN e_paciente p ON d.dni_pk=p.dni_pk LEFT JOIN e_persona per ON d.dni_pk=per.dni_pk WHERE per.tipo = 'Paciente' AND d.apellido_paterno LIKE \""+arg1+"%\""
                    +"OR d.apellido_materno LIKE \""+arg1+"%\""
                    +"OR d.primer_nombre LIKE \""+arg1+"%\""
                    +"OR d.segundo_nombre LIKE \""+arg1+"%\""
                    +"OR concat(d.apellido_paterno, ' ',d.apellido_materno, ' ',d.primer_nombre, ' ',d.segundo_nombre) LIKE \""+arg1+"%\""
                    +"OR concat(d.primer_nombre, ' ',d.segundo_nombre, ' ',d.apellido_paterno, ' ',d.apellido_materno) LIKE \""+arg1+"%\""
                    +"OR concat(d.primer_nombre,' ',d.apellido_paterno, ' ',d.apellido_materno) LIKE \""+arg1+"%\"";
            query_paciente.prepare(consulta);



            //query_paciente.prepare("SELECT d.dni_pk,concat(d.apellido_paterno, ' ',d.apellido_materno, ' ',d.primer_nombre, ' ',d.segundo_nombre), h.nick, p.telefono_paciente, p.celular_paciente FROM e_dni d LEFT JOIN e_historia_clinica h ON d.dni_pk=h.dni_pk LEFT JOIN e_paciente p ON d.dni_pk=p.dni_pk WHERE d.apellido_paternoREGEXP '"+arg1+"'&& d.dni_pk = ANY (SELECT dni_pk FROM e_persona WHERE tipo='Paciente')");
            if(!query_paciente.exec()) qDebug()<< query_paciente.lastError().text()<<endl;

            while(query_paciente.next())
            {
                 DNI_RESULT = query_paciente.value(0).toString();
                 NOMBRE_RESULT = query_paciente.value(1).toString();
                 ui->tableWidget_result->insertRow(COUNT);
                 ui->tableWidget_result->setItem(COUNT,0,new QTableWidgetItem(DNI_RESULT));
                 ui->tableWidget_result->setItem(COUNT,1,new QTableWidgetItem(NOMBRE_RESULT));
                 COUNT++;
            }
        ui->tableWidget_result->hideColumn(0);
        ui->tableWidget_result->setColumnWidth(1,500);
        }
        ui->tableWidget_result->setSortingEnabled(1);
}

void paciente_ui::setParentPrincipal(MainWindow *parent)
{
    parentWindow = parent;
}
void paciente_ui::update_list()
{
    paginacion(ui->comboBox->currentText());
}
