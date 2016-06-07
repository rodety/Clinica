#include "examen_clinico_documento.h"


examen_clinico_documento::examen_clinico_documento()
{
    name="Juan Alberto";
    lastname="Danko Antolovic";
    clinicHistory="12345";
    medic="Carlos arriaga Montesinos";
    service="Cirujia Estetica";
    clinicHistory="00-458-632";
    bed="0012";
    //percussion= "Como sistema operativo debemos hablaros de Android 2.3 y no esperemos nada más. Viene personalizada con la interfaz TouchWiz y sus Hubs famosos, además de con ChatON. ";
    //auscultation = "El Samsung Galaxy Mini 2 está llamado a ser un terminal importante en los catalogos de las operadoras, que podrán ofrecerlo a precio muy atractivo. El precio si queremos comprarlo libre todavía no se conoce. Estará disponible a partir del segundo trimestre del año.";
    //deeppalpation = " qqqqqqqqqqqqqqqqqqqqqqqqqqq  qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq";
   //neurological = " Los comentarios son validos, pero el calificar ridiculizando a los profesionales que lo hicieron, hace que se pierda la validez del comentario y se lo lleve a un nivel no apropiado. ";

}
void examen_clinico_documento::setbreathingkind(string a){ breathingkind=a; }
void examen_clinico_documento::setfrecuency(string a){ frecuency=a;}
void examen_clinico_documento::setretracciones(string a){ retracciones=a;}
void examen_clinico_documento::setabovedamientos(string a){ abovedamientos =a;}
void examen_clinico_documento::setpalpaciomobility(string a){ palpaciomobility =a;}
void examen_clinico_documento::setvocalvibrations(string a){ vocalvibrations =a;}
void examen_clinico_documento::setpercussion(string a){ percussion =a;}
void examen_clinico_documento::setauscultation(string a){ auscultation =a;}
void examen_clinico_documento::setadomenpiel(string a){ adomenpiel=a;}
void examen_clinico_documento::setdeformation(string a){ deformation=a;}
void examen_clinico_documento::setmobility(string a){ mobility =a;}
void examen_clinico_documento::setcollateralcirculation(string a){collateralcirculation=a;}
void examen_clinico_documento::setpalpaciopared(string a){palpaciopared=a;}
void examen_clinico_documento::setsensitivity(string a){sensitivity=a;}
void examen_clinico_documento::setpowercrunch(string a){powercrunch=a;}
void examen_clinico_documento::setpainpoint(string a){painpoint=a;}
void examen_clinico_documento::setdeeppalpation(string a){deeppalpation=a;}
void examen_clinico_documento::setpercussion2(string a){percussion2=a;}
void examen_clinico_documento::setauscultation2(string a){auscultation2=a;}
void examen_clinico_documento::setliver(string a){liver=a;}
void examen_clinico_documento::setspleen(string a){spleen=a;}
void examen_clinico_documento::setvaginaltouch(string a){vaginaltouch=a;}
void examen_clinico_documento::setanaltouch(string a){ analtouch=a;}
void examen_clinico_documento::setgenitals(string a){genitals=a;}
void examen_clinico_documento::setneurological(string a){neurological=a;}
void examen_clinico_documento::setdiagnosticimpressions(string a){diagnosticimpressions=a;}
void examen_clinico_documento::settalla(string a){talla=a;}
void examen_clinico_documento::setpeso(string a){peso=a;}
void examen_clinico_documento::setpesoHabitual(string a){pesoHabitual=a;}
void examen_clinico_documento::setbiotipo(string a){biotipo=a;}
void examen_clinico_documento::settemp(string a){temp=a;}
void examen_clinico_documento::setpulso(string a){pulso=a;}
void examen_clinico_documento::setresp(string a){resp=a;}
void examen_clinico_documento::setestadoGeneral(string a){estadoGeneral=a;}
void examen_clinico_documento::setmental(string a){mental =a;}
void examen_clinico_documento::setfacies(string a){facies=a;}
void examen_clinico_documento::setpielAnexos(string a){ pielAnexos =a;}
void examen_clinico_documento::setcolor(string a){color=a;}
void examen_clinico_documento::setcelularSubcutaneo(string a){celularSubcutaneo=a;}
void examen_clinico_documento::setoteoMioArticular(string a){oteoMioArticular=a;}
void examen_clinico_documento::setsistemaLinfatico(string a){sistemaLinfatico =a;}
void examen_clinico_documento::setcabeza(string a){cabeza =a;}
void examen_clinico_documento::setojos(string a){ojos =a;}
void examen_clinico_documento::setpupilas(string a){ pupilas =a;}
void examen_clinico_documento::setfondoOjos(string a){ fondoOjos =a; }
void examen_clinico_documento::setnariz(string a){nariz =a;}
void examen_clinico_documento::setoidos(string a){ oidos =a; }
void examen_clinico_documento::setlabios(string a){labios =a; }
void examen_clinico_documento::setmucosas(string a){ mucosas =a;}
void examen_clinico_documento::setlengua(string a) {lengua =a;}
void examen_clinico_documento::setdientes(string a) {dientes =a ;}
void examen_clinico_documento::setpaladar(string a) { paladar =a;}
void examen_clinico_documento::setamigdalasFaringe(string a) { amigdalasFaringe =a;}
void examen_clinico_documento::setcuello(string a){ cuello =a; }
void examen_clinico_documento::settiroides(string a) {tiroides =a; }
void examen_clinico_documento::settorax(string a) { torax =a; }
void examen_clinico_documento::setmamas(string a) {mamas =a; }
void examen_clinico_documento::setcardiovascularPresionArterial(string a){cardiovascularPresionArterial =a; }
void examen_clinico_documento::setpulsoFrecuencia(string a){pulsoFrecuencia =a;}
void examen_clinico_documento::setritmo(string a){ ritmo =a;}
void examen_clinico_documento::setamplitud(string a){amplitud =a;}
void examen_clinico_documento::setpared(string a){pared =a;}
void examen_clinico_documento::setpulsoCardiaco(string a){pulsoCardiaco =a;}
void examen_clinico_documento::setfemoral(string a){ femoral =a ;}
void examen_clinico_documento::setpedio(string a) {pedio =a ;}
void examen_clinico_documento::setotros(string a) { otros =a;}
void examen_clinico_documento::setcorazonChoquePunta(string a){ corazonChoquePunta =a;}
void examen_clinico_documento::setruidosCardiacos(string a){ ruidosCardiacos =a;}
void examen_clinico_documento::setsoplos(string a){soplos =a;}
void examen_clinico_documento::setruidosAdventicios(string a){ ruidosAdventicios =a ;}
void examen_clinico_documento::setmedic(string a){ medic=a; }
void examen_clinico_documento::setlastname(string a){lastname=a;}
void examen_clinico_documento::setname(string a){name=a;}
void examen_clinico_documento::setservice(string a){service=a;}
void examen_clinico_documento::setclinicHistory(string a){clinicHistory=a;}
void examen_clinico_documento::setbed(string a){bed=a;}



string examen_clinico_documento::gettalla(){return talla;}
string examen_clinico_documento::getpeso(){return peso;}
string examen_clinico_documento::getpesoHabitual(){return pesoHabitual;}
string examen_clinico_documento::getbiotipo(){return biotipo;}
string examen_clinico_documento::gettemp(){return temp;}
string examen_clinico_documento::getpulso(){return pulso;}
string examen_clinico_documento::getresp(){return resp;}
string examen_clinico_documento::getestadoGeneral(){return estadoGeneral;}
string examen_clinico_documento::getmental(){return mental;}
string examen_clinico_documento::getfacies(){return facies;}
string examen_clinico_documento::getpielAnexos(){return pielAnexos;}
string examen_clinico_documento::getcolor(){return color;}
string examen_clinico_documento::getcelularSubcutaneo(){return celularSubcutaneo;}
string examen_clinico_documento::getoteoMioArticular(){return oteoMioArticular;}
string examen_clinico_documento::getsistemaLinfatico(){return sistemaLinfatico;}
string examen_clinico_documento::getcabeza(){return cabeza;}
string examen_clinico_documento::getojos(){return ojos;}
string examen_clinico_documento::getpupilas(){return pupilas;}
string examen_clinico_documento::getfondoOjos(){return fondoOjos;}
string examen_clinico_documento::getnariz(){return nariz;}
string examen_clinico_documento::getoidos(){return oidos;}
string examen_clinico_documento::getlabios(){return labios;}
string examen_clinico_documento::getmucosas(){return mucosas;}
string examen_clinico_documento::getlengua(){return lengua;}
string examen_clinico_documento::getdientes(){return dientes;}
string examen_clinico_documento::getpaladar(){return paladar;}
string examen_clinico_documento::getamigdalasFaringe(){return amigdalasFaringe;}
string examen_clinico_documento::getcuello(){return cuello;}
string examen_clinico_documento::gettiroides(){return tiroides;}
string examen_clinico_documento::gettorax(){return torax;}
string examen_clinico_documento::getmamas(){return mamas;}
string examen_clinico_documento::getcardiovascularPresionArterial(){return cardiovascularPresionArterial;}
string examen_clinico_documento::getpulsoFrecuencia(){return pulsoFrecuencia;}
string examen_clinico_documento::getritmo(){return ritmo;}
string examen_clinico_documento::getamplitud(){return amplitud;}

string examen_clinico_documento::getpared(){return pared;}
string examen_clinico_documento::getpulsoCardiaco(){return pulsoCardiaco;}
string examen_clinico_documento::getfemoral(){return femoral;}
string examen_clinico_documento::getpedio(){return pedio;}
string examen_clinico_documento::getotros(){ return otros;}
string examen_clinico_documento::getcorazonChoquePunta(){return corazonChoquePunta;}
string examen_clinico_documento::getruidosCardiacos(){return ruidosCardiacos;}
string examen_clinico_documento::getsoplos(){return soplos;}
string examen_clinico_documento::getruidosAdventicios(){return ruidosAdventicios;}
string examen_clinico_documento::getbreathingkind(){return breathingkind;}
string examen_clinico_documento::getfrecuency(){return frecuency;}
string examen_clinico_documento::getretracciones(){return retracciones;}
string examen_clinico_documento::getabovedamientos(){return abovedamientos;}
string examen_clinico_documento::getpalpaciomobility(){return palpaciomobility;}
string examen_clinico_documento::getvocalvibrations(){return vocalvibrations;}
string examen_clinico_documento::getpercussion(){return percussion;}
string examen_clinico_documento::getauscultation(){return auscultation;}
string examen_clinico_documento::getadomenpiel(){return adomenpiel;}
string examen_clinico_documento::getdeformation(){ return deformation;}
string examen_clinico_documento::getmobility(){return mobility;}
string examen_clinico_documento::getcollateralcirculation(){return collateralcirculation;}
string examen_clinico_documento::getpalpaciopared(){return palpaciopared;}
string examen_clinico_documento::getsensitivity(){return sensitivity;}
string examen_clinico_documento::getpowercrunch(){return powercrunch;}
string examen_clinico_documento::getpainpoint(){return painpoint;}
string examen_clinico_documento::getdeeppalpation(){return deeppalpation;}
string examen_clinico_documento::getpercussion2(){return percussion2;}
string examen_clinico_documento::getauscultation2(){return auscultation2;}
string examen_clinico_documento::getliver(){return liver;}
string examen_clinico_documento::getspleen(){return spleen;}
string examen_clinico_documento::getvaginaltouch(){return vaginaltouch;}
string examen_clinico_documento::getanaltouch(){return analtouch;}
string examen_clinico_documento::getgenitals(){return genitals;}
string examen_clinico_documento::getneurological(){return neurological;}
string examen_clinico_documento::getdiagnosticimpressions(){return diagnosticimpressions;}


void examen_clinico_documento::generateLatex()
{

    ofstream file("examenClinico.tex");
    //CONFIGURACION DE DOCUMENTO
    file<<"\\documentclass[10pt,a4paper]{article}"<<endl;
    file<<"\\usepackage[spanish]{babel}"<<endl;
    file<<"\\usepackage{anysize}"<<endl;
    file<<"\\usepackage[latin1]{inputenc}"<<endl;
    file<<"\\usepackage{graphicx}"<<endl;
    file<<"\\usepackage[light,math]{iwona}"<<endl;
    file<<"\\usepackage[T1]{fontenc}"<<endl;
    file<<"\\marginsize{1cm}{0cm}{0cm}{0cm} "<<endl;
    file<<"\\pagestyle{empty} "<<endl;
    file<<"\\begin{document} "<<endl;
    file<<"\\begin{minipage}{10cm}"<<endl;
    file<<"\\end{minipage}"<<endl;
    file<<"\\hfill"<<endl;
    //MEMBRETE

    file<<"\\begin{minipage}{10cm}"<<endl;
    file<<"\\begin{flushleft}"<<endl;
    file<<"\\scalebox{1.4}[1.5]{"<<endl;
    file<<"\\begin{tabular}{|p{3cm}p{2.3cm}|}"<<endl;
    file<<"\\hline "<<endl;
    file<<"\\multicolumn{2}{|l|}{\\scriptsize{\\textbf{PACIENTE}}}\\\\"<<endl;
    file<<"\\multicolumn{2}{|p{5.3cm}|}{\\scriptsize{Apellidos: "<<lastname<<"}}\\\\ "<<endl;
    file<<"\\multicolumn{2}{|p{5.3cm}|}{\\scriptsize{Nombres: "<<name<<"}}\\\\ "<<endl;
    file<<"\\multicolumn{2}{|p{5.3cm}|}{\\scriptsize{M\\'edico Tratante: "<<medic<<"}}\\\\ "<<endl;
    file<<"\\hline "<<endl;
    file<<"\\multicolumn{2}{|p{5.3cm}|}{\\scriptsize{Servicio: " << service<<"}}\\\\"<<endl;
    file<<"\\hline "<<endl;
    file<<"\\scriptsize{Historia Cl\\'inica: "<<clinicHistory<<"}&\\scriptsize{Cama: "<<bed<<"} \\\\ "<<endl;
    file<<"\\hline "<<endl;
    file<<"\\end{tabular}}"<<endl;
    file<<"\\end{flushleft}"<<endl;
    file<<"\\end{minipage}"<<endl<<endl;

    //PRIMERA HOJA

     file<<"\\vspace{0.5cm}"<<endl;
     file<<"\\scalebox{1.4}[1.55]{"<<endl;
     file<<"\\begin{tabular}{|p{2.8cm}p{2.8cm}p{2.8cm}p{2.8cm}|}"<<endl;
     file<<"\\hline"<<endl;
     file<<"\\scriptsize{TALLA: "<< talla<<"} & \\scriptsize{PESO: "<<peso<<"} & \\scriptsize{PESO HABITUAL: "<<pesoHabitual<<"} & \\scriptsize{BIOTIPO: "<<biotipo<<"}  \\\\"<<endl;
     file<<"\\hline"<<endl;
     file<<"\\scriptsize{TEMP: "<<temp<<"} & \\scriptsize{PULSO: "<<pulso<<"} & \\multicolumn{2}{l|}{\\scriptsize{RESP: "<<resp <<"}}\\\\"<<endl;
     file<<"\\hline"<<endl;
     file<<"\\multicolumn{2}{|l}{ \\scriptsize{ESTADO GENERAL: "<< estadoGeneral<<"} } & \\scriptsize{MENTAL: "<<mental<<"} & \\scriptsize{FACIES: "<<facies<<"} \\\\"<<endl;
     file<<"\\hline"<<endl;
     file<<"\\multicolumn{3}{|l} {\\scriptsize{PIEL Y ANEXOS :"<< pielAnexos<< "}}  & \\scriptsize{COLOR: "<<color<<"} \\\\"<<endl;
     file<<"\\hline"<<endl;          
     file<<"\\multicolumn{4}{|l|}{\\begin{minipage}[t]{12.5 cm}\\scriptsize{CELULAR SUBCUTANEO: "<<celularSubcutaneo<<"}\\end{minipage}}\\\\"<<endl;
     file<<"\\hline"<<endl;
     file<<"\\multicolumn{4}{|l|}{\\begin{minipage}[t]{12.5 cm}\\scriptsize{OSTEO - MIO - ARTICULAR : "<<oteoMioArticular<<"}\\end{minipage}}\\\\"<<endl;
     file<<"\\hline"<<endl;
     file<<"\\multicolumn{4}{|l|}{\\begin{minipage}[t]{12.5 cm}\\scriptsize{SISTEMA LINF\\'ATICO: "<<sistemaLinfatico<<"}\\end{minipage}}\\\\"<<endl;
     file<<"\\hline"<<endl;
     file<<"\\multicolumn{4}{|l|}{\\begin{minipage}[t]{12.5 cm}\\scriptsize{CABEZA: "<<cabeza<<"}\\end{minipage}}\\\\"<<endl;
     file<<"\\hline"<<endl;
     file<<"\\multicolumn{4}{|l|}{\\begin{minipage}[t]{12.5 cm}\\scriptsize{OJOS: "<<ojos<<"}\\end{minipage}}\\\\"<<endl;
     file<<"\\hline"<<endl;
     file<<"\\multicolumn{4}{|l|}{\\begin{minipage}[t]{12.5 cm}\\scriptsize{PUPILAS: "<<pupilas<<"}\\end{minipage}}\\\\"<<endl;
     file<<"\\hline"<<endl;
     file<<"\\multicolumn{4}{|l|}{\\begin{minipage}[t]{12.5 cm}\\scriptsize{FONDO DE OJOS: "<<fondoOjos<<"}\\end{minipage}}\\\\"<<endl;
     file<<"\\hline"<<endl;
     file<<"\\multicolumn{4}{|l|}{\\begin{minipage}[t]{12.5 cm}\\scriptsize{NARIZ: "<<nariz<<"}\\end{minipage}}\\\\"<<endl;
     file<<"\\hline"<<endl;
     file<<"\\multicolumn{4}{|l|}{\\begin{minipage}[t]{12.5 cm}\\scriptsize{OIDOS: "<<oidos<<"}\\end{minipage}}\\\\"<<endl;
     file<<"\\hline"<<endl;
     file<<"\\scriptsize{\\textbf{BOCA}}&\\scriptsize{  LABIOS : "<< labios <<"} &\\scriptsize{MUCOSAS: "<<mucosas<<"} & \\scriptsize{LENGUA: "<< lengua<<"} \\\\"<<endl;
     file<<"\\hline"<<endl;
     file<<"\\multicolumn{2}{|l}{\\begin{minipage}[t]{5.5 cm}\\scriptsize{DIENTES: "<<dientes<<"}\\end{minipage}}&\\multicolumn{2}{l|}{\\begin{minipage}[t]{5.5 cm}\\scriptsize{PALADAR: "<<paladar<<"}\\end{minipage}}\\\\"<<endl;
     file<<"\\hline"<<endl;
     file<<"\\multicolumn{4}{|l|}{\\begin{minipage}[t]{12.5 cm}\\scriptsize{AMIGDALAS Y FARINGE: "<<amigdalasFaringe<<"}\\end{minipage}}\\\\"<<endl;
     file<<"\\hline"<<endl;
     file<<"\\multicolumn{2}{|l}{\\begin{minipage}[t]{5.5 cm}\\scriptsize{CUELLO: "<<cuello<<"}\\end{minipage}}&\\multicolumn{2}{l|}{\\begin{minipage}[t]{5.5 cm}\\scriptsize{TIROIDES: "<<tiroides<<"}\\end{minipage}}\\\\"<<endl;
     file<<"\\hline"<<endl;
     file<<"\\multicolumn{4}{|l|}{\\begin{minipage}[t]{12.5 cm}\\scriptsize{TORAX: "<<torax<<"}\\end{minipage}}\\\\"<<endl;
     file<<"\\hline"<<endl;
     file<<"\\multicolumn{4}{|l|}{\\begin{minipage}[t]{12.5 cm}\\scriptsize{MAMAS: "<<mamas<<"}\\end{minipage}}\\\\"<<endl;
     file<<"\\hline"<<endl;
     file<<"\\multicolumn{4}{|l|}{\\begin{minipage}[t]{12.5 cm}\\scriptsize{\\textbf{CARDIOVASCULAR}  PRESI\\'ON ARTERIAL: "<<cardiovascularPresionArterial<<"}\\end{minipage}}\\\\"<<endl;
     file<<"\\hline"<<endl;
     file<<"\\scriptsize{\\textbf{PULSO}  FREC.: "<< pulsoFrecuencia<<"} & \\scriptsize{RITMO: "<< ritmo<<"} & \\scriptsize{AMPLITUD: "<< amplitud<<"} & \\scriptsize{PARED: "<<pared<<"} \\\\"<<endl;
     file<<"\\hline"<<endl;
     file<<"\\multicolumn{2}{|l}{\\begin{minipage}[t]{5.5 cm}\\scriptsize{PULSO CARDIACO: "<<pulsoCardiaco<<"}\\end{minipage}}&\\multicolumn{2}{l|}{\\begin{minipage}[t]{5.5 cm}\\scriptsize{FEMORAL: "<<femoral<<"}\\end{minipage}}\\\\"<<endl;
     file<<"\\hline"<<endl;
     file<<"\\multicolumn{2}{|l}{\\begin{minipage}[t]{5.5 cm}\\scriptsize{PEDIO: "<<pedio<<"}\\end{minipage}}&\\multicolumn{2}{l|}{\\begin{minipage}[t]{5.5 cm}\\scriptsize{OTROS: "<<otros<<"}\\end{minipage}}\\\\"<<endl;
     file<<"\\hline"<<endl;
     file<<"\\multicolumn{4}{|l|}{\\begin{minipage}[t]{12.5 cm}\\scriptsize{CORAZ\\'ON CHOQUE DE PUNTA: "<<corazonChoquePunta<<"}\\end{minipage}}\\\\"<<endl;
     file<<"\\hline"<<endl;
     file<<"\\multicolumn{4}{|l|}{\\begin{minipage}[t]{12.5 cm}\\scriptsize{RUIDOS CARDIACOS: "<<ruidosCardiacos<<"}\\end{minipage}}\\\\"<<endl;
     file<<"\\hline"<<endl;
     file<<"\\multicolumn{4}{|l|}{\\begin{minipage}[t]{12.5 cm}\\scriptsize{SOPLOS: "<<soplos<<"}\\end{minipage}}\\\\"<<endl;
     file<<"\\hline"<<endl;
     file<<"\\multicolumn{4}{|l|}{\\begin{minipage}[t]{12.5 cm}\\scriptsize{RUIDOS ADVENTICIOS: "<<ruidosAdventicios<<"}\\end{minipage}}\\\\"<<endl;
     file<<"\\hline"<<endl;
     file<<"\\end{tabular}}"<<endl;

     file<<"\\vspace{0.6cm}"<<endl;
     file<<"\\begin{flushleft}"<<endl;
     file<<"\\begin{LARGE}"<<endl;
     file<<"\\textbf{\\'EXAMEN CL\\'INICO}"<<endl;
     file<<"\\end{LARGE}"<<endl;
     file<<"\\end{flushleft}"<<endl;

     //SEGUNDA PAGINA
     file<<"\\newpage"<<endl;
     file<<"\\hfill"<<endl;
     //MEMBRETE
     file<<"\\begin{minipage}{10cm}"<<endl;
     file<<"\\begin{flushleft}"<<endl;
     file<<"\\scalebox{1.4}[1.5]{"<<endl;
     file<<"\\begin{tabular}{|p{3cm}p{2.3cm}|}"<<endl;
     file<<"\\hline "<<endl;
     file<<"\\multicolumn{2}{|l|}{\\scriptsize{\\textbf{PACIENTE}}}\\\\"<<endl;
     file<<"\\multicolumn{2}{|p{5.3cm}|}{\\scriptsize{Apellidos: "<<lastname<<"}}\\\\ "<<endl;
     file<<"\\multicolumn{2}{|p{5.3cm}|}{\\scriptsize{Nombres: "<<name<<"}}\\\\ "<<endl;
     file<<"\\multicolumn{2}{|p{5.3cm}|}{\\scriptsize{M\\'edico Tratante: "<<medic<<"}}\\\\ "<<endl;
     file<<"\\hline "<<endl;
     file<<"\\multicolumn{2}{|p{5.3cm}|}{\\scriptsize{Servicio: " << service<<"}}\\\\"<<endl;
     file<<"\\hline "<<endl;
     file<<"\\scriptsize{Historia Cl\\'inica: "<<clinicHistory<<"}&\\scriptsize{Cama: "<<bed<<"} \\\\ "<<endl;
     file<<"\\hline "<<endl;
     file<<"\\end{tabular}}"<<endl;
     file<<"\\end{flushleft}"<<endl;
     file<<"\\end{minipage}"<<endl<<endl;

     //CUERPO

    file<<"\\vspace{0.5cm}"<<endl;
    file<<"\\scalebox{1.4}[1.55]{"<<endl;
    file<<"\\begin{tabular}{|p{5.5cm} p{5.5cm} |}"<<endl;
    file<<"\\hline"<<endl;
    file<<"\\scriptsize{\\textbf{RESPIRATORIO  }TIPO RESPIRACI\\'ON: "<<breathingkind<<"} & \\scriptsize{FRECUENCIA: "<<frecuency<<"}\\\\"<<endl;
    file<<"\\hline"<<endl;
    file<<"\\scriptsize{RETRACCIONES: "<< retracciones<<"} & \\scriptsize{ABOVEDAMIENTOS: "<<abovedamientos<<"} \\\\"<<endl;
    file<<"\\hline"<<endl;
    file<<"\\scriptsize{\\textbf{PALPACIO  }MOVILIDAD: "<<palpaciomobility<<"}& \\scriptsize{VIBRACIONES VOCALES: "<< vocalvibrations<<"}\\\\"<<endl;
    file<<"\\hline "<<endl;
    file<<"\\multicolumn{2}{|l|}{\\begin{minipage}[t]{12.5 cm}\\scriptsize{PERCUSI\\'ON: "<<percussion<<"}\\end{minipage}}\\\\"<<endl;
    file<<"\\hline"<<endl;
    file<<"\\multicolumn{2}{|l|}{\\begin{minipage}[t]{12.5 cm}\\scriptsize{AUSCULTACI\\'ON: "<<auscultation<<"}\\end{minipage}}\\\\"<<endl;
    file<<"\\hline"<<endl;
    file<<"\\scriptsize{\\textbf{ABDOMEN INSPECCI\\'ON  }PIEL: "<<adomenpiel<<"} & \\scriptsize{DEFORMACIONES:"<<deformation<<"} \\\\"<<endl;
    file<<"\\hline"<<endl;
    file<<"\\scriptsize{MOVILIDAD: "<< mobility<<" } & \\scriptsize{CIRCULACI\\'ON COLATERAL: "<< collateralcirculation<<"}\\\\"<<endl;
    file<<"\\hline"<<endl;
    file<<"\\scriptsize{\\textbf{PALPACI\\'ON}  PARED: " <<palpaciopared<<"} & \\scriptsize{SENSIBILIDAD: "<<sensitivity<<"}\\\\"<<endl;
    file<<"\\hline"<<endl;
    file<<"\\scriptsize{TENSI\\'ON ABDOMINAL: "<< powercrunch <<" } & \\scriptsize{PUNTOS DOLORIDOS: "<< painpoint<<"} \\\\"<<endl;
    file<<"\\hline"<<endl;
    file<<"\\multicolumn{2}{|l|}{\\begin{minipage}[t]{12.5 cm}\\scriptsize{PALPACI\\'ON PROFUNDA: "<<deeppalpation<<"}\\end{minipage}}\\\\"<<endl;
    file<<"\\hline"<<endl;
    file<<"\\scriptsize{PERCUSI\\'ON: "<< percussion2<<"} & \\scriptsize{AUSCULTACI\\'ON: "<< auscultation2<<"} \\\\"<<endl;
    file<<"\\hline"<<endl;
    file<<"\\multicolumn{2}{|l|}{\\begin{minipage}[t]{12.5 cm}\\scriptsize{HIGADO: "<<liver<<"}\\end{minipage}}\\\\"<<endl;
    file<<"\\hline"<<endl;
    file<<"\\multicolumn{2}{|l|}{\\begin{minipage}[t]{12.5 cm}\\scriptsize{BAZO: "<<spleen<<"}\\end{minipage}}\\\\"<<endl;
    file<<"\\hline"<<endl;
    file<<"\\multicolumn{2}{|l|}{\\begin{minipage}[t]{12.5 cm}\\scriptsize{TACTO RECTAL: "<<analtouch<<"}\\end{minipage}}\\\\"<<endl;
    file<<"\\hline"<<endl;
    file<<"\\multicolumn{2}{|l|}{\\begin{minipage}[t]{12.5 cm}\\scriptsize{TACTO VAGINAL: "<<vaginaltouch<<"}\\end{minipage}}\\\\"<<endl;
    file<<"\\hline"<<endl;
    file<<"\\multicolumn{2}{|l|}{\\begin{minipage}[t]{12.5 cm}\\scriptsize{GENITALES: "<<genitals<<"}\\end{minipage}}\\\\"<<endl;
    file<<"\\hline"<<endl;
    file<<"\\multicolumn{2}{|l|}{\\begin{minipage}[t]{12.5 cm}\\scriptsize{NEUROL\\'OLICO: "<<neurological<<"}\\end{minipage}}\\\\"<<endl;
    file<<"\\hline"<<endl;
    file<<"\\multicolumn{2}{|l|}{\\begin{minipage}[t]{12.5 cm}\\scriptsize{IMPRESIONES DIAGN\\'OSTICAS: "<<diagnosticimpressions<<"}\\end{minipage}}\\\\"<<endl;
    file<<"\\hline"<<endl;
    file<<"\\end{tabular}}"<<endl;
    file<<"\\vspace{0.6cm}"<<endl;
    file<<"\\begin{flushleft}"<<endl;
    file<<"\\begin{LARGE}"<<endl;
    file<<"\\textbf{\\'EXAMEN CL\\'INICO}"<<endl;
    file<<"\\end{LARGE}"<<endl;
    file<<"\\end{flushleft}"<<endl;
    file<<"\\end{document}"<<endl;
    file.close();

    system("pdflatex examenClinico.tex > pdfCompiling.txt & start examenClinico.pdf");

}
