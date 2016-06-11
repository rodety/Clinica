#include "documentos_historial_ui.h"
#include "ui_documentos_historial_ui.h"
#include <QSqlQuery>
#include <QDebug>
#include "antecedentes_documento.h"
#include "item_terapeutica.h"

documentos_historial_ui::documentos_historial_ui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::documentos_historial_ui)
{
    ui->setupUi(this);
    ui->pushButton_SaveAntecedentes->setDisabled(true);
    ui->pushButton_SaveExamenClinico->setDisabled(true);
    ui->pushButton_SaveReporteOperatorio->setDisabled(true);
    ui->pushButton_SaveTerapeuticaMedica->setDisabled(true);
    ui->dateEdit_FechaCreacion->hide();
    QDate FECHA = QDate::currentDate();

    ui->dateEdit_FechaCreacion->setDate(FECHA);
    ui->dateEdit_FechaIngresoAntecedentes->setDate(FECHA);
    ui->dateEdit_Fecha_ExamenClinico->setDate(FECHA);
    ui->dateEdit_fechaAlta_Epicrisis->setDate(FECHA);
    ui->dateEdit_fechaIngreso_Epicrisis->setDate(FECHA);
    ui->dateEdit_fin_Anestecia->setDate(FECHA);
    ui->dateEdit_Inicio_operacion->setDate(FECHA);
    ui->dateEdit_inicio_Anestecia->setDate(FECHA);
    ui->dateEdit_menstruacion->setDate(FECHA);
    ui->dateEdit_fin_operacion->setDate(FECHA);

    ui->tableWidget_Terapeutica->setColumnWidth(0,100);
    ui->tableWidget_Terapeutica->setColumnWidth(1,80);
    ui->tableWidget_Terapeutica->setColumnWidth(2,300);
    ui->tableWidget_Terapeutica->setColumnWidth(3,147);
    ui->tableWidget_Terapeutica->setColumnWidth(4,80);
    //ui->lineEdit_bedNumber_antecedentes->setValidator(new QIntValidator(0, 999999999));
    //ui->lineEdit_bedNumber_reporteOperatorio->setValidator(new QIntValidator(0, 999999999));
    //ui->lineEdit_bedNumber_ExamenClinico->setValidator(new QIntValidator(0, 999999999));
    //ui->lineEdit_bedNumber_Terapeutica->setValidator(new QIntValidator(0, 999999999));
    COUNT = -1;
    ui->lineEdit_Patient->setReadOnly(true);   

}

documentos_historial_ui::~documentos_historial_ui()
{
    delete ui;
}

void documentos_historial_ui::disable_pBs_Accept(QString name_tab)
{
    ui->pushButton_AceptAntecedentes->setDisabled(true);
    ui->pushButton_AceptReporteOperatorio->setDisabled(true);
    ui->pushButton_AceptExamenClinico->setDisabled(true);
}

void documentos_historial_ui::show_document(QString tipo, QString cod_doc)
{
    ui->pushButton_AceptAntecedentes->setDisabled(true);
    ui->pushButton_AceptExamenClinico->setDisabled(true);
    ui->pushButton_AceptReporteOperatorio->setDisabled(true);
    ui->pushButton_AceptTerapeuticaMedica->setDisabled(true);
    ui->pushButton_AceptEpicrisis->setDisabled(true);
    ui->pushButton_AceptRQCV->setDisabled(true);

    ui->pushButton_SaveAntecedentes->setDisabled(true);
    ui->pushButton_SaveExamenClinico->setDisabled(true);
    ui->pushButton_SaveReporteOperatorio->setDisabled(true);
    ui->pushButton_SaveTerapeuticaMedica->setDisabled(true);    
    ui->pushButton_SaveEpicrisis->setDisabled(true);
    ui->pushButton_SaveRQCV->setDisabled(true);

    ui->pushButton_consultarMedico->setDisabled(true);
    ui->pushButton_addItem_terapeutica->hide();
    ui->pushButton_quitar_Item->hide();
    ui->lineEdit_medicoGlobal->hide();
    ui->lineEdit_dni_medico_consulta->hide();
    ui->pushButton_consultarMedico->hide();
    ui->label_127->hide();
    ui->label_128->hide();

    if(tipo=="Antecedente")
    {
        llenar_doc_Antecedente(cod_doc);

        ui->Documentos->setTabEnabled(0,true);
        ui->Documentos->setTabEnabled(1,false);
        ui->Documentos->setTabEnabled(2,false);
        ui->Documentos->setTabEnabled(3,false);
        ui->Documentos->setTabEnabled(4,false);
        ui->Documentos->setTabEnabled(5,false);
        ui->Documentos->setTabEnabled(6,false);
        ui->Documentos->setTabEnabled(7,false);

    }
    else
    {
        if(tipo=="Reporte Operatorio")
        {
            llenar_doc_ReporteOp(cod_doc);
            ui->Documentos->setTabEnabled(0,false);
            ui->Documentos->setTabEnabled(1,true);
            ui->Documentos->setTabEnabled(2,false);
            ui->Documentos->setTabEnabled(3,false);
            ui->Documentos->setTabEnabled(4,false);
            ui->Documentos->setTabEnabled(5,false);
            ui->Documentos->setTabEnabled(6,false);
            ui->Documentos->setTabEnabled(7,false);
        }
        else
        {
            if(tipo=="Examen Clinico")
            {
                llenar_doc_ExamenClinico(cod_doc);
                ui->Documentos->setTabEnabled(0,false);
                ui->Documentos->setTabEnabled(1,false);
                ui->Documentos->setTabEnabled(2,true);
                ui->Documentos->setTabEnabled(3,true);
                ui->Documentos->setTabEnabled(4,true);
                ui->Documentos->setTabEnabled(5,false);
                ui->Documentos->setTabEnabled(6,false);
                ui->Documentos->setTabEnabled(7,false);
            }
            else
            {
                if(tipo=="Terapeutica")
                {
                    llenar_doc_TerapeuticaMedica(cod_doc);
                    ui->Documentos->setTabEnabled(0,false);
                    ui->Documentos->setTabEnabled(1,false);
                    ui->Documentos->setTabEnabled(2,false);
                    ui->Documentos->setTabEnabled(3,false);
                    ui->Documentos->setTabEnabled(4,false);
                    ui->Documentos->setTabEnabled(5,true);
                    ui->Documentos->setTabEnabled(6,false);
                    ui->Documentos->setTabEnabled(7,false);
                }
                else
                {
                    if(tipo == "Epicrisis")
                    {
                        llenar_doc_Epicrisis(cod_doc);
                        ui->Documentos->setTabEnabled(0,false);
                        ui->Documentos->setTabEnabled(1,false);
                        ui->Documentos->setTabEnabled(2,false);
                        ui->Documentos->setTabEnabled(3,false);
                        ui->Documentos->setTabEnabled(4,false);
                        ui->Documentos->setTabEnabled(5,false);
                        ui->Documentos->setTabEnabled(6,true);
                        ui->Documentos->setTabEnabled(7,false);
                    }
                    else
                    {
                        if(tipo =="Riesgo.Q.C")
                        {
                            llenar_doc_Riesgo_Quirurgico(cod_doc);
                            ui->Documentos->setTabEnabled(0,false);
                            ui->Documentos->setTabEnabled(1,false);
                            ui->Documentos->setTabEnabled(2,false);
                            ui->Documentos->setTabEnabled(3,false);
                            ui->Documentos->setTabEnabled(4,false);
                            ui->Documentos->setTabEnabled(5,false);
                            ui->Documentos->setTabEnabled(6,false);
                            ui->Documentos->setTabEnabled(7,true);
                        }
                    }
                }                                
            }
        }
    }
}

void documentos_historial_ui::llenar_doc_Antecedente(QString cod_doc)
{
    QSqlQuery query;

    ui->pushButton_consultarMedico->setDisabled(true);
    ui->lineEdit_dni_medico_consulta->setText(dni_var);
    ui->Documentos->setCurrentIndex(0);
    query.prepare("SELECT * FROM e_antecedentes WHERE historial_documento_pk="+cod_doc);
    query.exec();
    query.next();
    ui->dateEdit_FechaIngresoAntecedentes->setDate(query.value(3).toDate());
    ui->dateEdit_menstruacion->setDate(query.value(4).toDate());
    ui->lineEdit_RegimenCatamental->setText(query.value(5).toString());
    ui->comboBox_tabaco->setCurrentIndex(query.value(6).toInt());
    ui->comboBox_alcohol->setCurrentIndex(query.value(7).toInt());
    ui->textEdit_MedicacionActual->setPlainText(query.value(8).toString());
    ui->textEdit_AntecedentesPatologicosPersonales->setPlainText(query.value(9).toString());
    ui->textEdit_AntecedentesPatologicosFamiliares->setPlainText(query.value(10).toString());
    ui->textEdit_Observaciones->setPlainText(query.value(11).toString());
    ui->lineEdit_bedNumber_antecedentes->setText(query.value(12).toString());
    ui->lineEdit_servicioAntecedentes->setText(query.value(13).toString());
    ui->lineEdit_medico_Antecedentes->setText(query.value(14).toString());
    ui->textEdit_Operaciones->setPlainText(query.value(15).toString());
}
void documentos_historial_ui::llenar_doc_ReporteOp(QString cod_doc)
{

    QSqlQuery query;
    ui->Documentos->setCurrentIndex(1);
    ui->pushButton_consultarMedico->setDisabled(true);
    ui->lineEdit_dni_medico_consulta->setText(dni_var);
    query.prepare("SELECT * FROM e_reporte_operatorio WHERE historial_documento_pk="+cod_doc);
    query.exec();
    query.next();
    ui->dateEdit_FechaCreacion->setDate(query.value(3).toDate());
    ui->dateEdit_Inicio_operacion->setDate(query.value(4).toDateTime().date());
    ui->timeEdit_inicio_operacion->setTime(query.value(4).toDateTime().time());
    ui->dateEdit_fin_operacion->setDate(query.value(5).toDateTime().date());
    ui->timeEdit_fin_operacion->setTime(query.value(5).toDateTime().time());
    ui->lineEdit_TipoAnestecia->setText(query.value(6).toString());
    ui->dateEdit_inicio_Anestecia->setDate(query.value(7).toDateTime().date());
    ui->timeEdit_inicio_Anestecia->setTime(query.value(7).toDateTime().time());
    ui->dateEdit_fin_Anestecia->setDate(query.value(8).toDateTime().date());
    ui->timeEdit_fin_anestecia->setTime(query.value(8).toDateTime().time());
    ui->lineEdit_CuentaGasa->setText(query.value(9).toString());
    ui->lineEdit_Drenes->setText(query.value(10).toString());
    ui->lineEdit_Apositos->setText(query.value(11).toString());
    ui->lineEdit_Otros->setText(query.value(12).toString());
    ui->textEdit_DXPreOperatorio->setPlainText(query.value(13).toString());
    ui->textEdit_DXPostOperatorio->setPlainText(query.value(14).toString());
    ui->textEdit_Procedimiento->setPlainText(query.value(15).toString());
    ui->textEdit_Hallazgo->setPlainText(query.value(16).toString());
    ui->lineEdit_bedNumber_reporteOperatorio->setText(query.value(19).toString());
    ui->lineEdit_Ayudante1->setText(query.value(21).toString());
    ui->lineEdit_Ayudante2->setText(query.value(22).toString());
    ui->lineEdit_Anestesiologo->setText(query.value(23).toString());
    ui->lineEdit_Instrumentista->setText(query.value(24).toString());
    ui->lineEdit_Circulante->setText(query.value(25).toString());
    ui->lineEdit_medico_ReporteOperatorio->setText(query.value(26).toString());
    ui->lineEdit_Cirujano->setText(query.value(27).toString());
}
void documentos_historial_ui::llenar_doc_ExamenClinico(QString cod_doc)
{
    QSqlQuery query;
    ui->Documentos->setCurrentIndex(2);
    ui->pushButton_consultarMedico->setDisabled(true);
    ui->lineEdit_dni_medico_consulta->setText(dni_var);
    query.prepare("SELECT * FROM e_examen_clinico WHERE historial_documento_pk="+cod_doc);
    query.exec();
    query.next();

    ui->dateEdit_Fecha_ExamenClinico->setDate(query.value(2).toDate());
    ui->lineEdit_Talla->setText(query.value(3).toString());
    ui->lineEdit_Peso->setText(query.value(4).toString());
    ui->lineEdit_PesoHabitual->setText(query.value(5).toString());
    ui->lineEdit_Temperatura->setText(query.value(6).toString());
    ui->lineEdit_Pulso->setText(query.value(7).toString());
    ui->lineEdit_Respiracion->setText(query.value(8).toString());
    ui->lineEdit_EstadoGeneral->setText(query.value(9).toString());
    ui->lineEdit_Mental->setText(query.value(10).toString());
    ui->lineEdit_Fascies->setText(query.value(11).toString());
    ui->lineEdit_PielAnexos->setText(query.value(12).toString());
    ui->lineEdit_Color->setText(query.value(13).toString());
    ui->lineEdit_CelularSubcutaneo->setText(query.value(14).toString());
    ui->lineEdit_OsteoMoArticular->setText(query.value(15).toString());
    ui->lineEdit_SistemaLinfatico->setText(query.value(16).toString());
    ui->lineEdit_Cabeza->setText(query.value(17).toString());
    ui->lineEdit_Ojos->setText(query.value(18).toString());
    ui->lineEdit_Pupilas->setText(query.value(19).toString());
    ui->lineEdit_FondoOjo->setText(query.value(20).toString());
    ui->lineEdit_Nariz->setText(query.value(21).toString());
    ui->lineEdit_Oidos->setText(query.value(22).toString());
    ui->lineEdit_Labios->setText(query.value(23).toString());
    ui->lineEdit_Mucosa->setText(query.value(24).toString());
    ui->lineEdit_Lengua->setText(query.value(25).toString());
    ui->lineEdit_Dientes->setText(query.value(26).toString());
    ui->lineEdit_Paladar->setText(query.value(27).toString());
    ui->lineEdit_AdmigdalasFaringe->setText(query.value(28).toString());
    ui->lineEdit_Cuello->setText(query.value(29).toString());
    ui->lineEdit_Tiroides->setText(query.value(30).toString());
    ui->lineEdit_Torax->setText(query.value(31).toString());
    ui->lineEdit_Mamas->setText(query.value(32).toString());
    ui->lineEdit_PresionArterial->setText(query.value(33).toString());
    ui->lineEdit_Frecuencia->setText(query.value(34).toString());
    ui->lineEdit_Ritmo->setText(query.value(35).toString());
    ui->lineEdit_Amplitud->setText(query.value(36).toString());
    ui->lineEdit_Pared->setText(query.value(37).toString());
    ui->lineEdit_PulsoCardiaco->setText(query.value(38).toString());
    ui->lineEdit_Femoral->setText(query.value(39).toString());
    ui->lineEdit_Pedio->setText(query.value(40).toString());
    ui->lineEdit_OtrosExamenCLinico->setText(query.value(41).toString());
    ui->lineEdit_CorazonCoquePUnta->setText(query.value(42).toString());
    ui->lineEdit_RuidosCardiacos->setText(query.value(43).toString());
    ui->lineEdit_Soplos->setText(query.value(44).toString());
    ui->lineEdit_RuidosAdventicios->setText(query.value(45).toString());
    ui->lineEdit_TipoRespiracion->setText(query.value(46).toString());
    ui->lineEdit_Frecuencia_2->setText(query.value(47).toString());
    ui->lineEdit_Retracciones->setText(query.value(48).toString());
    ui->lineEdit_Abovedameintos->setText(query.value(49).toString());
    ui->lineEdit_Movilidad->setText(query.value(50).toString());
    ui->lineEdit_VibracionesVocales->setText(query.value(51).toString());
    ui->lineEdit_Percusion->setText(query.value(52).toString());
    ui->lineEdit_Auscultacion_palpacio->setText(query.value(53).toString());
    ui->lineEdit_PielAbdomen->setText(query.value(54).toString());
    ui->lineEdit_Deformaciones->setText(query.value(55).toString());
    ui->lineEdit_Movilidad_2->setText(query.value(56).toString());
    ui->lineEdit_CirculacionColateral->setText(query.value(57).toString());
    ui->lineEdit_Pared_2->setText(query.value(58).toString());
    ui->lineEdit_Sensibilidad->setText(query.value(59).toString());
    ui->lineEdit_TensionAbdominal->setText(query.value(60).toString());
    ui->lineEdit_PuntosDolorosos->setText(query.value(61).toString());
    ui->lineEdit_PalpacionProfunda->setText(query.value(62).toString());
    ui->lineEdit_Percusion_2->setText(query.value(63).toString());
    ui->lineEdit_Auscultacion_palpacion->setText(query.value(64).toString());
    ui->lineEdit_Higado->setText(query.value(65).toString());
    ui->lineEdit_Bazo->setText(query.value(66).toString());
    ui->lineEdit_TactoRectal->setText(query.value(67).toString());
    ui->lineEdit_TactoVaginal->setText(query.value(68).toString());
    ui->lineEdit_Genitales->setText(query.value(69).toString());
    ui->textEdit_Neurologico->setPlainText(query.value(70).toString());
    ui->textEdit_ImpresionesDiagnosticas->setPlainText(query.value(71).toString());
    ui->lineEdit_bedNumber_ExamenClinico->setText(query.value(72).toString());
    ui->lineEdit_servicio_examenClinico->setText(query.value(73).toString());
    ui->lineEdit_medico_examenClinico->setText(query.value(74).toString());
    ui->lineEdit_Biotipo->setText(query.value(75).toString());
}

void documentos_historial_ui::llenar_doc_TerapeuticaMedica(QString cod_doc)
{
    ui->tableWidget_Terapeutica->setSortingEnabled(0);
    QSqlQuery query;
    QString HISTORIA_CLINICA_PK, FECHA_INICIO,HORA_INICIO,TERAPEUTICA,FECHA_FIN,HORA_FIN;
    int COUNT = 0;
    ui->Documentos->setCurrentIndex(5);
    ui->pushButton_consultarMedico->setDisabled(true);
    ui->lineEdit_dni_medico_consulta->setText(dni_var);
    query.prepare("SELECT * FROM e_terapeutica_medica WHERE historial_documento_pk="+cod_doc);
    query.exec();
    query.next();
    HISTORIA_CLINICA_PK = query.value(1).toString();
    qDebug()<<HISTORIA_CLINICA_PK<<endl;
    qDebug()<<cod_doc<<endl;
    ui->dateEdit_FechaCreacion->setDate(query.value(2).toDate());
    ui->lineEdit_bedNumber_Terapeutica->setText(query.value(3).toString());
    ui->lineEdit_servicio_Terapeutica->setText(query.value(4).toString());
    ui->lineEdit_medico_Terapeutica->setText(query.value(5).toString());

    query.prepare("SELECT * FROM datos_terapeutica WHERE historial_documento_pk ="+cod_doc+ " AND historia_clinica_pk ="+HISTORIA_CLINICA_PK);
    query.exec();
    while(query.next())
    {
        qDebug()<<query.value(0).toString()<<endl;
        FECHA_INICIO = query.value(3).toString();
        HORA_INICIO = query.value(4).toString();
        TERAPEUTICA = query.value(5).toString();
        FECHA_FIN = query.value(6).toString();
        HORA_FIN = query.value(7).toString();
        ui->tableWidget_Terapeutica->insertRow(COUNT);
        ui->tableWidget_Terapeutica->setItem(COUNT,0,new QTableWidgetItem(FECHA_INICIO));
        ui->tableWidget_Terapeutica->setItem(COUNT,1,new QTableWidgetItem(HORA_INICIO));
        ui->tableWidget_Terapeutica->setItem(COUNT,2,new QTableWidgetItem(TERAPEUTICA));
        ui->tableWidget_Terapeutica->setItem(COUNT,3,new QTableWidgetItem(FECHA_FIN));
        ui->tableWidget_Terapeutica->setItem(COUNT,4,new QTableWidgetItem(HORA_FIN));
        COUNT++;
    }

    ui->pushButton_addItem_terapeutica->hide();
    ui->pushButton_quitar_Item->hide();
    ui->tableWidget_Terapeutica->setSortingEnabled(1);

}

//-------------------------- EPICRISIS  -----------------------------
void documentos_historial_ui::llenar_doc_Epicrisis(QString cod_doc)
{
    QSqlQuery query;
    ui->Documentos->setCurrentIndex(6);
    ui->pushButton_SaveEpicrisis->setDisabled(true);
    ui->pushButton_AceptEpicrisis->setDisabled(true);
    ui->lineEdit_dni_medico_consulta->setText(dni_var);
    query.prepare("SELECT * FROM e_epicrisis WHERE historial_documento_pk="+cod_doc);
    query.exec();
    query.next();
    ui->lineEdit_medico_Epicrisis->setText(query.value(2).toString());
    ui->lineEdit_servicio_Epicrisis->setText(query.value(3).toString());
    ui->lineEdit_bedNumber_Epicrisis->setText(query.value(4).toString());
    ui->dateEdit_fechaIngreso_Epicrisis->setDate(query.value(5).toDate());
    ui->dateEdit_fechaAlta_Epicrisis->setDate(query.value(6).toDate());
    ui->lineEdit_diasHospitalizacion_Epicrisis->setText(query.value(7).toString());
    //ui->lineEdit_
    ui->textEdit_resumHistoriaClinica_Epicrisis->setText(query.value(9).toString());
    ui->textEdit_resuExamClinico_Epicrisis->setText(query.value(10).toString());
    ui->textEdit_examenesAux_Epicrisis->setText(query.value(11).toString());
    ui->textEdit_DiagINgreso_Epicrisis->setText(query.value(12).toString());
    ui->textEdit_tratamineto_Epicrisis->setText(query.value(13).toString());
    ui->textEdit_evolucion_Epicrisis->setText(query.value(14).toString());
    ui->textEdit_diagFinal_Epicrisis->setText(query.value(15).toString());
    ui->textEdit_indicaciones_Epicrisis->setText(query.value(16).toString());
}
void documentos_historial_ui::llenar_doc_Riesgo_Quirurgico(QString cod_doc)
{
    QSqlQuery query;
    ui->Documentos->setCurrentIndex(7);
    ui->pushButton_SaveRQCV->setDisabled(true);
    ui->pushButton_AceptRQCV->setDisabled(true);
    ui->lineEdit_dni_medico_consulta->setText(dni_var);
    query.prepare("SELECT * FROM e_riesgo_quirurgico WHERE historial_documento_pk="+cod_doc);
    query.exec();
    query.next();
    ui->lineEdit_medicoGlobal->setText(query.value(2).toString());
    ui->lineEdit_precedenciaRQCV->setText(query.value(3).toString());
    ui->lineEdit_htaRQCV->setText(query.value(4).toString());
    ui->lineEdit_asmaRQCV->setText(query.value(5).toString());
    ui->lineEdit_tbcRQCV->setText(query.value(6).toString());
    ui->lineEdit_dmRQCV->setText(query.value(7).toString());
    ui->lineEdit_motivoRQCV->setText(query.value(8).toString());
    ui->lineEdit_paRQCV->setText(query.value(9).toString());
    ui->lineEdit_fcRQCV->setText(query.value(10).toString());
    ui->lineEdit_corazonRQCV->setText(query.value(11).toString());
    ui->lineEdit_pulmonesRQCV->setText(query.value(12).toString());
    ui->lineEdit_pulsosPerifericosRQCV->setText(query.value(13).toString());
    ui->lineEdit_sistemaVenosoRQCV->setText(query.value(14).toString());
    ui->lineEdit_ekgRQCV->setText(query.value(15).toString());
    ui->lineEdit_fc1RQCV->setText(query.value(16).toString());
    ui->lineEdit_pRQCV->setText(query.value(17).toString());
    ui->lineEdit_prRQCV->setText(query.value(18).toString());
    ui->lineEdit_qrs->setText(query.value(19).toString());
    ui->lineEdit_qtRQCV->setText(query.value(20).toString());
    ui->lineEdit_stRQCV->setText(query.value(21).toString());
    ui->lineEdit_ondaTRQCV->setText(query.value(22).toString());
    ui->lineEdit_aqrsRQCV->setText(query.value(23).toString());
    ui->lineEdit_idRQCV->setText(query.value(24).toString());
    ui->lineEdit_rqcvRQCV->setText(query.value(25).toString());
    ui->lineEdit_sugerenciasRQCV->setText(query.value(26).toString());
    ui->dateEdit_FechaCreacion->setDate(query.value(27).toDate());


}


//--------------ANTECEDENTES ------------------------------------------------------

//--------------ANTECEDENTES ------------------------------------------------------
void documentos_historial_ui::on_pushButton_AceptAntecedentes_clicked()
{
    QString HISTORIA_CLINICA,R_HISTORIAL_DOCUMENTO;

    QSqlQuery query;
    query.prepare("SELECT historia_clinica_pk FROM e_historia_clinica WHERE Paciente_idPaciente="+id_var);
    query.exec();
    query.next();
    HISTORIA_CLINICA = query.value(0).toString();
    query.prepare("INSERT INTO r_historial_documento(historia_clinica_pk,tipo,fecha_creacion,comentario) VALUES(?,?,?,?)");
    query.bindValue(0,HISTORIA_CLINICA);
    query.bindValue(1,"Antecedente");
    query.bindValue(2,ui->dateEdit_FechaCreacion->text());
    query.bindValue(3,"Ninguno");
    query.exec();

    query.prepare("SELECT max(historial_documento_pk) as historial_documento_pk from r_historial_documento");
    query.exec();
    query.next();

    R_HISTORIAL_DOCUMENTO = query.value(0).toString();

    if(ui->lineEdit_bedNumber_antecedentes->text()=="")
        ui->lineEdit_bedNumber_antecedentes->setText("0");
    query.prepare("INSERT INTO e_antecedentes(historia_clinica_pk,historial_documento_pk,fecha_creacion,fecha_ingreso,fecha_ultima_menstruacion,regimen_catamental,tabaco,alcohol,medicacion_actual,antecedentes_patologicos_personales,antecedentes_patologicos_familiares,observaciones,cama,servicio,medico_tratante, operaciones) VALUES(?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?)");
    query.bindValue(0,HISTORIA_CLINICA);
    query.bindValue(1,R_HISTORIAL_DOCUMENTO);
    query.bindValue(2,ui->dateEdit_FechaCreacion->text());
    query.bindValue(3,ui->dateEdit_FechaIngresoAntecedentes->text());
    query.bindValue(4,ui->dateEdit_menstruacion->text());
    query.bindValue(5,ui->lineEdit_RegimenCatamental->text());
    query.bindValue(6,ui->comboBox_tabaco->currentIndex());
    query.bindValue(7,ui->comboBox_alcohol->currentIndex());
    query.bindValue(8,ui->textEdit_MedicacionActual->toPlainText());
    query.bindValue(9,ui->textEdit_AntecedentesPatologicosPersonales->toPlainText());
    query.bindValue(10,ui->textEdit_AntecedentesPatologicosFamiliares->toPlainText());
    query.bindValue(11,ui->textEdit_Observaciones->toPlainText());
    query.bindValue(12,ui->lineEdit_bedNumber_antecedentes->text());
    query.bindValue(13,ui->lineEdit_servicioAntecedentes->text());
    query.bindValue(14,ui->lineEdit_medico_Antecedentes->text());
    query.bindValue(15,ui->textEdit_Operaciones->toPlainText());
    query.exec();
    this->close();
    if(!changeParentWindow(codeWindow))
    {
        currentParent->updateTableDocuments(HISTORIA_CLINICA);
        currentParent->generateDocLatex();
    }

}
void documentos_historial_ui::show_name(QString name)
{
    ui->lineEdit_Patient->insert(name);

}

void documentos_historial_ui::show_list_doctor_name()
{
    QSqlQuery query,query_dni;
    QString DNI,APELLIDOS_NOMBRES;
    query.prepare("SELECT *FROM e_persona WHERE tipo=\"Medico\"");
    query.exec();
    while(query.next())
    {
        DNI = query.value(0).toString();
        query_dni.prepare("SELECT apellido_paterno,apellido_materno,primer_nombre,segundo_nombre FROM e_dni WHERE dni_pk="+DNI);
        query_dni.exec();
        while(query_dni.next())
        {
            APELLIDOS_NOMBRES = query_dni.value(0).toString()+" "+query_dni.value(1).toString()+", "+query_dni.value(2).toString()+" "+query_dni.value(3).toString();
            qDebug()<<"AQUI ESTOY CON : "<<APELLIDOS_NOMBRES<<endl;
        }

    }
}

void documentos_historial_ui::on_comboBox_DoctorAntecedentes_currentIndexChanged(int index)
{
    int INDICE;
    INDICE = index;
}

void documentos_historial_ui::show_data_document_form(QString document_code)
{
    QSqlQuery query;
    QString HISTORIA_CLINICA,CODIGO_DOCUMENTO,FECHA_CREACION,FECHA_INGRESO,FECHA_MENSTRUACION,REGIMEN_CATAMENTAL;
    QString TABACO,ALCOHOL,MEDICACION_ACTUAL,ANTECEDENTES_PERSONALES,ANTECEDENTES_FAMILIARES,OBSERVACIONES,CAMA,DNI_MEDICO;
    QString SERVICIO;
    CODIGO_DOCUMENTO = document_code;
    query.prepare("SELECT fecha_ingreso,fecha_ultima_menstrucacion,regimen_catamental,tabaco,alcohol,medicacion_actual,antecedentes_patologicos_personales,antecedentes_patologicos_familiares,observaciones,cama,dni_pk,servicio FROM e_antecedentes WHERE historial_documento_pk="+CODIGO_DOCUMENTO);
    query.exec();
    query.next();
    FECHA_INGRESO = query.value(0).toString();
    FECHA_MENSTRUACION = query.value(1).toString();
    REGIMEN_CATAMENTAL = query.value(2).toString();
    TABACO = query.value(3).toInt();
    ALCOHOL = query.value(4).toInt();
    MEDICACION_ACTUAL = query.value(5).toString();
    ANTECEDENTES_PERSONALES = query.value(6).toString();
    ANTECEDENTES_FAMILIARES = query.value(7).toString();
    OBSERVACIONES = query.value(8).toString();
}

void documentos_historial_ui::on_pushButton_consultarMedico_clicked()
{
    QString DNI,NOMBRE;
    DNI = ui->lineEdit_dni_medico_consulta->text();
    QSqlQuery query;
    query.prepare("SELECT dni_pk FROM e_persona WHERE tipo ='Medico'");
    query.exec();
    query.next();
    DNI = query.value(0).toString();
    query.prepare("SELECT apellido_paterno,apellido_materno,primer_nombre,segundo_nombre FROM e_dni WHERE dni_pk="+DNI);
    query.exec();
    query.next();
    NOMBRE = query.value(0).toString()+" "+query.value(1).toString()+" "+query.value(2).toString()+" "+query.value(3).toString();
    ui->lineEdit_medicoGlobal->clear();
    ui->lineEdit_medicoGlobal->insert(NOMBRE);
}

void documentos_historial_ui::on_lineEdit_medicoGlobal_textChanged(const QString &arg1)
{
    ui->lineEdit_medico_Antecedentes->clear();
    ui->lineEdit_medico_Antecedentes->setText(arg1);
    ui->lineEdit_medico_examenClinico->clear();
    ui->lineEdit_medico_examenClinico->setText(arg1);
    ui->lineEdit_medico_ReporteOperatorio->clear();
    ui->lineEdit_medico_ReporteOperatorio->setText(arg1);
    ui->lineEdit_medico_Terapeutica->clear();
    ui->lineEdit_medico_Terapeutica->setText(arg1);
    ui->lineEdit_medico_Epicrisis->clear();
    ui->lineEdit_medico_Epicrisis->setText(arg1);
}

void documentos_historial_ui::on_pushButton_AceptReporteOperatorio_clicked()
{
    if(ui->lineEdit_bedNumber_reporteOperatorio->text()=="")
        ui->lineEdit_bedNumber_reporteOperatorio->setText("0");
    QString HISTORIA_CLINICA_PK, HISTORIAL_DOCUMENTO_PK
            , FECHA_CREACION, TIPO_ANESTECIA
            , CUENTA_GASA, DRENES, APOSITOS
            , OTROS, DX_PRE_OP, DX_POST_OP, PROCEDIMIENTO, HALLAZGO
            , FIRMA, HABITACION, CAMA, CONVENIO, PRIMER_AYUDANTE, SEGUNDO_AYUDANTE
            , ANESTESIOLOGO, INSTRUMENTISTA, CIRCULANTE, MEDICO_TRATANTE
            , CIRUJANO;
    QDateTime INICIO_OPERACION;
    QDateTime FIN_OPERACION;
    QDateTime INICIO_ANESTECIA;
    QDateTime FIN_ANESTECIA;

    QSqlQuery query, insert_e_rp;
    QString str_insert;
    query.prepare("SELECT historia_clinica_pk FROM e_historia_clinica WHERE Paciente_idPaciente="+id_var);
    query.exec();
    query.next();
    HISTORIA_CLINICA_PK = query.value(0).toString();
    query.prepare("INSERT INTO r_historial_documento(historia_clinica_pk,tipo,fecha_creacion,comentario) VALUES(?,?,?,?)");
    query.bindValue(0,HISTORIA_CLINICA_PK);
    query.bindValue(1,"Reporte Operatorio");
    query.bindValue(2,ui->dateEdit_FechaCreacion->text());
    query.bindValue(3,"Ninguno");
    query.exec();
    query.prepare("SELECT max(historial_documento_pk) as historial_documento_pk from r_historial_documento");
    query.exec();
    query.next();
    HISTORIAL_DOCUMENTO_PK = query.value(0).toString();
    //actualizando variables para luego hacer la consulta
    FECHA_CREACION = ui->dateEdit_FechaCreacion->text();
    INICIO_OPERACION.setDate(ui->dateEdit_Inicio_operacion->date());
    INICIO_OPERACION.setTime(ui->timeEdit_inicio_operacion->time());
    FIN_OPERACION.setDate(ui->dateEdit_fin_operacion->date());
    FIN_OPERACION.setTime(ui->timeEdit_fin_operacion->time());
    TIPO_ANESTECIA = ui->lineEdit_TipoAnestecia->text();
    INICIO_ANESTECIA.setDate(ui->dateEdit_inicio_Anestecia->date());
    INICIO_ANESTECIA.setTime(ui->timeEdit_inicio_Anestecia->time());
    FIN_ANESTECIA.setDate(ui->dateEdit_fin_Anestecia->date());
    FIN_ANESTECIA.setTime(ui->timeEdit_fin_anestecia->time());
    CUENTA_GASA = ui->lineEdit_CuentaGasa->text();
    DRENES = ui->lineEdit_Drenes->text();
    APOSITOS = ui->lineEdit_Apositos->text();
    OTROS = ui->lineEdit_Otros->text();
    DX_PRE_OP = ui->textEdit_DXPreOperatorio->toPlainText();
    DX_POST_OP = ui->textEdit_DXPostOperatorio->toPlainText();
    PROCEDIMIENTO = ui->textEdit_Procedimiento->toPlainText();
    HALLAZGO = ui->textEdit_Hallazgo->toPlainText();
    FIRMA = "";
    HABITACION = "0";
    CAMA = ui->lineEdit_bedNumber_reporteOperatorio->text();
    CONVENIO = "";
    PRIMER_AYUDANTE = ui->lineEdit_Ayudante1->text();
    SEGUNDO_AYUDANTE = ui->lineEdit_Ayudante2->text();
    ANESTESIOLOGO = ui->lineEdit_Anestesiologo->text();
    INSTRUMENTISTA = ui->lineEdit_Instrumentista->text();
    CIRCULANTE = ui->lineEdit_Circulante->text();
    MEDICO_TRATANTE = ui->lineEdit_medico_ReporteOperatorio->text();
    CIRUJANO = ui->lineEdit_Cirujano->text();
    str_insert = "INSERT INTO e_reporte_operatorio(";
    str_insert += "historia_clinica_pk, historial_documento_pk";
    str_insert += ", fecha_creacion, inicio_operacion, fin_operacion, tipo_anestecia";
    str_insert += ", inicio_anestecia, fin_anestecia, cuenta_gasa, drenes, apositos";
    str_insert += ", otros, dx_pre_op, dx_post_op, procedimiento, hallazgo";
    str_insert += ", firma, habitacion, cama, convenio, primer_ayudante, segundo_ayudante";
    str_insert += ", anestesiologo, instrumentista, circulante, medico_tratante";
    str_insert += ", cirujano";
    str_insert += ") ";
    str_insert += "VALUES(?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?);";
    //INSERT INTO e_reporte_operatorio(historia_clinica_pk, historial_documento_pk, fecha_creacion, inicio_operacion, fin_operacion, tipo_anestecia, inicio_anestecia, fin_anestecia, cuenta_gasa, drenes, apositos, otros, dx_pre_op, dx_post_op, procedimiento, hallazgo, firma, habitacion, cama, convenio, primer_ayudante, segundo_ayudante, anestesiologo, instrumentista, circulante, medico_tratante) VALUES(?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?);
    qDebug()<<"Inicio Operacion"<<INICIO_OPERACION<<endl;
    insert_e_rp.prepare(str_insert);
    insert_e_rp.bindValue(0, HISTORIA_CLINICA_PK);
    insert_e_rp.bindValue(1, HISTORIAL_DOCUMENTO_PK);
    insert_e_rp.bindValue(2, FECHA_CREACION);
    insert_e_rp.bindValue(3, INICIO_OPERACION);
    insert_e_rp.bindValue(4, FIN_OPERACION);
    insert_e_rp.bindValue(5, TIPO_ANESTECIA);
    insert_e_rp.bindValue(6, INICIO_ANESTECIA);
    insert_e_rp.bindValue(7, FIN_ANESTECIA);
    insert_e_rp.bindValue(8, CUENTA_GASA);
    insert_e_rp.bindValue(9, DRENES);
    insert_e_rp.bindValue(10, APOSITOS);
    insert_e_rp.bindValue(11, OTROS);
    insert_e_rp.bindValue(12, DX_PRE_OP);
    insert_e_rp.bindValue(13, DX_POST_OP);
    insert_e_rp.bindValue(14, PROCEDIMIENTO);
    insert_e_rp.bindValue(15, HALLAZGO);
    insert_e_rp.bindValue(16, FIRMA);
    insert_e_rp.bindValue(17, HABITACION);
    insert_e_rp.bindValue(18, CAMA);
    insert_e_rp.bindValue(19, CONVENIO);
    insert_e_rp.bindValue(20, PRIMER_AYUDANTE);
    insert_e_rp.bindValue(21, SEGUNDO_AYUDANTE);
    insert_e_rp.bindValue(22, ANESTESIOLOGO);
    insert_e_rp.bindValue(23, INSTRUMENTISTA);
    insert_e_rp.bindValue(24, CIRCULANTE);
    insert_e_rp.bindValue(25, MEDICO_TRATANTE);
    insert_e_rp.bindValue(26, CIRUJANO);
    insert_e_rp.exec();
    if(!changeParentWindow(codeWindow))
        currentParent->updateTableDocuments(HISTORIA_CLINICA_PK);
    this->close();
}

void documentos_historial_ui::on_pushButton_AceptExamenClinico_clicked()
{

    if(ui->lineEdit_bedNumber_ExamenClinico->text()=="")
        ui->lineEdit_bedNumber_ExamenClinico->setText("0");
    QString HISTORIAL_DOCUMENTO_PK, HISTORIA_CLINICA_PK, FECHA_CREACION, TALLA
            , PESO, PESO_HABITUAL, TEMPERATURA, PULSO, RESPIRACION, ESTADO_GENERAL
            , MENTAL, FACIES, PIEL_ANEXOS, COLOR, CELULAR_SUBCUTANEO
            , OSTEO_MIO_ARTICULAR, SISTEMA_LINFATICO, CABEZA, OJOS, PUPILA
            , FONDO_OJO, NARIZ, OIDOS, LABIOS, MUCOSAS, LENGUA, DIENTES, PALADAR
            , ADMIGDALAS_FARINGE, CUELLO, TIROIDES, TORAX, MAMAS, PRESION_ARTERIAL
            , FRECUENCIA, RITMO, AMPLITUD, PARED, PULSO_CARDIACO, FEMORAL, PEDIO
            , OTROS, CORAZON_CHOQUE_PUNTA, RUIDOS_CARDIACOS, SOPLOS
            , RUIDOS_ADVENTICIOS, TIPO_RESPIRACION, FRECUENCIA_RESPIRATORIA
            , RETRACCIONES, ABOVEDAMIENTOS, MOVILIDAD, VIBRACIONES_VOCALES, PERCUSION
            , AUSCULTACION, PIEL_ABDOMEN, DEFORMACIONES, MOVILIDAD_ABDOMEN
            , CIRCULACION_COLATERAL, PARED_PALPACION, SENSIBILIDAD, TENSION_ABDOMINAL
            , PUNTOS_DOLOROSOS, PALPACION_PROFUNDA, PERCUSION_ABDOMEN
            , AUSCULTACION_ABDOMEN, HIGADO, BASO, TACTO_RECTAL, TACTO_VAGINAL
            , GENITALES, NEUROLOGICO, IMPRESIONES_DIAGNOSTICAS, CAMA, SERVICIO
            , MEDICO_TRATANTE, BIOTIPO;

    QSqlQuery query, insert;
    QString str_insert;
    query.prepare("SELECT historia_clinica_pk FROM e_historia_clinica WHERE Paciente_idPaciente="+id_var);
    query.exec();
    query.next();
    HISTORIA_CLINICA_PK = query.value(0).toString();
    query.prepare("INSERT INTO r_historial_documento(historia_clinica_pk,tipo,fecha_creacion,comentario) VALUES(?,?,?,?)");
    query.bindValue(0,HISTORIA_CLINICA_PK);
    query.bindValue(1,"Examen Clinico");
    query.bindValue(2,ui->dateEdit_FechaCreacion->text());
    query.bindValue(3,"Ninguno");
    query.exec();
    query.prepare("SELECT max(historial_documento_pk) as historial_documento_pk from r_historial_documento");
    query.exec();
    query.next();
    HISTORIAL_DOCUMENTO_PK = query.value(0).toString();
    FECHA_CREACION = ui->dateEdit_Fecha_ExamenClinico->text();
    TALLA = ui->lineEdit_Talla->text();
    PESO = ui->lineEdit_Peso->text();
    PESO_HABITUAL = ui->lineEdit_PesoHabitual->text();
    TEMPERATURA = ui->lineEdit_Temperatura->text();
    PULSO = ui->lineEdit_Pulso->text();
    RESPIRACION = ui->lineEdit_Respiracion->text();
    ESTADO_GENERAL = ui->lineEdit_EstadoGeneral->text();
    MENTAL = ui->lineEdit_Mental->text();
    FACIES = ui->lineEdit_Fascies->text();
    PIEL_ANEXOS = ui->lineEdit_PielAnexos->text();
    COLOR = ui->lineEdit_Color->text();
    CELULAR_SUBCUTANEO = ui->lineEdit_CelularSubcutaneo->text();
    OSTEO_MIO_ARTICULAR = ui->lineEdit_OsteoMoArticular->text();
    SISTEMA_LINFATICO = ui->lineEdit_SistemaLinfatico->text();
    CABEZA = ui->lineEdit_Cabeza->text();
    OJOS = ui->lineEdit_Ojos->text();
    PUPILA = ui->lineEdit_Pupilas->text();
    FONDO_OJO = ui->lineEdit_FondoOjo->text();
    NARIZ = ui->lineEdit_Nariz->text();
    OIDOS = ui->lineEdit_Oidos->text();
    LABIOS = ui->lineEdit_Labios->text();
    MUCOSAS = ui->lineEdit_Mucosa->text();
    LENGUA = ui->lineEdit_Lengua->text();
    DIENTES = ui->lineEdit_Dientes->text();
    PALADAR = ui->lineEdit_Paladar->text();
    ADMIGDALAS_FARINGE = ui->lineEdit_AdmigdalasFaringe->text();
    CUELLO = ui->lineEdit_Cuello->text();
    TIROIDES = ui->lineEdit_Tiroides->text();
    TORAX = ui->lineEdit_Torax->text();
    MAMAS = ui->lineEdit_Mamas->text();
    PRESION_ARTERIAL = ui->lineEdit_PresionArterial->text();
    FRECUENCIA = ui->lineEdit_Frecuencia->text();
    RITMO = ui->lineEdit_Ritmo->text();
    AMPLITUD = ui->lineEdit_Amplitud->text();
    PARED = ui->lineEdit_Pared->text();
    PULSO_CARDIACO = ui->lineEdit_PulsoCardiaco->text();
    FEMORAL = ui->lineEdit_Femoral->text();
    PEDIO = ui->lineEdit_Pedio->text();
    OTROS = ui->lineEdit_OtrosExamenCLinico->text();
    CORAZON_CHOQUE_PUNTA = ui->lineEdit_CorazonCoquePUnta->text();
    RUIDOS_CARDIACOS = ui->lineEdit_RuidosCardiacos->text();
    SOPLOS = ui->lineEdit_Soplos->text();
    RUIDOS_ADVENTICIOS = ui->lineEdit_RuidosAdventicios->text();
    TIPO_RESPIRACION = ui->lineEdit_TipoRespiracion->text();
    FRECUENCIA_RESPIRATORIA = ui->lineEdit_Frecuencia_2->text();
    RETRACCIONES = ui->lineEdit_Retracciones->text();
    ABOVEDAMIENTOS = ui->lineEdit_Abovedameintos->text();
    MOVILIDAD = ui->lineEdit_Movilidad->text();
    VIBRACIONES_VOCALES = ui->lineEdit_VibracionesVocales->text();
    PERCUSION = ui->lineEdit_Percusion->text();
    AUSCULTACION = ui->lineEdit_Auscultacion_palpacio->text();
    PIEL_ABDOMEN = ui->lineEdit_PielAbdomen->text();
    DEFORMACIONES = ui->lineEdit_Deformaciones->text();
    MOVILIDAD_ABDOMEN = ui->lineEdit_Movilidad_2->text();
    CIRCULACION_COLATERAL = ui->lineEdit_CirculacionColateral->text();
    PARED_PALPACION = ui->lineEdit_Pared_2->text();
    SENSIBILIDAD = ui->lineEdit_Sensibilidad->text();
    TENSION_ABDOMINAL = ui->lineEdit_TensionAbdominal->text();
    PUNTOS_DOLOROSOS = ui->lineEdit_PuntosDolorosos->text();
    PALPACION_PROFUNDA = ui->lineEdit_PalpacionProfunda->text();
    PERCUSION_ABDOMEN = ui->lineEdit_Percusion_2->text();
    AUSCULTACION_ABDOMEN = ui->lineEdit_Auscultacion_palpacion->text();
    HIGADO = ui->lineEdit_Higado->text();
    BASO = ui->lineEdit_Bazo->text();
    TACTO_RECTAL = ui->lineEdit_TactoRectal->text();
    TACTO_VAGINAL = ui->lineEdit_TactoVaginal->text();
    GENITALES = ui->lineEdit_Genitales->text();
    NEUROLOGICO = ui->textEdit_Neurologico->toPlainText();
    IMPRESIONES_DIAGNOSTICAS = ui->textEdit_ImpresionesDiagnosticas->toPlainText();
    CAMA = ui->lineEdit_bedNumber_ExamenClinico->text();
    SERVICIO = ui->lineEdit_servicio_examenClinico->text();
    MEDICO_TRATANTE = ui->lineEdit_medico_examenClinico->text();
    BIOTIPO = ui->lineEdit_Biotipo->text();

    str_insert = "INSERT INTO e_examen_clinico(";
    str_insert += "historial_documento_pk, historia_clinica_pk";
    str_insert += ", fecha_creacion, talla, peso, peso_habitual, temperatura, pulso";
    str_insert += ", respiracion, estado_general, mental, facies, piel_anexos";
    str_insert += ", color, celular_subcutaneo, osteo_mio_articular, sistema_linfatico";
    str_insert += ", cabeza, ojos, pupila, fondo_ojo, nariz, oidos, labios";
    str_insert += ", mucosas, lengua, dientes, paladar, admigdalas_faringe, cuello";
    str_insert += ", tiroides, torax, mamas, presion_arterial, frecuencia, ritmo";
    str_insert += ", amplitud, pared, pulso_cardiaco, femoral, pedio, otros";
    str_insert += ", corazon_choque_punta, ruidos_cardiacos, soplos";
    str_insert += ", ruidos_adventicios, tipo_respiracion, frecuencia_respiratoria";
    str_insert += ", retracciones, abovedamientos, movilidad, vibraciones_vocales";
    str_insert += ", percusion, auscultacion, piel_abdomen, deformaciones";
    str_insert += ", movilidad_abdomen, circulacion_colateral, pared_palpacion";
    str_insert += ", sensibilidad, tension_abdominal, puntos_dolorosos";
    str_insert += ", palpacion_profunda, percusion_abdomen, auscultacion_abdomen, higado";
    str_insert += ", baso, tacto_rectal, tacto_vaginal, genitales, neurologico";
    str_insert += ", impresiones_diagnosticas, cama, servicio, medico_tratante, biotipo";
    str_insert += ") ";
    str_insert += "VALUES(?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?);";

    insert.prepare(str_insert);
    insert.bindValue(0, HISTORIAL_DOCUMENTO_PK);
    insert.bindValue(1, HISTORIA_CLINICA_PK);
    insert.bindValue(2, FECHA_CREACION);
    insert.bindValue(3, TALLA);
    insert.bindValue(4, PESO);
    insert.bindValue(5, PESO_HABITUAL);
    insert.bindValue(6, TEMPERATURA);
    insert.bindValue(7, PULSO);
    insert.bindValue(8, RESPIRACION);
    insert.bindValue(9, ESTADO_GENERAL);
    insert.bindValue(10, MENTAL);
    insert.bindValue(11, FACIES);
    insert.bindValue(12, PIEL_ANEXOS);
    insert.bindValue(13, COLOR);
    insert.bindValue(14, CELULAR_SUBCUTANEO);
    insert.bindValue(15, OSTEO_MIO_ARTICULAR);
    insert.bindValue(16, SISTEMA_LINFATICO);
    insert.bindValue(17, CABEZA);
    insert.bindValue(18, OJOS);
    insert.bindValue(19, PUPILA);
    insert.bindValue(20, FONDO_OJO);
    insert.bindValue(21, NARIZ);
    insert.bindValue(22, OIDOS);
    insert.bindValue(23, LABIOS);
    insert.bindValue(24, MUCOSAS);
    insert.bindValue(25, LENGUA);
    insert.bindValue(26, DIENTES);
    insert.bindValue(27, PALADAR);
    insert.bindValue(28, ADMIGDALAS_FARINGE);
    insert.bindValue(29, CUELLO);
    insert.bindValue(30, TIROIDES);
    insert.bindValue(31, TORAX);
    insert.bindValue(32, MAMAS);
    insert.bindValue(33, PRESION_ARTERIAL);
    insert.bindValue(34, FRECUENCIA);
    insert.bindValue(35, RITMO);
    insert.bindValue(36, AMPLITUD);
    insert.bindValue(37, PARED);
    insert.bindValue(38, PULSO_CARDIACO);
    insert.bindValue(39, FEMORAL);
    insert.bindValue(40, PEDIO);
    insert.bindValue(41, OTROS);
    insert.bindValue(42, CORAZON_CHOQUE_PUNTA);
    insert.bindValue(43, RUIDOS_CARDIACOS);
    insert.bindValue(44, SOPLOS);
    insert.bindValue(45, RUIDOS_ADVENTICIOS);
    insert.bindValue(46, TIPO_RESPIRACION);
    insert.bindValue(47, FRECUENCIA_RESPIRATORIA);
    insert.bindValue(48, RETRACCIONES);
    insert.bindValue(49, ABOVEDAMIENTOS);
    insert.bindValue(50, MOVILIDAD);
    insert.bindValue(51, VIBRACIONES_VOCALES);
    insert.bindValue(52, PERCUSION);
    insert.bindValue(53, AUSCULTACION);
    insert.bindValue(54, PIEL_ABDOMEN);
    insert.bindValue(55, DEFORMACIONES);
    insert.bindValue(56, MOVILIDAD_ABDOMEN);
    insert.bindValue(57, CIRCULACION_COLATERAL);
    insert.bindValue(58, PARED_PALPACION);
    insert.bindValue(59, SENSIBILIDAD);
    insert.bindValue(60, TENSION_ABDOMINAL);
    insert.bindValue(61, PUNTOS_DOLOROSOS);
    insert.bindValue(62, PALPACION_PROFUNDA);
    insert.bindValue(63, PERCUSION_ABDOMEN);
    insert.bindValue(64, AUSCULTACION_ABDOMEN);
    insert.bindValue(65, HIGADO);
    insert.bindValue(66, BASO);
    insert.bindValue(67, TACTO_RECTAL);
    insert.bindValue(68, TACTO_VAGINAL);
    insert.bindValue(69, GENITALES);
    insert.bindValue(70, NEUROLOGICO);
    insert.bindValue(71, IMPRESIONES_DIAGNOSTICAS);
    insert.bindValue(72, CAMA);
    insert.bindValue(73, SERVICIO);
    insert.bindValue(74, MEDICO_TRATANTE);
    insert.bindValue(75, BIOTIPO);
    insert.exec();
    if(!changeParentWindow(codeWindow))
        currentParent->updateTableDocuments(HISTORIA_CLINICA_PK);
    this->close();
}

void documentos_historial_ui::on_pushButton_AceptTerapeuticaMedica_clicked()
{
    if(ui->lineEdit_bedNumber_Terapeutica->text()=="")
        ui->lineEdit_bedNumber_Terapeutica->setText("0");
       QString FECHA_INICIO, HORA_INICIO,TERAPEUTICA,FECHA_FIN,HORA_FIN, HISTORIA_CLINICA,R_HISTORIAL_DOCUMENTO,DNI;
       QSqlQuery query;
       const QDate FECHA = QDate::currentDate();

       query.prepare("SELECT historia_clinica_pk FROM e_historia_clinica WHERE Paciente_idPaciente="+id_var);
       query.exec();
       query.next();
       qDebug()<<"id Pacienteeeeeeeeeeeee "<<id_var<<endl;
       HISTORIA_CLINICA = query.value(0).toString();
       query.prepare("INSERT INTO r_historial_documento(historia_clinica_pk,tipo,fecha_creacion,comentario) VALUES(?,?,?,?)");
       query.bindValue(0,HISTORIA_CLINICA);
       query.bindValue(1,"Terapeutica");
       query.bindValue(2,FECHA);
       query.bindValue(3,"Ninguno");
       query.exec();
       query.prepare("SELECT max(historial_documento_pk) as historial_documento_pk from r_historial_documento");
       query.exec();
       query.next();
       R_HISTORIAL_DOCUMENTO = query.value(0).toString();
       query.prepare("INSERT INTO e_terapeutica_medica(historia_clinica_pk,historial_documento_pk,fecha_creacion,cama,servicio,medico_tratante) VALUES(?,?,?,?,?,?)");
       query.bindValue(0,HISTORIA_CLINICA);
       query.bindValue(1,R_HISTORIAL_DOCUMENTO);
       query.bindValue(2,FECHA);
       query.bindValue(3,ui->lineEdit_bedNumber_Terapeutica->text());
       query.bindValue(4,ui->lineEdit_servicio_Terapeutica->text());
       query.bindValue(5,ui->lineEdit_medico_Terapeutica->text());
       query.exec();
       for (int i = 0; i<ui->tableWidget_Terapeutica->rowCount(); i++)
       {
           qDebug()<<"Insertando datos del tableWidged"<<endl;
           FECHA_INICIO = ui->tableWidget_Terapeutica->item(i,0)->text();
           HORA_INICIO = ui->tableWidget_Terapeutica->item(i,1)->text();
           TERAPEUTICA = ui->tableWidget_Terapeutica->item(i,2)->text();
           FECHA_FIN = ui->tableWidget_Terapeutica->item(i,3)->text();
           HORA_FIN = ui->tableWidget_Terapeutica->item(i,4)->text();
           qDebug()<<R_HISTORIAL_DOCUMENTO<<" "<<HISTORIA_CLINICA<<" "<<FECHA_INICIO<<" "<<HORA_INICIO<<" "<<TERAPEUTICA<<" "<<FECHA_FIN<<" "<<HORA_FIN<<endl;
           query.prepare("INSERT INTO datos_terapeutica(historial_documento_pk,historia_clinica_pk,fecha_inicio,hora_inicio,terapeutica,fecha_fin,hora_final) VALUES(?,?,?,?,?,?,?)");
           query.bindValue(0,R_HISTORIAL_DOCUMENTO);
           query.bindValue(1,HISTORIA_CLINICA);
           query.bindValue(2,FECHA_INICIO);
           query.bindValue(3,HORA_INICIO);
           query.bindValue(4,TERAPEUTICA);
           query.bindValue(5,FECHA_FIN);
           query.bindValue(6,HORA_FIN);
           if(query.exec() == TRUE)
            qDebug()<<"Insertando Correctamente Fila: "<<i<<endl;
           else{
            qDebug()<<"Error en la no se inserto datos: "<<i<<endl;
            qDebug()<<query.lastError()<<endl;
           }
       }
       if(!changeParentWindow(codeWindow))
        currentParent->updateTableDocuments(HISTORIA_CLINICA);
       this->close();
}

void documentos_historial_ui::on_pushButton_SaveTerapeuticaMedica_clicked()
{

}

void documentos_historial_ui::on_pushButton_SaveRQCV_clicked()
{

}

void documentos_historial_ui::on_pushButton_AceptRQCV_clicked()
{
    QString HISTORIA_CLINICA,R_HISTORIAL_DOCUMENTO,DNI;
              QSqlQuery query;
              const QDate FECHA = QDate::currentDate();

              query.prepare("SELECT historia_clinica_pk FROM e_historia_clinica WHERE Paciente_idPaciente="+id_var);
              query.exec();
              query.next();
              HISTORIA_CLINICA = query.value(0).toString();
              query.prepare("INSERT INTO r_historial_documento(historia_clinica_pk,tipo,fecha_creacion,comentario) VALUES(?,?,?,?)");
              query.bindValue(0,HISTORIA_CLINICA);
              query.bindValue(1,"Riesgo.Q.C");
              query.bindValue(2,FECHA);
              query.bindValue(3,"Ninguno");
              query.exec();
              query.prepare("SELECT max(historial_documento_pk) as historial_documento_pk from r_historial_documento");
              query.exec();
              query.next();
              R_HISTORIAL_DOCUMENTO = query.value(0).toString();
              QString str_query;
              str_query = "INSERT INTO e_riesgo_quirurgico(historia_clinica_pk,historial_documento_pk,medico_tratante,procedencia,";
              str_query += "hta,asma,tbc,dm,motivo_rqcv,pa,fc,corazon,pulmones,pulsos_prerifericos,sistema_venoso,ekg,fc1,p,pr,qrc,qt,st,";
              str_query += "onda_t,aqrs,id,rqcv,sugerencias,fecha) VALUES(?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?)";
              query.prepare(str_query);
              qDebug()<<str_query<<endl;
              query.bindValue(0,HISTORIA_CLINICA);
              query.bindValue(1,R_HISTORIAL_DOCUMENTO);
              query.bindValue(2,ui->lineEdit_medicoGlobal->text());
              query.bindValue(3,ui->lineEdit_precedenciaRQCV->text());
              query.bindValue(4,ui->lineEdit_htaRQCV->text());
              query.bindValue(5,ui->lineEdit_asmaRQCV->text());
              query.bindValue(6,ui->lineEdit_tbcRQCV->text());
              query.bindValue(7,ui->lineEdit_dmRQCV->text());
              query.bindValue(8,ui->lineEdit_motivoRQCV->text());
              query.bindValue(9,ui->lineEdit_paRQCV->text());
              query.bindValue(10,ui->lineEdit_fcRQCV->text());
              query.bindValue(11,ui->lineEdit_corazonRQCV->text());
              query.bindValue(12,ui->lineEdit_pulmonesRQCV->text());
              query.bindValue(13,ui->lineEdit_pulsosPerifericosRQCV->text());
              query.bindValue(14,ui->lineEdit_sistemaVenosoRQCV->text());
              query.bindValue(15,ui->lineEdit_ekgRQCV->text());
              query.bindValue(16,ui->lineEdit_fc1RQCV->text());
              query.bindValue(17,ui->lineEdit_pRQCV->text());
              query.bindValue(18,ui->lineEdit_prRQCV->text());
              query.bindValue(19,ui->lineEdit_qrs->text());
              query.bindValue(20,ui->lineEdit_qtRQCV->text());
              query.bindValue(21,ui->lineEdit_stRQCV->text());
              query.bindValue(22,ui->lineEdit_ondaTRQCV->text());
              query.bindValue(23,ui->lineEdit_aqrsRQCV->text());
              query.bindValue(24,ui->lineEdit_idRQCV->text());
              query.bindValue(25,ui->lineEdit_rqcvRQCV->text());
              query.bindValue(26,ui->lineEdit_sugerenciasRQCV->text());
              query.bindValue(27,FECHA);
              query.exec();
              if(!changeParentWindow(codeWindow))
                currentParent->updateTableDocuments(HISTORIA_CLINICA);
              this->close();


}
void documentos_historial_ui::createConnexion()
{

}

void documentos_historial_ui::sentFile(QString name)
{
    if(!changeParentWindow(codeWindow))
    {
        QSqlQuery query;
        currentParent->generateDocLatex();
        currentParent->createConnexion();
        currentParent->uploadPdf(name);
        query.prepare("SELECT MAX(historial_documento_pk) FROM r_historial_documento");
        query.exec();
        query.next();
        qDebug()<<"Este es el ultimo agregado "<<query.value(0).toString()<<endl;
        //SETEANDO EL ULTIMO AGREGADO
        currentParent->setLastAdd(query.value(0).toString());
    }
}

void documentos_historial_ui::on_pushButton_clicked()
{
    item_terapeutica * ITEM_TERAPEUTICA = new item_terapeutica;
    ITEM_TERAPEUTICA->setCurrentParent(this);
    ITEM_TERAPEUTICA->setDni(dni_var);
    ITEM_TERAPEUTICA->show();
}
void documentos_historial_ui::update_list_Terapuetica()
{

}
void documentos_historial_ui::agregar_terapeutica(QString FECHA_INICIO, QString HORA_INICIO, QString TERAPEUTICA, QString FECHA_FIN, QString HORA_FIN)
{
    //Agregando Items de Teraputica Medica.
    ui->tableWidget_Terapeutica->setSortingEnabled(0);
    COUNT++;
    ui->tableWidget_Terapeutica->insertRow(COUNT);
    ui->tableWidget_Terapeutica->setItem(COUNT,0,new QTableWidgetItem(FECHA_INICIO));
    ui->tableWidget_Terapeutica->setItem(COUNT,1,new QTableWidgetItem(HORA_INICIO));
    ui->tableWidget_Terapeutica->setItem(COUNT,2,new QTableWidgetItem(TERAPEUTICA));
    ui->tableWidget_Terapeutica->setItem(COUNT,3,new QTableWidgetItem(FECHA_FIN));
    ui->tableWidget_Terapeutica->setItem(COUNT,4,new QTableWidgetItem(HORA_FIN));
    ui->tableWidget_Terapeutica->setSortingEnabled(1);

}

void documentos_historial_ui::on_pushButton_AceptEpicrisis_clicked()
{
    if(ui->lineEdit_bedNumber_Epicrisis->text()=="")
        ui->lineEdit_bedNumber_Epicrisis->setText("0");
    QString HISTORIA_CLINICA_PK, HISTORIAL_DOCUMENTO_PK
            , MEDICO_TRATANTE,SERVICIO,RESUMEN_HISTORIA,RESUMEN_EXAMEN,EXAMENES_AUXIALIARES,DIGNOSTICO,TRATAMIENTO,
            EVOLUCION,DIAGNOSTICO_FINAL,INDICACIONES;
    QDateTime FECHA_INGRESO,FECHA_ALTA;
    int DIAS_HOSPITALIZACION,CAMA;

    const QDate FECHA = QDate::currentDate();

    QSqlQuery query, insert_e_rp;
    QString str_insert;
    query.prepare("SELECT historia_clinica_pk FROM e_historia_clinica WHERE Paciente_idPaciente="+id_var);
    query.exec();
    query.next();
    HISTORIA_CLINICA_PK = query.value(0).toString();
    query.prepare("INSERT INTO r_historial_documento(historia_clinica_pk,tipo,fecha_creacion,comentario) VALUES(?,?,?,?)");
    query.bindValue(0,HISTORIA_CLINICA_PK);
    query.bindValue(1,"Epicrisis");
    query.bindValue(2,FECHA);
    query.bindValue(3,"Ninguno");
    query.exec();
    query.prepare("SELECT max(historial_documento_pk) as historial_documento_pk from r_historial_documento");
    query.exec();
    query.next();
    HISTORIAL_DOCUMENTO_PK = query.value(0).toString();
    //actualizando variables para luego hacer la consulta
    MEDICO_TRATANTE = ui->lineEdit_medico_Epicrisis->text();
    SERVICIO = ui->lineEdit_servicio_Epicrisis->text();
    CAMA = ui->lineEdit_bedNumber_Epicrisis->text().toInt();
    FECHA_INGRESO = ui->dateEdit_fechaIngreso_Epicrisis->dateTime();
    FECHA_ALTA = ui->dateEdit_fechaAlta_Epicrisis->dateTime();
    DIAS_HOSPITALIZACION = ui->lineEdit_diasHospitalizacion_Epicrisis->text().toInt();
    RESUMEN_HISTORIA = ui->textEdit_resumHistoriaClinica_Epicrisis->toPlainText();
    RESUMEN_EXAMEN = ui->textEdit_resuExamClinico_Epicrisis->toPlainText();
    EXAMENES_AUXIALIARES = ui->textEdit_examenesAux_Epicrisis->toPlainText();
    DIGNOSTICO = ui->textEdit_DiagINgreso_Epicrisis->toPlainText();
    TRATAMIENTO = ui->textEdit_tratamineto_Epicrisis->toPlainText();
    EVOLUCION = ui->textEdit_evolucion_Epicrisis->toPlainText();
    DIAGNOSTICO_FINAL = ui->textEdit_diagFinal_Epicrisis->toPlainText();
    INDICACIONES = ui->textEdit_indicaciones_Epicrisis->toPlainText();
    str_insert = "INSERT INTO e_epicrisis(";
    str_insert += "historial_documento_pk,historia_clinica_pk";
    str_insert += ", medico_tratante, servicio, cama,fecha_ingreso,fecha_alta";
    str_insert += ", dias_hospitalizados, condicion_alta, resumen_h_clinica, resumen_ex_clinico";
    str_insert += ", examenes_auxiliares, diagnostico_ingreso, tratamiento, evolucion, diagnostico_final, indicaciones) ";
    str_insert += "VALUES(?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?);";
    insert_e_rp.prepare(str_insert);
    insert_e_rp.bindValue(0, HISTORIAL_DOCUMENTO_PK);
    insert_e_rp.bindValue(1, HISTORIA_CLINICA_PK);
    insert_e_rp.bindValue(2, MEDICO_TRATANTE);
    insert_e_rp.bindValue(3, SERVICIO);
    insert_e_rp.bindValue(4, CAMA);
    insert_e_rp.bindValue(5, FECHA_INGRESO);
    insert_e_rp.bindValue(6, FECHA_ALTA);
    insert_e_rp.bindValue(7, DIAS_HOSPITALIZACION);
    insert_e_rp.bindValue(8, "");
    insert_e_rp.bindValue(9, RESUMEN_HISTORIA);
    insert_e_rp.bindValue(10, RESUMEN_EXAMEN);
    insert_e_rp.bindValue(11, EXAMENES_AUXIALIARES);
    insert_e_rp.bindValue(12, DIGNOSTICO);
    insert_e_rp.bindValue(13, TRATAMIENTO);
    insert_e_rp.bindValue(14, EVOLUCION);
    insert_e_rp.bindValue(15, DIAGNOSTICO_FINAL);
    insert_e_rp.bindValue(16, INDICACIONES);
    insert_e_rp.exec();
    if(!changeParentWindow(codeWindow))
        currentParent->updateTableDocuments(HISTORIA_CLINICA_PK);
    this->close();
}

void documentos_historial_ui::on_pushButton_SaveEpicrisis_clicked()
{
}

void documentos_historial_ui::on_pushButton_CancelRQCV_clicked()
{
    this->close();
}

void documentos_historial_ui::on_pushButton_addItem_terapeutica_clicked()
{
    item_terapeutica * ITEM_TERAPEUTICA = new item_terapeutica;
    ITEM_TERAPEUTICA->setCurrentParent(this);
    ITEM_TERAPEUTICA->setDni(dni_var);
    ITEM_TERAPEUTICA->show();
}

void documentos_historial_ui::on_lineEdit_dni_medico_consulta_returnPressed()
{
    this->on_pushButton_consultarMedico_clicked();
}

void documentos_historial_ui::on_pushButton_quitar_Item_clicked()
{
    if(COUNT >= 0)
    {
        ui->tableWidget_Terapeutica->removeRow(row);
        COUNT--;
    }


}
void documentos_historial_ui::on_tableWidget_Terapeutica_itemClicked(QTableWidgetItem *item)
{
    row = item->row();
}

void documentos_historial_ui::setSorting(bool val)
{
    ui->tableWidget_Terapeutica->setSortingEnabled(val);
}

void documentos_historial_ui::setParentWindow(MainWindow *parent)
{
    parentWindow=parent;
}

void documentos_historial_ui::setcodeWindow(int code)
{
    codeWindow=code;
}

bool documentos_historial_ui::changeParentWindow(int code)
{
    if(code == parentWindow->getlastcodeWindow())
        return false;
    else return true;
}
