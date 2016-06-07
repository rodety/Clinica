#include "riesgo_quirurgico_documento.h"

riesgo_quirurgico_documento::riesgo_quirurgico_documento()
{
}

void riesgo_quirurgico_documento::setProcedencia(string a){procedencia = a;}
void riesgo_quirurgico_documento::setSexo(string a){sexo = a;}
void riesgo_quirurgico_documento::setHTA(string a){HTA = a;}
void riesgo_quirurgico_documento::setASMA(string a){ASMA = a;}
void riesgo_quirurgico_documento::setTBC(string a){TBC = a;}
void riesgo_quirurgico_documento::setDM(string a){DM = a;}
void riesgo_quirurgico_documento::setMotivo_RQCV(string a){motivo_RQCV = a;}
void riesgo_quirurgico_documento::setPA(string a){PA = a;}
void riesgo_quirurgico_documento::setFC(string a){FC = a;}
void riesgo_quirurgico_documento::setCorazon(string a){corazon = a;}
void riesgo_quirurgico_documento::setPulmones(string a){pulmones = a;}
void riesgo_quirurgico_documento::setPulso_Periferico(string a){pulso_periferico = a;}
void riesgo_quirurgico_documento::setSistema_Venoso(string a){sistema_venoso = a;}
void riesgo_quirurgico_documento::setEKG(string a){EKG = a;}
void riesgo_quirurgico_documento::setFC1(string a){FC1 = a;}
void riesgo_quirurgico_documento::setP(string a){P = a;}
void riesgo_quirurgico_documento::setPR(string a){PR = a;}
void riesgo_quirurgico_documento::setQRC(string a){QRC = a;}
void riesgo_quirurgico_documento::setQT(string a){QT = a;}
void riesgo_quirurgico_documento::setST(string a){ST = a;}
void riesgo_quirurgico_documento::setOnda_T(string a){onda_T = a;}
void riesgo_quirurgico_documento::setAQRS(string a){AQRS = a;}
void riesgo_quirurgico_documento::setID(string a){ID = a;}
void riesgo_quirurgico_documento::setRQCV(string a){RQCV = a;}
void riesgo_quirurgico_documento::setSugerencias(string a){sugerencias = a; }
void riesgo_quirurgico_documento::setDate(string a){date = a;}

void riesgo_quirurgico_documento::setmedic(string a){ medic=a; }
void riesgo_quirurgico_documento::setlastname(string a){lastname=a;}
void riesgo_quirurgico_documento::setname(string a){name=a;}
void riesgo_quirurgico_documento::setservice(string a){service=a;}
void riesgo_quirurgico_documento::setclinicHistory(string a){clinicHistory=a;}
void riesgo_quirurgico_documento::setbed(string a){bed=a;}
void riesgo_quirurgico_documento::setage(int a){age=a;}


string riesgo_quirurgico_documento::getProcedencia(){return procedencia;}
string riesgo_quirurgico_documento::getSexo(){return sexo;}
string riesgo_quirurgico_documento::getHTA(){return HTA;}
string riesgo_quirurgico_documento::getASMA(){return ASMA;}
string riesgo_quirurgico_documento::getTBC(){return TBC;}
string riesgo_quirurgico_documento::getDM(){return DM;}
string riesgo_quirurgico_documento::getMotivo_RQCV(){return motivo_RQCV ;}
string riesgo_quirurgico_documento::getPA(){return PA;}
string riesgo_quirurgico_documento::getFC(){return FC;}
string riesgo_quirurgico_documento::getCorazon(){return corazon ;}
string riesgo_quirurgico_documento::getPulmones(){return pulmones ;}
string riesgo_quirurgico_documento::getPulso_Periferico(){return pulso_periferico ;}
string riesgo_quirurgico_documento::getSistema_Venoso(){return sistema_venoso;}
string riesgo_quirurgico_documento::getEKG(){return EKG;}
string riesgo_quirurgico_documento::getFC1(){return FC1;}
string riesgo_quirurgico_documento::getP(){return P;}
string riesgo_quirurgico_documento::getPR(){return PR;}
string riesgo_quirurgico_documento::getQRC(){return QRC;}
string riesgo_quirurgico_documento::getQT(){return QT;}
string riesgo_quirurgico_documento::getST(){return ST;}
string riesgo_quirurgico_documento::getOnda_T(){return onda_T;}
string riesgo_quirurgico_documento::getAQRS(){return AQRS;}
string riesgo_quirurgico_documento::getID(){return ID;}
string riesgo_quirurgico_documento::getRQCV(){return RQCV;}
string riesgo_quirurgico_documento::getSugerencias(){return sugerencias ;}
string riesgo_quirurgico_documento::getDate(){return date;}

string riesgo_quirurgico_documento::getmedic(){return medic;}
string riesgo_quirurgico_documento::getlastname(){return lastname;}
string riesgo_quirurgico_documento::getname(){return name;}
string riesgo_quirurgico_documento::getservice(){return service;}
string riesgo_quirurgico_documento::getclinicHistory(){return clinicHistory;}
string riesgo_quirurgico_documento::getbed(){return bed;}
int riesgo_quirurgico_documento::getage(){return age;}

void riesgo_quirurgico_documento::generatelatex()
{
    ofstream file_out("riesgo_quirurgico.tex");
    file_out<<"\\documentclass[10pt,a4paper]{article}"<<endl;
    file_out<<"\\usepackage[spanish]{babel}"<<endl;
    file_out<<"\\usepackage{anysize}"<<endl;
    file_out<<"\\usepackage[latin1]{inputenc}"<<endl;
    file_out<<"\\usepackage{graphicx}"<<endl;
    file_out<<"\\usepackage[light,math]{iwona}"<<endl;
    file_out<<"\\usepackage[T1]{fontenc}"<<endl;
    file_out<<"\\marginsize{1cm}{0cm}{2.55cm}{0cm} "<<endl;
    file_out<<"\\pagestyle{empty} "<<endl;
    file_out<<"\\begin{document} "<<endl;


    file_out<<"\\begin{center}"<<endl;
    file_out<<"\\begin{large}"<<endl;
    file_out<<"\\textbf{RIESGO QUIRURGICO CARDIO VASCULAR}"<<endl;
    file_out<<"\\end{large}"<<endl;

    file_out<<"\\scalebox{1.40}[1.55]{"<<endl;
    file_out<<"\\begin{tabular}{|p{2.8cm}p{2.8cm}p{2.8cm}p{2.8cm}|} "<<endl;
    file_out<<"\\hline "<<endl<<endl;
    file_out<<"\\multicolumn{2}{|l}{\\begin{minipage}[t]{5.5 cm}\\scriptsize{NOMBRE: "<<name<<"}\\end{minipage}}&\\multicolumn{2}{l|}{\\begin{minipage}[t]{5.5 cm}\\scriptsize{EDAD: "<<age<<"}\\end{minipage}}\\\\"<<endl;
    file_out<<"\\hline"<<endl;
    file_out<<"\\multicolumn{2}{|l}{\\begin{minipage}[t]{5.5 cm}\\scriptsize{PROCEDENCIA: "<<procedencia<<"}\\end{minipage}}&\\multicolumn{2}{l|}{\\begin{minipage}[t]{5.5 cm}\\scriptsize{SEXO: "<<sexo<<"}\\end{minipage}}\\\\"<<endl;
    file_out<<"\\hline"<<endl;
    file_out<<"\\multicolumn{1}{l}{\\scriptsize{" << "" <<"}}&&& \\multicolumn{1}{l}{ \\scriptsize{"<<""<<"}}\\\\"<<endl;
    file_out<<"\\multicolumn{1}{l}{\\scriptsize{\\textbf{ANTECEDENTES:}" << "" <<"}}&&& \\multicolumn{1}{l}{ \\scriptsize{"<<""<<"}}\\\\"<<endl;
    file_out<<"\\hline "<<endl;
    file_out<<"\\multicolumn{4}{|l|}{\\begin{minipage}[t]{12.5 cm}\\scriptsize{HTM: "<<HTA<<"}\\end{minipage}}\\\\"<<endl;
    file_out<<"\\hline"<<endl;
    file_out<<"\\multicolumn{4}{|l|}{\\begin{minipage}[t]{12.5 cm}\\scriptsize{ASMA: "<<ASMA<<"}\\end{minipage}}\\\\"<<endl;
    file_out<<"\\hline"<<endl;
    file_out<<"\\multicolumn{4}{|l|}{\\begin{minipage}[t]{12.5 cm}\\scriptsize{TBC: "<<TBC<<"}\\end{minipage}}\\\\"<<endl;
    file_out<<"\\hline"<<endl;
    file_out<<"\\multicolumn{4}{|l|}{\\begin{minipage}[t]{12.5 cm}\\scriptsize{DM: "<<DM<<"}\\end{minipage}}\\\\"<<endl;
    file_out<<"\\hline"<<endl;
    file_out<<"\\multicolumn{4}{|l|}{\\begin{minipage}[t]{12.5 cm}\\scriptsize{Motivo del RQCV: "<<motivo_RQCV<<"}\\end{minipage}}\\\\"<<endl;
    file_out<<"\\hline"<<endl;
    file_out<<"\\multicolumn{1}{l}{\\scriptsize{" << "" <<"}}&&& \\multicolumn{1}{l}{ \\scriptsize{"<<""<<"}}\\\\"<<endl;
    file_out<<"\\multicolumn{1}{l}{\\scriptsize{\\textbf{EXAMEN CL\\'INICO: }" << "" <<"}}&&& \\multicolumn{1}{l}{ \\scriptsize{"<<""<<"}}\\\\"<<endl;
    file_out<<"\\hline "<<endl;
    file_out<<"\\multicolumn{2}{|l}{ \\scriptsize{P.A.: "<<PA<<"} } & \\multicolumn{2}{l|}{ \\scriptsize{F.C.: "<<FC<<"}} \\\\"<<endl;
    file_out<<"\\hline"<<endl;
    file_out<<"\\multicolumn{4}{|l|}{\\begin{minipage}[t]{12.5 cm}\\scriptsize{Coraz\\'on: "<<corazon<<"}\\end{minipage}}\\\\"<<endl;
    file_out<<"\\hline"<<endl;
    file_out<<"\\multicolumn{4}{|l|}{\\begin{minipage}[t]{12.5 cm}\\scriptsize{PULMONES: "<<pulmones<<"}\\end{minipage}}\\\\"<<endl;
    file_out<<"\\hline"<<endl;
    file_out<<"\\multicolumn{4}{|l|}{\\begin{minipage}[t]{12.5 cm}\\scriptsize{PULSOS PERIF\\'ERICOS: "<<pulso_periferico<<"}\\end{minipage}}\\\\"<<endl;
    file_out<<"\\hline"<<endl;
    file_out<<"\\multicolumn{4}{|l|}{\\begin{minipage}[t]{12.5 cm}\\scriptsize{SISTEMA VENOSO: "<<sistema_venoso<<"}\\end{minipage}}\\\\"<<endl;
    file_out<<"\\hline"<<endl;
    file_out<<"\\multicolumn{2}{|l}{\\begin{minipage}[t]{5.5 cm}\\scriptsize{E.K.G.: "<<EKG<<"}\\end{minipage}}&\\multicolumn{2}{l|}{\\begin{minipage}[t]{5.5 cm}\\scriptsize{F.C.: "<<FC1<<"}\\end{minipage}}\\\\"<<endl;
    file_out<<"\\hline"<<endl;
    file_out<<"\\scriptsize{P:" << P <<"}&\\scriptsize{PR:" << PR <<"}&\\scriptsize{QRS:" << QRC <<"}&\\scriptsize{QT:"<<QT<<"}\\\\"<<endl;
    file_out<<"\\hline "<<endl;
    file_out<<"\\multicolumn{4}{|l|}{\\begin{minipage}[t]{12.5 cm}\\scriptsize{S.T.: "<<ST<<"}\\end{minipage}}\\\\"<<endl;
    file_out<<"\\hline"<<endl;
    file_out<<"\\multicolumn{4}{|l|}{\\begin{minipage}[t]{12.5 cm}\\scriptsize{ONDA T: "<<onda_T<<"}\\end{minipage}}\\\\"<<endl;
    file_out<<"\\hline"<<endl;
    file_out<<"\\multicolumn{4}{|l|}{\\begin{minipage}[t]{12.5 cm}\\scriptsize{AQRC: "<<AQRS<<"}\\end{minipage}}\\\\"<<endl;
    file_out<<"\\hline "<<endl;
    file_out<<"\\multicolumn{4}{|l|}{\\begin{minipage}[t]{12.5 cm}\\scriptsize{ID: "<<ID<<"}\\end{minipage}}\\\\"<<endl;
    file_out<<"\\hline "<<endl;
    file_out<<"\\multicolumn{4}{|l|}{\\begin{minipage}[t]{12.5 cm}\\scriptsize{R.Q.C.V.: "<<RQCV<<"}\\end{minipage}}\\\\"<<endl;
    file_out<<"\\hline "<<endl;
    file_out<<"\\multicolumn{4}{|l|}{\\begin{minipage}[t]{12.5 cm}\\scriptsize{SUGERENCIAS: "<<sugerencias<<"}\\end{minipage}}\\\\"<<endl;
    file_out<<"\\hline "<<endl;
    file_out<<"\\multicolumn{1}{l}{\\scriptsize{" << "" <<"}}&&& \\multicolumn{1}{l}{ \\scriptsize{"<<""<<"}}\\\\"<<endl;
    file_out<<"\\multicolumn{1}{l}{\\scriptsize{" << "" <<"}}&&& \\multicolumn{1}{l}{ \\scriptsize{"<<""<<"}}\\\\"<<endl;
    file_out<<"\\multicolumn{2}{l}{\\begin{minipage}[t]{5.5 cm}\\scriptsize{\\textbf{FECHA: }"<<date<<"}\\end{minipage}}&\\multicolumn{2}{l}{\\begin{minipage}[t]{5.5 cm}\\scriptsize{\\textbf{FIRMA: }"<<medic<<"}\\end{minipage}}\\\\"<<endl;
    file_out<<"\\end{tabular}}"<<endl<<endl;
    file_out<<"\\end{center}"<<endl;
    file_out<<"\\vspace{0.6cm}"<<endl;
    file_out<<"\\hspace{13cm}"<<endl;
    file_out<<"\\end{document}"<<endl;
    file_out.close();
    system("pdflatex riesgo_quirurgico.tex > pdfCompiling.txt & start riesgo_quirurgico.pdf");
}
