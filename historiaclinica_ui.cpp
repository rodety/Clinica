#include "historiaclinica_ui.h"
#include "ui_historiaclinica_ui.h"
#include <QDebug>
#include<QDir>

#include <QSqlQuery>
#include "antecedentes_documento.h"
#include "reporte_operatorio_documento.h"
#include "examen_clinico_documento.h"
#include "epicrisis_documento.h"
#include "terapeutica_medica_documento.h"
#include "riesgo_quirurgico_documento.h"
#include "funciones.h"

historiaClinica_ui::historiaClinica_ui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::historiaClinica_ui)
{
    ui->setupUi(this);


    ui->tableView_DocumentList->setColumnWidth(0,120);
    ui->tableView_DocumentList->setColumnWidth(1,300);
    ui->tableView_DocumentList->setColumnWidth(2,200);


    ui->pushButton_editarDocuento->setHidden(true);
    ptr_pos[0]=&historiaClinica_ui::posAntecedentes;
    ptr_pos[1]=&historiaClinica_ui::posReporteOp;
    ptr_pos[2]=&historiaClinica_ui::posExamenClinico;
    ptr_pos[3]=&historiaClinica_ui::posTerapeuticaMedica;
    ptr_pos[4]=&historiaClinica_ui::posEpicrisis;
    ptr_pos[5]=&historiaClinica_ui::posRiesgo_Quirurgico;

    ptr_generates[0]=&historiaClinica_ui::generateAntecedentes;
    ptr_generates[1]=&historiaClinica_ui::generateReporteOp;
    ptr_generates[2]=&historiaClinica_ui::generateExamenClinico;
    ptr_generates[3]=&historiaClinica_ui::generateTerapeuticaMEdica;
    ptr_generates[4]=&historiaClinica_ui::generateEpicrisis;
    ptr_generates[5]=&historiaClinica_ui::generateRiesgo_Quirurgico;

    DOCUMENT_FORM = NULL;

    ui->lineEdit_currentDni->setReadOnly(true);
    ui->lineEdit_documentoCodeCurrent->setReadOnly(true);
    ui->lineEdit_historiaClinicaCurrent->setReadOnly(true);
    ui->lineEdit_PatientActual->setReadOnly(true);

}
fotos_ui* historiaClinica_ui::FOTOS_FORM = 0;
historiaClinica_ui::~historiaClinica_ui()
{
    delete ui;
}

void historiaClinica_ui::on_verDatos_paciente_clicked()
{
    if(ui->lineEdit_PatientActual->text().size() >0)
    {
        newPaciente_paciente_ui *PACIENTE_DATOS_FORM = new newPaciente_paciente_ui;
        PACIENTE_DATOS_FORM->show_data_paciente_form(currentID);
        PACIENTE_DATOS_FORM->hideButtonShow();
        PACIENTE_DATOS_FORM->show();
    }
    else{
        QMessageBox msgBox;
        msgBox.setText("Selecione un paciente");
        msgBox.exec();

    }
}

void historiaClinica_ui::on_verDocumento_historial_clicked()
{

    if(ui->lineEdit_documentoCodeCurrent->text()!="")
    {
        documentos_historial_ui *VER_FILE_FORM = new documentos_historial_ui;
        VER_FILE_FORM->id_var = currentID;
        QString TIPO_DOC, CODIGO_DOC;
        int FILA = ui->tableView_DocumentList->currentIndex().row();
        TIPO_DOC = ui->tableView_DocumentList->currentIndex().sibling(FILA, 1).data().toString();
        CODIGO_DOC = ui->lineEdit_documentoCodeCurrent->text();
        VER_FILE_FORM->id_var = ui->lineEdit_currentDni->text();
        VER_FILE_FORM->code_document_var = ui->lineEdit_documentoCodeCurrent->text();
        VER_FILE_FORM->show_name(ui->lineEdit_PatientActual->text());
        VER_FILE_FORM->currentParent = this;
        VER_FILE_FORM->show_document(TIPO_DOC, CODIGO_DOC);
        VER_FILE_FORM->setParentWindow(parentWindow);
        VER_FILE_FORM->setcodeWindow(parentWindow->getcodeWindow());
        VER_FILE_FORM->show();
    }
    else{
        QMessageBox msgBox;
        msgBox.setText("Seleccione un Documento");
        msgBox.exec();

    }
}

void historiaClinica_ui::on_eliminarDocumento_historial_clicked()
{

}

void historiaClinica_ui::on_nuevoDocumento_historial_clicked()
{
    if(ui->lineEdit_historiaClinicaCurrent->text().size() >0)
    {
        if(DOCUMENT_FORM == NULL)
        {
            DOCUMENT_FORM = new documentos_historial_ui;
        }
        else
        {
            delete DOCUMENT_FORM;
            DOCUMENT_FORM = 0;
            DOCUMENT_FORM = new documentos_historial_ui;
        }

        DOCUMENT_FORM->id_var = currentID;
        DOCUMENT_FORM->dni_var = currentDNI;
        DOCUMENT_FORM->show_name(ui->lineEdit_PatientActual->text());
        DOCUMENT_FORM->currentParent = this;
        DOCUMENT_FORM->setSorting(true);
        DOCUMENT_FORM->setParentWindow(parentWindow);
        DOCUMENT_FORM->setcodeWindow(parentWindow->getcodeWindow());
        DOCUMENT_FORM->show();
    }
    else{
        QMessageBox msgBox;
        msgBox.setText("Selecione un paciente con historia clinica");
        msgBox.exec();

    }
}

void historiaClinica_ui::updateTableDocuments(QString clinic_code_var)
{
    QSqlQueryModel *model = new QSqlQueryModel;    
    QString query = "SELECT fecha_creacion as 'Fecha de Creacion',tipo as 'Tipo de Documento',historial_documento_pk as 'Id Documento' FROM r_historial_documento WHERE historia_clinica_pk="+clinic_code_var+" AND tipo<> 'consulta' ";
    model->setQuery(query);
    ui->tableView_DocumentList->setModel(model);
    ui->tableView_DocumentList->show();
}



void historiaClinica_ui::on_pushButton_generatePDF_clicked()
{  
    if(ui->lineEdit_documentoCodeCurrent->text()!="")
       {
        QDir::setCurrent(absPath);


        int i=0, pos=0;

        for(; i<num_generate_funcs; i++)
        {
            pos = (this->*ptr_pos[i])(str_pB_generatePDF);
            if(pos!=-1)
                break;
        }
        str_pB_generatePDF.clear();

        if(pos==-1)
            return;

        (this->*ptr_generates[pos])();


    }
    else{
        QMessageBox msgBox;
        msgBox.setText("Selecione un documento");
        msgBox.exec();

    }




}

void historiaClinica_ui::generateAntecedentes()
{
    antecedentes_documento *TERAPEUTICA_MEDICA_PDF = new antecedentes_documento;
    QString HISTORIA_CLINICA,CODIGO_DOCUMENTO,REGIMEN_CATAMENTAL;
    QString MEDICACION_ACTUAL,ANTECEDENTES_PERSONALES,ANTECEDENTES_FAMILIARES,OBSERVACIONES,CAMA,MEDICO_TRATANTE, OPERACIONES;
    QString SERVICIO;
    QString LASTNAME,NAME, SEX, MARITALSTATUS, EDAD;
    QString OCUPACION, ALERGIA;
    QDate FECHA_CREACION, FECHA_NACIMIENTO, FECHA_INGRESO, FECHA_MENSTRUACION;
    bool TABACO, ALCOHOL;
    //Extrayendo datos del paciente para generar PDF-ANTECEDENTE
    QString COD_DOCUMENTO, DNI_PACIENTE;
    QSqlQuery query, query_1;
    int EDAD_INT;
    COD_DOCUMENTO = ui->lineEdit_documentoCodeCurrent->text();
    query.prepare("SELECT * FROM e_antecedentes WHERE historial_documento_pk ="+COD_DOCUMENTO);
    query.exec();
    query.next();

    CODIGO_DOCUMENTO = query.value(1).toString();
    FECHA_CREACION = query.value(2).toDate();
    FECHA_INGRESO = query.value(3).toDate();
    FECHA_MENSTRUACION = query.value(4).toDate();
    REGIMEN_CATAMENTAL = query.value(5).toString();
    TABACO = query.value(6).toBool();
    ALCOHOL = query.value(7).toBool();
    MEDICACION_ACTUAL = query.value(8).toString();
    ANTECEDENTES_PERSONALES = query.value(9).toString();
    ANTECEDENTES_FAMILIARES = query.value(10).toString();
    OBSERVACIONES = query.value(11).toString();
    CAMA = query.value(12).toString();
    SERVICIO = query.value(13).toString();
    MEDICO_TRATANTE = query.value(14).toString();
    OPERACIONES = query.value(15).toString();
    DNI_PACIENTE = currentDNI;
    query_1.prepare("SELECT codigo,apellido_paterno,apellido_materno,primer_nombre,segundo_nombre,sexo,fecha_nacimiento,estado_civil,alergias,ocupacion FROM Paciente WHERE idPaciente = "+currentID);
    query_1.exec();
    query_1.next();
    HISTORIA_CLINICA = query_1.value(0).toString();
    LASTNAME = query_1.value(1).toString()+" "+query_1.value(2).toString();
    NAME = query_1.value(3).toString()+" "+query_1.value(4).toString();
    SEX = query_1.value(5).toString();
    MARITALSTATUS = query_1.value(7).toString();
    FECHA_NACIMIENTO = query_1.value(6).toDate();
    EDAD_INT = getEdad(FECHA_NACIMIENTO, FECHA_CREACION);
    EDAD.setNum(EDAD_INT);
    ALERGIA = query_1.value(8).toString();
    OCUPACION = query_1.value(9).toString();

    //Seteando string para enviar al pdf
    TERAPEUTICA_MEDICA_PDF->setlastname(LASTNAME.toStdString());
    TERAPEUTICA_MEDICA_PDF->setname(NAME.toStdString());
    TERAPEUTICA_MEDICA_PDF->setclinicHistory(HISTORIA_CLINICA.toStdString());
    TERAPEUTICA_MEDICA_PDF->setmedic(MEDICO_TRATANTE.toStdString());
    TERAPEUTICA_MEDICA_PDF->setservice(SERVICIO.toStdString());
    TERAPEUTICA_MEDICA_PDF->setbed(CAMA.toStdString());
    TERAPEUTICA_MEDICA_PDF->setage(EDAD.toStdString());
    TERAPEUTICA_MEDICA_PDF->setdatebirth(FECHA_NACIMIENTO.toString("dd/MM/yyyy").toStdString());
    TERAPEUTICA_MEDICA_PDF->setadmission(FECHA_INGRESO.toString("dd/MM/yyyy").toStdString());
    TERAPEUTICA_MEDICA_PDF->setsex(SEX.toStdString());
    TERAPEUTICA_MEDICA_PDF->setmaritalStatus(MARITALSTATUS.toStdString());
    TERAPEUTICA_MEDICA_PDF->setocupation(OCUPACION.toStdString());
    TERAPEUTICA_MEDICA_PDF->setpersonalprecedent(ANTECEDENTES_PERSONALES.toStdString());
    TERAPEUTICA_MEDICA_PDF->setallergy(ALERGIA.toStdString());
    TERAPEUTICA_MEDICA_PDF->setlastMenstruation(FECHA_MENSTRUACION.toString("dd/MM/yyyy").toStdString());
    TERAPEUTICA_MEDICA_PDF->setcatamRegime(REGIMEN_CATAMENTAL.toStdString());
    TERAPEUTICA_MEDICA_PDF->setTabaco(TABACO);
    TERAPEUTICA_MEDICA_PDF->setAlcohol(ALCOHOL);
    TERAPEUTICA_MEDICA_PDF->setcurrentMedication(MEDICACION_ACTUAL.toStdString());
    TERAPEUTICA_MEDICA_PDF->setoperationDateSite(OPERACIONES.toStdString());
    TERAPEUTICA_MEDICA_PDF->setrelativeprecedent(ANTECEDENTES_FAMILIARES.toStdString());
    TERAPEUTICA_MEDICA_PDF->setobservation(OBSERVACIONES.toStdString());

    TERAPEUTICA_MEDICA_PDF->generatelatex();
}

void historiaClinica_ui::generateReporteOp()
{
    reporte_operatorio_documento *REPORTE_OPERATORIO_PDF = new reporte_operatorio_documento;

    QString HISTORIA_CLINICA_PK, HISTORIAL_DOCUMENTO_PK
            , FECHA_CREACION,  TIPO_ANESTECIA
            , CUENTA_GASA, DRENES, APOSITOS
            , OTROS, DX_PRE_OP, DX_POST_OP, PROCEDIMIENTO, HALLAZGO
            , FIRMA, HABITACION, CAMA, CONVENIO, PRIMER_AYUDANTE, SEGUNDO_AYUDANTE
            , ANESTESIOLOGO, INSTRUMENTISTA, CIRCULANTE, MEDICO_TRATANTE
            , CIRUJANO;
    QDateTime INI_OP, FIN_OP, INI_ANES, FIN_ANES;
    QString INICIO_OPERACION, FIN_OPERACION, INICIO_ANESTECIA, FIN_ANESTECIA;
    QSqlQuery query;
    QString COD_DOCUMENTO;
    QString DNI_PACIENTE;
    QString AP_PATERNO, AP_MATERNO, NOMBRES, NICK_HISTORIA_CLINICA;

    COD_DOCUMENTO = ui->lineEdit_documentoCodeCurrent->text();
    query.prepare("SELECT * FROM e_reporte_operatorio WHERE historial_documento_pk ="+COD_DOCUMENTO);
    query.exec();
    query.next();

    HISTORIA_CLINICA_PK = query.value(1).toString();



    HISTORIAL_DOCUMENTO_PK = query.value(2).toString();
    FECHA_CREACION = query.value(3).toString();

    INI_OP = query.value(4).toDateTime();
    INICIO_OPERACION = INI_OP.toString("dd.MM.yyyy - hh:mm")+" horas";
    FIN_OP = query.value(5).toDateTime();
    FIN_OPERACION = FIN_OP.toString("dd.MM.yyyy - hh:mm")+" horas";
    TIPO_ANESTECIA = query.value(6).toString();

    INI_ANES = query.value(7).toDateTime();
    INICIO_ANESTECIA = INI_ANES.toString("dd.MM.yyyy - hh:mm")+" horas";
    FIN_ANES = query.value(8).toDateTime();
    FIN_ANESTECIA = FIN_ANES.toString("dd.MM.yyyy - hh:mm")+" horas";

    CUENTA_GASA = query.value(9).toString();
    DRENES = query.value(10).toString();
    APOSITOS = query.value(11).toString();
    OTROS = query.value(12).toString();
    DX_PRE_OP = query.value(13).toString();
    DX_POST_OP = query.value(14).toString();
    PROCEDIMIENTO = query.value(15).toString();
    HALLAZGO = query.value(16).toString();
    FIRMA = query.value(17).toString();
    //HABITACION NO ESTA SIENDO USADO
    HABITACION = query.value(18).toString();
    CAMA = query.value(19).toString();
    CONVENIO = query.value(20).toString();
    PRIMER_AYUDANTE = query.value(21).toString();
    SEGUNDO_AYUDANTE = query.value(22).toString();
    ANESTESIOLOGO = query.value(23).toString();
    INSTRUMENTISTA = query.value(24).toString();
    CIRCULANTE = query.value(25).toString();
    MEDICO_TRATANTE = query.value(26).toString();
    CIRUJANO = query.value(27).toString();

    query.prepare("SELECT codigo,apellido_paterno,apellido_materno,primer_nombre,segundo_nombre FROM Paciente WHERE idPaciente = "+currentID);
    query.exec();
    query.next();
    NICK_HISTORIA_CLINICA = query.value(0).toString();
    AP_PATERNO = query.value(1).toString();
    AP_MATERNO = query.value(2).toString();
    NOMBRES = query.value(3).toString()+" "+query.value(4).toString();

    REPORTE_OPERATORIO_PDF->setcirujano(CIRUJANO.toStdString());
    REPORTE_OPERATORIO_PDF->setfirstHelper(PRIMER_AYUDANTE.toStdString());
    REPORTE_OPERATORIO_PDF->setsecondHelper(SEGUNDO_AYUDANTE.toStdString());
    REPORTE_OPERATORIO_PDF->setanesthesiologist(ANESTESIOLOGO.toStdString());
    REPORTE_OPERATORIO_PDF->setinstrumentalist(INSTRUMENTISTA.toStdString());
    REPORTE_OPERATORIO_PDF->setcirculating(CIRCULANTE.toStdString());
    REPORTE_OPERATORIO_PDF->settypeAnesthesia(TIPO_ANESTECIA.toStdString());
    REPORTE_OPERATORIO_PDF->setstartAnesthesia(INICIO_ANESTECIA.toStdString());
    REPORTE_OPERATORIO_PDF->setendAnesthesia(FIN_ANESTECIA.toStdString());
    REPORTE_OPERATORIO_PDF->setcount(CUENTA_GASA.toStdString());
    REPORTE_OPERATORIO_PDF->setdrains(DRENES.toStdString());
    REPORTE_OPERATORIO_PDF->setdressings(APOSITOS.toStdString());
    REPORTE_OPERATORIO_PDF->setother(OTROS.toStdString());
    REPORTE_OPERATORIO_PDF->setdate(FECHA_CREACION.toStdString());
    REPORTE_OPERATORIO_PDF->setstartOperation(INICIO_OPERACION.toStdString());
    REPORTE_OPERATORIO_PDF->setendOperation(FIN_OPERACION.toStdString());
    REPORTE_OPERATORIO_PDF->setdxPreOpe(DX_PRE_OP.toStdString());
    REPORTE_OPERATORIO_PDF->setdxPostOpe(DX_POST_OP.toStdString());
    REPORTE_OPERATORIO_PDF->setprocedure(PROCEDIMIENTO.toStdString());
    REPORTE_OPERATORIO_PDF->setfind(HALLAZGO.toStdString());
    REPORTE_OPERATORIO_PDF->setfirm(FIRMA.toStdString());
    REPORTE_OPERATORIO_PDF->setmothername(AP_MATERNO.toStdString());
    REPORTE_OPERATORIO_PDF->setfathername(AP_PATERNO.toStdString());
    REPORTE_OPERATORIO_PDF->setnames(NOMBRES.toStdString());
    REPORTE_OPERATORIO_PDF->setbed(CAMA.toStdString());
    REPORTE_OPERATORIO_PDF->setmedic(MEDICO_TRATANTE.toStdString());
    REPORTE_OPERATORIO_PDF->setnhcl(NICK_HISTORIA_CLINICA.toStdString());
    REPORTE_OPERATORIO_PDF->setagreement(CONVENIO.toStdString());

    REPORTE_OPERATORIO_PDF->generateLatex();
}

void historiaClinica_ui::generateExamenClinico()
{
    examen_clinico_documento *EXAMEN_CLINICO_PDF = new examen_clinico_documento;

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
            , MEDICO_TRATANTE, BIOTIPO,NICK_HISTORIA;


    QString COD_DOCUMENTO;
    QSqlQuery query;
    QString DNI_PACIENTE, LASTNAME, NAME;

    COD_DOCUMENTO = ui->lineEdit_documentoCodeCurrent->text();
    query.prepare("SELECT * FROM e_examen_clinico WHERE historial_documento_pk = "+COD_DOCUMENTO);
    query.exec();
    query.next();


    //DATO NO SEGURO(REVISAR)
    HISTORIA_CLINICA_PK = query.value(1).toString();





    FECHA_CREACION = query.value(2).toString();
    TALLA = query.value(3).toString();
    PESO = query.value(4).toString();
    PESO_HABITUAL = query.value(5).toString();
    TEMPERATURA = query.value(6).toString();
    PULSO = query.value(7).toString();
    RESPIRACION = query.value(8).toString();
    ESTADO_GENERAL = query.value(9).toString();
    MENTAL = query.value(10).toString();
    FACIES = query.value(11).toString();
    PIEL_ANEXOS = query.value(12).toString();
    COLOR = query.value(13).toString();
    CELULAR_SUBCUTANEO = query.value(14).toString();
    OSTEO_MIO_ARTICULAR = query.value(15).toString();
    SISTEMA_LINFATICO = query.value(16).toString();
    CABEZA = query.value(17).toString();
    OJOS = query.value(18).toString();
    PUPILA = query.value(19).toString();
    FONDO_OJO = query.value(20).toString();
    NARIZ = query.value(21).toString();
    OIDOS = query.value(22).toString();
    LABIOS = query.value(23).toString();
    MUCOSAS = query.value(24).toString();
    LENGUA = query.value(25).toString();
    DIENTES = query.value(26).toString();
    PALADAR = query.value(27).toString();
    ADMIGDALAS_FARINGE = query.value(28).toString();
    CUELLO = query.value(29).toString();
    TIROIDES = query.value(30).toString();
    TORAX = query.value(31).toString();
    MAMAS = query.value(32).toString();
    PRESION_ARTERIAL = query.value(33).toString();
    FRECUENCIA = query.value(34).toString();
    RITMO = query.value(35).toString();
    AMPLITUD = query.value(36).toString();
    PARED = query.value(37).toString();
    PULSO_CARDIACO = query.value(38).toString();
    FEMORAL = query.value(39).toString();
    PEDIO = query.value(40).toString();
    OTROS = query.value(41).toString();
    CORAZON_CHOQUE_PUNTA = query.value(42).toString();
    RUIDOS_CARDIACOS = query.value(43).toString();
    SOPLOS = query.value(44).toString();
    RUIDOS_ADVENTICIOS = query.value(45).toString();
    TIPO_RESPIRACION = query.value(46).toString();
    FRECUENCIA_RESPIRATORIA = query.value(47).toString();
    RETRACCIONES = query.value(48).toString();
    ABOVEDAMIENTOS = query.value(49).toString();
    MOVILIDAD = query.value(50).toString();
    VIBRACIONES_VOCALES = query.value(51).toString();
    PERCUSION = query.value(52).toString();
    AUSCULTACION = query.value(53).toString();
    PIEL_ABDOMEN = query.value(54).toString();
    DEFORMACIONES = query.value(55).toString();
    MOVILIDAD_ABDOMEN = query.value(56).toString();
    CIRCULACION_COLATERAL = query.value(57).toString();
    PARED_PALPACION = query.value(58).toString();
    SENSIBILIDAD = query.value(59).toString();
    TENSION_ABDOMINAL = query.value(60).toString();
    PUNTOS_DOLOROSOS = query.value(61).toString();
    PALPACION_PROFUNDA = query.value(62).toString();
    PERCUSION_ABDOMEN = query.value(63).toString();
    AUSCULTACION_ABDOMEN = query.value(64).toString();
    HIGADO = query.value(65).toString();
    BASO = query.value(66).toString();
    TACTO_RECTAL = query.value(67).toString();
    TACTO_VAGINAL = query.value(68).toString();
    GENITALES = query.value(69).toString();
    NEUROLOGICO = query.value(70).toString();
    IMPRESIONES_DIAGNOSTICAS = query.value(71).toString();
    CAMA = query.value(72).toString();
    SERVICIO = query.value(73).toString();
    MEDICO_TRATANTE = query.value(74).toString();
    BIOTIPO = query.value(75).toString();



    query.prepare("SELECT codigo,apellido_paterno,apellido_materno,primer_nombre,segundo_nombre FROM Paciente WHERE idPaciente = "+currentID);
    query.exec();
    query.next();
    NICK_HISTORIA = query.value(0).toString();
    LASTNAME = query.value(1).toString()+" "+query.value(2).toString();
    NAME = query.value(3).toString()+" "+query.value(4).toString();

    EXAMEN_CLINICO_PDF->setlastname(LASTNAME.toStdString());
    EXAMEN_CLINICO_PDF->setname(NAME.toStdString());
    EXAMEN_CLINICO_PDF->setmedic(MEDICO_TRATANTE.toStdString());
    EXAMEN_CLINICO_PDF->setservice(SERVICIO.toStdString());
    EXAMEN_CLINICO_PDF->setclinicHistory(NICK_HISTORIA.toStdString());
    EXAMEN_CLINICO_PDF->setbed(CAMA.toStdString());
    EXAMEN_CLINICO_PDF->setbreathingkind(TIPO_RESPIRACION.toStdString());
    EXAMEN_CLINICO_PDF->setfrecuency(FRECUENCIA.toStdString());
    EXAMEN_CLINICO_PDF->setretracciones(RETRACCIONES.toStdString());
    EXAMEN_CLINICO_PDF->setabovedamientos(ABOVEDAMIENTOS.toStdString());
    EXAMEN_CLINICO_PDF->setpalpaciomobility(MOVILIDAD.toStdString());
    EXAMEN_CLINICO_PDF->setvocalvibrations(VIBRACIONES_VOCALES.toStdString());
    EXAMEN_CLINICO_PDF->setpercussion(PERCUSION.toStdString());
    EXAMEN_CLINICO_PDF->setauscultation(AUSCULTACION.toStdString());
    EXAMEN_CLINICO_PDF->setadomenpiel(PIEL_ABDOMEN.toStdString());
    EXAMEN_CLINICO_PDF->setdeformation(DEFORMACIONES.toStdString());
    EXAMEN_CLINICO_PDF->setmobility(MOVILIDAD_ABDOMEN.toStdString());
    EXAMEN_CLINICO_PDF->setcollateralcirculation(CIRCULACION_COLATERAL.toStdString());
    EXAMEN_CLINICO_PDF->setpalpaciopared(PARED_PALPACION.toStdString());
    EXAMEN_CLINICO_PDF->setsensitivity(SENSIBILIDAD.toStdString());
    EXAMEN_CLINICO_PDF->setpowercrunch(TENSION_ABDOMINAL.toStdString());
    EXAMEN_CLINICO_PDF->setpainpoint(PUNTOS_DOLOROSOS.toStdString());
    EXAMEN_CLINICO_PDF->setdeeppalpation(PALPACION_PROFUNDA.toStdString());
    EXAMEN_CLINICO_PDF->setpercussion2(PERCUSION_ABDOMEN.toStdString());
    EXAMEN_CLINICO_PDF->setauscultation2(AUSCULTACION_ABDOMEN.toStdString());
    EXAMEN_CLINICO_PDF->setliver(HIGADO.toStdString());
    EXAMEN_CLINICO_PDF->setspleen(BASO.toStdString());
    EXAMEN_CLINICO_PDF->setanaltouch(TACTO_RECTAL.toStdString());
    EXAMEN_CLINICO_PDF->setvaginaltouch(TACTO_VAGINAL.toStdString());
    EXAMEN_CLINICO_PDF->setgenitals(GENITALES.toStdString());
    EXAMEN_CLINICO_PDF->setneurological(NEUROLOGICO.toStdString());
    EXAMEN_CLINICO_PDF->setdiagnosticimpressions(IMPRESIONES_DIAGNOSTICAS.toStdString());
    EXAMEN_CLINICO_PDF->settalla(TALLA.toStdString());
    EXAMEN_CLINICO_PDF->setpeso(PESO.toStdString());
    EXAMEN_CLINICO_PDF->setpesoHabitual(PESO_HABITUAL.toStdString());   
    EXAMEN_CLINICO_PDF->setbiotipo(BIOTIPO.toStdString());
    EXAMEN_CLINICO_PDF->settemp(TEMPERATURA.toStdString());
    EXAMEN_CLINICO_PDF->setpulso(PULSO.toStdString());
    EXAMEN_CLINICO_PDF->setresp(RESPIRACION.toStdString());
    EXAMEN_CLINICO_PDF->setestadoGeneral(ESTADO_GENERAL.toStdString());
    EXAMEN_CLINICO_PDF->setmental(MENTAL.toStdString());
    EXAMEN_CLINICO_PDF->setfacies(FACIES.toStdString());
    EXAMEN_CLINICO_PDF->setpielAnexos(PIEL_ANEXOS.toStdString());
    EXAMEN_CLINICO_PDF->setcolor(COLOR.toStdString());
    EXAMEN_CLINICO_PDF->setcelularSubcutaneo(CELULAR_SUBCUTANEO.toStdString());
    EXAMEN_CLINICO_PDF->setoteoMioArticular(OSTEO_MIO_ARTICULAR.toStdString());
    EXAMEN_CLINICO_PDF->setsistemaLinfatico(SISTEMA_LINFATICO.toStdString());
    EXAMEN_CLINICO_PDF->setcabeza(CABEZA.toStdString());
    EXAMEN_CLINICO_PDF->setojos(OJOS.toStdString());
    EXAMEN_CLINICO_PDF->setpupilas(PUPILA.toStdString());
    EXAMEN_CLINICO_PDF->setfondoOjos(FONDO_OJO.toStdString());
    EXAMEN_CLINICO_PDF->setnariz(NARIZ.toStdString());
    EXAMEN_CLINICO_PDF->setoidos(OIDOS.toStdString());
    EXAMEN_CLINICO_PDF->setlabios(LABIOS.toStdString());
    EXAMEN_CLINICO_PDF->setmucosas(MUCOSAS.toStdString());
    EXAMEN_CLINICO_PDF->setlengua(LENGUA.toStdString());
    EXAMEN_CLINICO_PDF->setdientes(DIENTES.toStdString());
    EXAMEN_CLINICO_PDF->setpaladar(PALADAR.toStdString());
    EXAMEN_CLINICO_PDF->setamigdalasFaringe(ADMIGDALAS_FARINGE.toStdString());
    EXAMEN_CLINICO_PDF->setcuello(CUELLO.toStdString());
    EXAMEN_CLINICO_PDF->settiroides(TIROIDES.toStdString());
    EXAMEN_CLINICO_PDF->settorax(TORAX.toStdString());
    EXAMEN_CLINICO_PDF->setmamas(MAMAS.toStdString());
    EXAMEN_CLINICO_PDF->setcardiovascularPresionArterial(PRESION_ARTERIAL.toStdString());
    EXAMEN_CLINICO_PDF->setpulsoFrecuencia(FRECUENCIA.toStdString());
    EXAMEN_CLINICO_PDF->setritmo(RITMO.toStdString());
    EXAMEN_CLINICO_PDF->setamplitud(AMPLITUD.toStdString());
    EXAMEN_CLINICO_PDF->setpared(PARED.toStdString());
    EXAMEN_CLINICO_PDF->setpulsoCardiaco(PULSO_CARDIACO.toStdString());
    EXAMEN_CLINICO_PDF->setfemoral(FEMORAL.toStdString());
    EXAMEN_CLINICO_PDF->setpedio(PEDIO.toStdString());
    EXAMEN_CLINICO_PDF->setotros(OTROS.toStdString());
    EXAMEN_CLINICO_PDF->setcorazonChoquePunta(CORAZON_CHOQUE_PUNTA.toStdString());
    EXAMEN_CLINICO_PDF->setruidosCardiacos(RUIDOS_CARDIACOS.toStdString());
    EXAMEN_CLINICO_PDF->setsoplos(SOPLOS.toStdString());
    EXAMEN_CLINICO_PDF->setruidosAdventicios(RUIDOS_ADVENTICIOS.toStdString());
    EXAMEN_CLINICO_PDF->generateLatex();
}
void historiaClinica_ui::generateTerapeuticaMEdica()
{
    qDebug()<<"Generando Terapeutica"<<endl;
    Terapeutica_Medica_Documento* TERAPEUTICA_MEDICA_PDF = new Terapeutica_Medica_Documento;

    QString HISTORIA_CLINICA,CODIGO_DOCUMENTO;
    QString CAMA,MEDICO_TRATANTE;
    QString SERVICIO;
    QString LASTNAME,NAME;
    QString FECHA_INICIO,HORA_INICIO,TERAPEUTICA,FECHA_FIN,HORA_FIN;
    vector<QString> dateStart,hourStart,terapeuticaVEC,dateEnd,hourEnd;
    //Extrayendo datos del paciente para generar PDF-ANTECEDENTE
    QString COD_DOCUMENTO, DNI_PACIENTE,NICK_HISTORIA;
    QSqlQuery query, query_1;
    COD_DOCUMENTO = ui->lineEdit_documentoCodeCurrent->text();
    query.prepare("SELECT * FROM e_terapeutica_medica WHERE historial_documento_pk ="+COD_DOCUMENTO);
    query.exec();
    query.next();
    HISTORIA_CLINICA = query.value(1).toString();


    CAMA = query.value(3).toString();
    SERVICIO = query.value(4).toString();
    MEDICO_TRATANTE = query.value(5).toString();

    query_1.prepare("SELECT codigo,apellido_paterno,apellido_materno,primer_nombre,segundo_nombre FROM Paciente WHERE idPaciente = "+currentID);
    query_1.exec();
    query_1.next();
    NICK_HISTORIA = query_1.value(0).toString();
    LASTNAME = query_1.value(1).toString()+" "+query_1.value(2).toString();
    NAME = query_1.value(3).toString()+" "+query_1.value(4).toString();
    //Seteando string para enviar al pdf
    TERAPEUTICA_MEDICA_PDF->setlastname(LASTNAME.toStdString());
    TERAPEUTICA_MEDICA_PDF->setname(NAME.toStdString());
    TERAPEUTICA_MEDICA_PDF->setclinicHistory(NICK_HISTORIA.toStdString());
    TERAPEUTICA_MEDICA_PDF->setmedic(MEDICO_TRATANTE.toStdString());
    TERAPEUTICA_MEDICA_PDF->setservice(SERVICIO.toStdString());
    TERAPEUTICA_MEDICA_PDF->setbed(CAMA.toStdString());

    query.prepare("SELECT * FROM datos_terapeutica WHERE historial_documento_pk ="+COD_DOCUMENTO+ " AND historia_clinica_pk ="+HISTORIA_CLINICA);
        query.exec();
        while(query.next())
        {
            FECHA_INICIO = query.value(3).toString();
            HORA_INICIO = query.value(4).toString();
            TERAPEUTICA = query.value(5).toString();
            FECHA_FIN = query.value(6).toString();
            HORA_FIN = query.value(7).toString();
            dateStart.push_back(FECHA_INICIO);
            hourStart.push_back(HORA_INICIO);
            terapeuticaVEC.push_back(TERAPEUTICA);
            dateEnd.push_back(FECHA_FIN);
            hourEnd.push_back(HORA_FIN);
        }
    TERAPEUTICA_MEDICA_PDF->setDateStart(dateStart);
    TERAPEUTICA_MEDICA_PDF->setHourStart(hourStart);
    TERAPEUTICA_MEDICA_PDF->setTerapeutica(terapeuticaVEC);
    TERAPEUTICA_MEDICA_PDF->setdateEnd(dateEnd);
    TERAPEUTICA_MEDICA_PDF->setHourEnd(hourEnd);
    TERAPEUTICA_MEDICA_PDF->generatelatex();
}
void historiaClinica_ui::generateEpicrisis()
{

    epicrisis_documento* EPICRISIS_PDF = new epicrisis_documento;
    QSqlQuery query, query_1;
    QString MEDIC,SERVICE,BED,DATE_IN,DATE_OUT,DAY_HOSPITALIZED,
            SUMMARY_CLINIC,SUMMARY_TEST_CLINIC,TEST_AUX,DIAGNOSIS_IN,
            TREATMENT,EVOLUTION,DIAGNOSIS_END,DIRECTIONS,DNI_PACIENTE,
            LASTNAME,NAME,HISTORIA_CLINICA,NICK_HISTORIA;

    DNI_PACIENTE = currentID;

    QString cod_doc = ui->lineEdit_documentoCodeCurrent->text();
    query.prepare("SELECT * FROM e_epicrisis WHERE historial_documento_pk="+cod_doc);
    query.exec();
    query.next();
    HISTORIA_CLINICA = query.value(1).toString();
    query_1.prepare("SELECT codigo,apellido_paterno,apellido_materno,primer_nombre,segundo_nombre FROM Paciente WHERE idPaciente = "+currentID);

    query_1.exec();
    query_1.next();
    NICK_HISTORIA = query_1.value(0).toString();
    LASTNAME = query_1.value(1).toString()+" "+query_1.value(2).toString();
    NAME = query_1.value(3).toString()+" "+query_1.value(4).toString();



    MEDIC = query.value(2).toString();
    SERVICE = query.value(3).toString();
    BED = query.value(4).toString();
    DATE_IN = query.value(5).toString();
    DATE_OUT = query.value(6).toString();
    DAY_HOSPITALIZED = query.value(7).toString();
    SUMMARY_CLINIC = query.value(9).toString();
    SUMMARY_TEST_CLINIC = query.value(10).toString();
    TEST_AUX = query.value(11).toString();
    DIAGNOSIS_IN = query.value(12).toString();
    TREATMENT = query.value(13).toString();
    EVOLUTION = query.value(14).toString();
    DIAGNOSIS_END = query.value(15).toString();
    DIRECTIONS = query.value(16).toString();

    EPICRISIS_PDF->setname(NAME.toStdString());
    EPICRISIS_PDF->setlastname(LASTNAME.toStdString());
    EPICRISIS_PDF->setclinicHistory(NICK_HISTORIA.toStdString());
    EPICRISIS_PDF->setmedic(MEDIC.toStdString());
    EPICRISIS_PDF->setservice(SERVICE.toStdString());
    EPICRISIS_PDF->setbed(BED.toStdString());
    EPICRISIS_PDF->setDateIn(DATE_IN.toStdString());
    EPICRISIS_PDF->setDateout(DATE_OUT.toStdString());
    EPICRISIS_PDF->setDayHospitalized(DAY_HOSPITALIZED.toStdString());
    EPICRISIS_PDF->setTextSummaryClinic(SUMMARY_CLINIC.toStdString());
    EPICRISIS_PDF->setTextSummaryTestClinic(SUMMARY_TEST_CLINIC.toStdString());
    EPICRISIS_PDF->setTextTestAux(TEST_AUX.toStdString());
    EPICRISIS_PDF->setDiagnosisIn(DIAGNOSIS_IN.toStdString());
    EPICRISIS_PDF->setDateIn(DATE_IN.toStdString());
    EPICRISIS_PDF->setTreatment(TREATMENT.toStdString());
    EPICRISIS_PDF->setEvolution(EVOLUTION.toStdString());
    EPICRISIS_PDF->setDiagnosisEnd(DIAGNOSIS_END.toStdString());
    EPICRISIS_PDF->setDirections(DIRECTIONS.toStdString());
    EPICRISIS_PDF->generateLatex();
}

void historiaClinica_ui::generateRiesgo_Quirurgico()
{
    riesgo_quirurgico_documento* RIESGO_PDF = new riesgo_quirurgico_documento;
       QSqlQuery query, query_1;
       QString medic,lastname,name,service,clinicHistory,bed,procedencia,sexo,age,HTA,ASMA,
                TBC,DM,motivo_RQCV,PA,FC,corazon,pulmones,pulso_periferico,sistema_venoso,
                EKG,FC1,P,PR,QRC,QT,ST,onda_T,AQRS,ID,RQCV,sugerencias,date,DNI_PACIENTE,HISTORIA_CLINICA,
                NICK_HISTORIA;
       QDate DATE_BIRTH;



        QString cod_doc = ui->lineEdit_documentoCodeCurrent->text();
        query.prepare("SELECT * FROM e_riesgo_quirurgico WHERE historial_documento_pk="+cod_doc);
        query.exec();
        query.next();



        query_1.prepare("SELECT codigo,apellido_paterno,apellido_materno,primer_nombre,segundo_nombre,sexo,fecha_nacimiento FROM Paciente WHERE idPaciente = "+currentID);
        query_1.exec();
        query_1.next();
        HISTORIA_CLINICA = query_1.value(0).toString();
        lastname = query_1.value(1).toString()+" "+query_1.value(2).toString();
        name = lastname+ ", "+query_1.value(3).toString()+" "+query_1.value(4).toString();
        sexo = query_1.value(5).toString();
        DATE_BIRTH = query_1.value(6).toDate();
        int edad =  QDate::currentDate().year()- DATE_BIRTH.year();

        medic = query.value(2).toString();
        procedencia = query.value(3).toString();
        HTA = query.value(4).toString();
        ASMA = query.value(5).toString();
        TBC = query.value(6).toString();
        DM = query.value(7).toString();
        motivo_RQCV = query.value(8).toString();
        PA = query.value(9).toString();
        FC = query.value(10).toString();
        corazon = query.value(11).toString();
        pulmones = query.value(12).toString();
        pulso_periferico = query.value(13).toString();
        sistema_venoso = query.value(14).toString();
        EKG = query.value(15).toString();
        FC1 = query.value(16).toString();
        P = query.value(17).toString();
        PR = query.value(18).toString();
        QRC = query.value(19).toString();
        QT = query.value(20).toString();
        ST = query.value(21).toString();
        onda_T = query.value(22).toString();
        AQRS = query.value(23).toString();
        ID = query.value(24).toString();
        RQCV = query.value(25).toString();
        sugerencias = query.value(26).toString();
        date = query.value(27).toString();


        RIESGO_PDF->setname(name.toStdString());
        RIESGO_PDF->setlastname(lastname.toStdString());
        RIESGO_PDF->setclinicHistory(NICK_HISTORIA.toStdString());
        RIESGO_PDF->setmedic(medic.toStdString());
        RIESGO_PDF->setservice(service.toStdString());
        RIESGO_PDF->setbed(bed.toStdString());
        RIESGO_PDF->setSexo(sexo.toStdString());
        RIESGO_PDF->setage(edad);

        RIESGO_PDF->setProcedencia(procedencia.toStdString());
        RIESGO_PDF->setHTA(HTA.toStdString());
        RIESGO_PDF->setASMA(ASMA.toStdString());
        RIESGO_PDF->setTBC(TBC.toStdString());
        RIESGO_PDF->setDM(DM.toStdString());
        RIESGO_PDF->setMotivo_RQCV(motivo_RQCV.toStdString());
        RIESGO_PDF->setPA(PA.toStdString());
        RIESGO_PDF->setFC(FC.toStdString());
        RIESGO_PDF->setCorazon(corazon.toStdString());
        RIESGO_PDF->setPulmones(pulmones.toStdString());
        RIESGO_PDF->setPulso_Periferico(pulso_periferico.toStdString());
        RIESGO_PDF->setSistema_Venoso(sistema_venoso.toStdString());

        RIESGO_PDF->setEKG(EKG.toStdString());
        RIESGO_PDF->setFC1(FC1.toStdString());
        RIESGO_PDF->setP(P.toStdString());
        RIESGO_PDF->setPR(PR.toStdString());
        RIESGO_PDF->setQRC(QRC.toStdString());
        RIESGO_PDF->setQT(QT.toStdString());
        RIESGO_PDF->setST(ST.toStdString());
        RIESGO_PDF->setOnda_T(onda_T.toStdString());
        RIESGO_PDF->setAQRS(AQRS.toStdString());
        RIESGO_PDF->setID(ID.toStdString());
        RIESGO_PDF->setRQCV(RQCV.toStdString());
        RIESGO_PDF->setSugerencias(sugerencias.toStdString());
        RIESGO_PDF->setDate(date.toStdString());
        RIESGO_PDF->generatelatex();
}

int historiaClinica_ui::posAntecedentes(QString str_a)
{
    if(str_a == "Antecedente")
        return 0;
    return -1;
}

int historiaClinica_ui::posReporteOp(QString str_ro)
{
    if(str_ro == "Reporte Operatorio")
        return 1;
    return -1;
}

int historiaClinica_ui::posExamenClinico(QString str_ec)
{
    if(str_ec == "Examen Clinico")
        return 2;
    return -1;
}

int historiaClinica_ui::posTerapeuticaMedica(QString str_tm)
{
    if(str_tm == "Terapeutica")
        return 3;
    return -1;
}
int historiaClinica_ui::posEpicrisis(QString str_tm)
{
    if(str_tm == "Epicrisis")
    {
        return 4;
    }
    return -1;
}
int historiaClinica_ui::posRiesgo_Quirurgico(QString str_tm)
{
    if(str_tm == "Riesgo.Q.C")
        {
            return 5;
        }
        return -1;
}

void historiaClinica_ui::on_pushButton_editarDocuento_clicked()
{

}

void historiaClinica_ui::set_access_level(int access)
{

    int NIVEL_ACCESO;

    NIVEL_ACCESO= access;

    if(access == 1)
    {
       ui->nuevoDocumento_historial->hide();
       ui->pushButton_generatePDF->hide();
    }
}


void historiaClinica_ui::on_pushButton_Fotos_clicked()
{
        QSqlQuery query;
        QString historiaClinica;
        query.exec("select historia_clinica_pk from e_historia_clinica where Paciente_idPaciente ="+currentID);
        query.next();
        historiaClinica = query.value(0).toString();
        QString carpeta = query.value(0).toString();

        if(carpeta!="")
    {
        FOTOS_FORM = new fotos_ui;
        QDir::setCurrent(absPath);
        FOTOS_FORM->setPatch(absPath);
        entering_folder(historiaClinica);
        FOTOS_FORM->setDni(currentDNI);
        FOTOS_FORM->setFolderFtp(historiaClinica);
        FOTOS_FORM->update_form();
        FOTOS_FORM->show_name(ui->lineEdit_PatientActual->text());
        FOTOS_FORM->show_historial_code(ui->lineEdit_historiaClinicaCurrent->text());
        FOTOS_FORM->createconexion();
        FOTOS_FORM->show();
    }
}
void historiaClinica_ui::entering_folder(QString folder)
{
    //PONIEDO POR DEFECTO LA RUTA DEL PROYECTO
    QDir::setCurrent(absPath);
    //ENTRANDO A LA CARPETA DE ARCHIVO
    QDir dir;
    if(dir.exists(folder))
    {
        dir.cd(folder);
        QDir::setCurrent(dir.path());
    }
    else
    {
        dir.mkdir(folder);
        dir.cd(folder);
        QDir::setCurrent(dir.path());
    }
}

void historiaClinica_ui::generateDocLatex()
{
    if(ui->lineEdit_documentoCodeCurrent->text()!="")
       {

        int i=0, pos=0;

        for(; i<num_generate_funcs; i++)
        {
            pos = (this->*ptr_pos[i])(str_pB_generatePDF);
            if(pos!=-1)
                break;
        }
        str_pB_generatePDF.clear();

        if(pos==-1)
            return;

        (this->*ptr_generates[pos])();
    }
    else{
        QMessageBox msgBox;
        msgBox.setText("Selecione un documento");
        msgBox.exec();

    }
}
void historiaClinica_ui::uploadPdf(QString filename)
{

}
void historiaClinica_ui::createConnexion()
{

}
void historiaClinica_ui::putCorrected()
{

}
void historiaClinica_ui::setLastAdd(QString temp)
{
    lastadd = temp;
}
void historiaClinica_ui::downloadPdf()
{

}
void historiaClinica_ui::getCorrected()
{

}



void historiaClinica_ui::on_lineEdit_historialSearch_returnPressed()
{
}
void historiaClinica_ui::setAbsPath(QString val)
{
    absPath = val;
}

void historiaClinica_ui::setParentPrincipal(MainWindow *parent)
{
    parentWindow = parent;
}

void historiaClinica_ui::on_lineEdit_historialSearch_textChanged(const QString &arg1)
{

    QSqlQueryModel *model = new QSqlQueryModel;
    QString query;


    if(arg1.size() != 0)
    {
        QStringList splitted = arg1.split(" ");
        query = "SELECT idPaciente as ID,dni,codigo as 'Nro Historia' ,concat(apellido_paterno, ' ',apellido_materno,' ' ,primer_nombre, ' ', segundo_nombre) as 'Apellidos y Nombres' FROM Paciente WHERE (";

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


    model->setQuery(query);
    ui->tableView_ListaPacientes1->setModel(model);

    ui->tableView_ListaPacientes1->setColumnWidth(0,0);
    ui->tableView_ListaPacientes1->setColumnWidth(1,0);
    ui->tableView_ListaPacientes1->setColumnWidth(2,100);
    ui->tableView_ListaPacientes1->setColumnWidth(3,300);

}


void historiaClinica_ui::on_tableView_ListaPacientes1_clicked(const QModelIndex &index)
{
    QString NOMBRE,CODIGO_DOCUMENTO,HISTORIA_CLINICA,FECHA_CREACION,TIPO_DOCUMENTO,COMENTARIO, codigo, CONSULTA;
    QSqlQuery query_historia_clinica;
    QString query;
    QSqlQueryModel *model = new QSqlQueryModel;
    int COUNT = 0;

    currentID = ui->tableView_ListaPacientes1->model()->index(index.row(),0).data().toString();
    //SETEANDO EL DNI

    currentDNI = ui->tableView_ListaPacientes1->model()->index(index.row(),1).data().toString();
    ui->lineEdit_currentDni->setText(currentDNI);

    NOMBRE = ui->tableView_ListaPacientes1->model()->index(index.row(),3).data().toString();
    ui->lineEdit_PatientActual->clear();
    ui->lineEdit_PatientActual->insert(NOMBRE);
    query_historia_clinica.prepare("SELECT historia_clinica_pk FROM e_historia_clinica WHERE Paciente_idPaciente='"+currentID+"'");
    query_historia_clinica.exec();
    query_historia_clinica.next();

    HISTORIA_CLINICA = query_historia_clinica.value(0).toString();
    currentHISTORIA_PK = HISTORIA_CLINICA;
    codigo = ui->tableView_ListaPacientes1->model()->index(index.row(),2).data().toString();
    ui->lineEdit_historiaClinicaCurrent->clear();
    ui->lineEdit_historiaClinicaCurrent->insert(codigo);


    //  - - - - - - - - - show documents - - -  - - - - - - - - - - - - -  -

    query = "SELECT fecha_creacion as 'Feha de Creacion',tipo as 'Tipo de Documento' ,historial_documento_pk as 'Codigo Documento' FROM r_historial_documento WHERE historia_clinica_pk = "+HISTORIA_CLINICA+" AND tipo<> 'consulta'";
    model->setQuery(query);
    ui->tableView_DocumentList->setModel(model);
    ui->tableView_DocumentList->show();
    ui->tableView_DocumentList->setColumnWidth(0,150);
    ui->tableView_DocumentList->setColumnWidth(1,300);
    ui->tableView_DocumentList->setColumnWidth(2,120);



}
void historiaClinica_ui::on_tableView_DocumentList_clicked(const QModelIndex &index)
{
    QString CODIGO_DOCUMENTO;
    int FILA;
    FILA = index.row();
    str_pB_generatePDF = ui->tableView_DocumentList->model()->index(index.row(),1).data().toString();
    CODIGO_DOCUMENTO = ui->tableView_DocumentList->model()->index(index.row(),2).data().toString();
    ui->lineEdit_documentoCodeCurrent->setText(CODIGO_DOCUMENTO);
}

