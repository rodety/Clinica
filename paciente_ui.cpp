#include "paciente_ui.h"
#include "ui_paciente_ui.h"
#include <QDebug>
#include <QMessageBox>
#include <QKeyEvent>
#include <QSqlError>
#include <iostream>
#include <fstream>
using namespace std;

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
    //procesar();
    //copiar();
    newPaciente_paciente_ui *PACIENTE_DATOS_FORM = new newPaciente_paciente_ui;
    PACIENTE_DATOS_FORM->set_cliked_type(0);
    PACIENTE_DATOS_FORM->show_data_paciente_form(ID_CURRENT);
    PACIENTE_DATOS_FORM->current_ID=ID_CURRENT;
    PACIENTE_DATOS_FORM->setParentWindow(parentWindow);
    PACIENTE_DATOS_FORM->setcodeWindow(parentWindow->getcodeWindow());
    PACIENTE_DATOS_FORM->show();


}

void paciente_ui::on_pushButton_editarDatos_clicked()
{
    newPaciente_paciente_ui *EDIT_DATOS_FORM = new newPaciente_paciente_ui;
    EDIT_DATOS_FORM->set_cliked_type(1);
    EDIT_DATOS_FORM->show_data_paciente_form(ID_CURRENT);
    EDIT_DATOS_FORM->current_ID=ID_CURRENT;
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
    PACIENTE_DATOS_FORM->current_ID=ID_CURRENT;
    PACIENTE_DATOS_FORM->setParentWindow(parentWindow);
    PACIENTE_DATOS_FORM->setcodeWindow(parentWindow->getcodeWindow());
    PACIENTE_DATOS_FORM->show();
    connect(PACIENTE_DATOS_FORM,SIGNAL(update_List_patients()),this,SLOT(update_list()));
}


void paciente_ui::on_eliminar_paciente_clicked()
{
    if(ID_CURRENT == "")
        return;
    QString id = ID_CURRENT;

    QSqlQuery query;
    int ret;
    QMessageBox *msgBox = new QMessageBox;

    QString str_warning = "Esta seguro que desea eliminar el paciente ?.";
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
        query.prepare("DELETE FROM Paciente WHERE idPaciente='"+id+"'");
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
    CONSULTA_LIST_FORM->id_var = ID_CURRENT;
    CONSULTA_LIST_FORM->update_consultas_form();
    CONSULTA_LIST_FORM->show();
}


void paciente_ui::on_newConsulta_paciente_clicked()
{
    newconsulta_paciente_ui *CONSULTA_DATOS_FORM = new newconsulta_paciente_ui;
    CONSULTA_DATOS_FORM->id_var = ID_CURRENT;
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
    QString consulta;
    consulta = "SELECT idPaciente as ID, codigo as 'Nro Historia' ,concat(apellido_paterno, ' ',apellido_materno,' ' ,primer_nombre, ' ', segundo_nombre)  as 'Apellido y nombres' FROM Paciente WHERE apellido_paterno like \""+a+"%\""+" ORDER BY CAST(SUBSTR(codigo FROM 2) AS UNSIGNED) DESC";
    query_paciente.prepare(consulta);

    if(!query_paciente.exec()) qDebug()<<query_paciente.lastError().text();
    model->setQuery(query_paciente);

    ui->tableView_ListaPacientes1->setModel(model);    
    ui->tableView_ListaPacientes1->setColumnWidth(0,0);
    ui->tableView_ListaPacientes1->setColumnWidth(1,150);
    ui->tableView_ListaPacientes1->setColumnWidth(2,700);


}


void paciente_ui::on_tableView_ListaPacientes1_clicked(const QModelIndex &index)
{
    ID_CURRENT = ui->tableView_ListaPacientes1->model()->data(ui->tableView_ListaPacientes1->model()->index(index.row(),0)).toString();
    QString NOMBRE= ui->tableView_ListaPacientes1->model()->data(ui->tableView_ListaPacientes1->model()->index(index.row(),1)).toString();
    const QString FICHA = ui->tableView_ListaPacientes1->model()->data(ui->tableView_ListaPacientes1->model()->index(index.row(),2)).toString();
    ui->lineEdit_CurrentPatient->clear();
    ui->lineEdit_CurrentPatient->insert(NOMBRE);
    ui->lineEdit_fichaCurrentPatient->clear();
    ui->lineEdit_fichaCurrentPatient->insert(FICHA);
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



void paciente_ui::setParentPrincipal(MainWindow *parent)
{
    parentWindow = parent;
}
void paciente_ui::update_list()
{
    paginacion(ui->comboBox->currentText());
}


void paciente_ui::procesar()
{
    //SACANDO COPIA DE LA BASE DE DATOS Y GUARDANDO EN UN ARCHIVO
    QSqlQuery query;
    QString consulta = "SELECT e_dni.dni_pk from e_dni, e_paciente, e_historia_clinica where e_dni.dni_pk = e_paciente.dni_pk and e_paciente.dni_pk = e_historia_clinica.dni_pk";
    query.prepare(consulta);
    ofstream ficheroSalida;
    ficheroSalida.open ("ficheroTexto.txt");


    if(query.exec())
    {
        while(query.next())
        {
            ficheroSalida << query.value(0).toString().toStdString().c_str()<<endl;
        }

    }
    qDebug()<<"Termino de consultar"<<endl;
    ficheroSalida.close();
}

void paciente_ui::copiar()
{
    fstream ficheroEntrada;

    string frase;

    QSqlQuery query,query1;
    QString consulta,consulta1;



        ficheroEntrada.open ( "ficheroTexto.txt" , ios::in);
        if (ficheroEntrada.is_open()) {

            while (! ficheroEntrada.eof() ) {
                getline (ficheroEntrada,frase);
                consulta = "SELECT e_dni.dni_pk, e_dni.apellido_paterno, e_dni.apellido_materno, e_dni.primer_nombre, e_dni.segundo_nombre,e_dni.sexo, e_dni.fecha_nacimiento, e_dni.donacion_organos, e_dni.estado_civil,e_dni.pais, e_dni.departamento,e_dni.provincia, e_dni.direccion,e_paciente.alergias,e_paciente.ocupacion,e_paciente.telefono_paciente,e_paciente.celular_paciente,e_paciente.email,e_paciente.cirujias_previas,e_paciente.medicacion_actual,e_paciente.persona_recurrir,e_paciente.telefono_persona_recurrir,e_paciente.antecedentes,e_historia_clinica.nick from e_dni, e_paciente, e_historia_clinica where e_dni.dni_pk = e_paciente.dni_pk and e_paciente.dni_pk = e_historia_clinica.dni_pk and e_dni.dni_pk = '"+QString::fromStdString(frase)+"'";
                query.prepare(consulta);
                //query.bindValue(0,QString::fromStdString(frase));
                if(query.exec())
                {
                    query.next();
                    consulta1 = "INSERT INTO Paciente (dni, apellido_paterno, apellido_materno, primer_nombre, segundo_nombre,sexo, fecha_nacimiento, donacion_organos, estado_civil,pais, departamento,provincia, direccion,alergias,ocupacion,telefono_paciente,celular_paciente,email,cirujias_previas,medicacion_actual,persona_recurrir,telefono_persona_recurrir,antecedentes,codigo) VALUES(";

                    for(int i=0;i<24;i++)
                    {
                        if(i==23)
                        {
                            consulta1+="'"+query.value(i).toString()+"')";
                        }
                        else
                        {
                            consulta1+="'"+query.value(i).toString()+"',";
                        }

                    }

                    query1.prepare(consulta1);
                    if(query1.exec())
                    {
                        qDebug()<<query.value(0).toString()<<query.value(23).toString()<<endl;
                    }
                    else
                    {
                        qDebug()<<"fallooooooo "<<query.value(0).toString()<<endl;
                        qDebug()<<consulta1<<endl;
                    }

                  }
                else{
                    qDebug()<<"fallo "<<QString::fromStdString(frase)<<endl;
                }

            }

            ficheroEntrada.close();
            qDebug()<<"Termino"<<endl;
        }
        else cout << "Fichero inexistente o faltan permisos para abrirlo" << endl;


}


void paciente_ui::on_lineEdit_buscar_textChanged(const QString &arg1)
{
    QSqlQueryModel *model = new QSqlQueryModel;
    QString query;


    if(arg1.size() != 0)
    {
        QStringList splitted = arg1.split(" ");
        query = "SELECT idPaciente as ID, codigo as 'Nro Historia' ,concat(apellido_paterno, ' ',apellido_materno,' ' ,primer_nombre, ' ', segundo_nombre) as 'Apellidos y Nombres' FROM Paciente WHERE (";

        switch ( splitted.size() ) {
          case 1:            // Note the colon, not a semicolon
            query+= "apellido_paterno REGEXP '"+splitted.at(0)+"' OR ";
            query+= "codigo REGEXP '"+splitted.at(0)+"'";
            break;
          case 2:            // Note the colon, not a semicolon
            query+= "apellido_paterno REGEXP '"+splitted.at(0)+"' AND ";
            query+= "apellido_materno REGEXP '"+splitted.at(1)+"'";
            break;
          case 3:            // Note the colon, not a semicolon
            query+= "apellido_paterno REGEXP '"+splitted.at(0)+"' AND ";
            query+= "apellido_materno REGEXP '"+splitted.at(1)+"' OR ";
            query+= "primer_nombre REGEXP '"+splitted.at(2)+"'";
            break;
          case 4:            // Note the colon, not a semicolon
            query+= "apellido_paterno REGEXP '"+splitted.at(0)+"' AND ";
            query+= "apellido_materno REGEXP '"+splitted.at(1)+"' OR ";
            query+= "primer_nombre REGEXP '"+splitted.at(2)+"' AND ";
            query+= "segundo_nombre REGEXP '"+splitted.at(3)+"'";
            break;
          default:            // Note the colon, not a semicolon
            for(int i=0;i<splitted.size();i++)
            {
                if(i==0)
                    query+= "apellido_paterno REGEXP '"+splitted.at(i)+"' OR ";
                else
                    query+= " OR apellido_paterno REGEXP '"+splitted.at(i)+"' OR ";
                query+= "apellido_materno REGEXP '"+splitted.at(i)+"' OR ";
                query+= "codigo REGEXP '"+splitted.at(i)+"'";
            }

            break;
          }
        query+= ") ORDER BY codigo DESC";




    }
    else
    {
        paginacion(ui->comboBox->currentText());
        return;
    }

    model->setQuery(query);
    ui->tableView_ListaPacientes1->setModel(model);

    ui->tableView_ListaPacientes1->setColumnWidth(0,0);
    ui->tableView_ListaPacientes1->setColumnWidth(1,150);
    ui->tableView_ListaPacientes1->setColumnWidth(2,700);



}
void paciente_ui::on_lineEdit_buscar_returnPressed()
{



}
