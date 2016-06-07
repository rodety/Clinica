#include "terapeutica_medica_documento.h"
#include<iostream>
#include <fstream>
#include <cstdlib>

using namespace std;
Terapeutica_Medica_Documento::Terapeutica_Medica_Documento()
{
}
void Terapeutica_Medica_Documento::setmedic(string a){ medic=a; }
void Terapeutica_Medica_Documento::setlastname(string a){lastname=a;}
void Terapeutica_Medica_Documento::setname(string a){name=a;}
void Terapeutica_Medica_Documento::setservice(string a){service=a;}
void Terapeutica_Medica_Documento::setclinicHistory(string a){clinicHistory=a;}
void Terapeutica_Medica_Documento::setbed(string a){bed=a;}

void Terapeutica_Medica_Documento::setDateStart(vector<QString>vec){dateStart = vec;}
void Terapeutica_Medica_Documento::setHourStart(vector<QString>vec){hourStart = vec;}
void Terapeutica_Medica_Documento::setTerapeutica(vector<QString>vec){terapeutica  = vec;}
void Terapeutica_Medica_Documento::setdateEnd(vector<QString>vec){dateEnd = vec;}
void Terapeutica_Medica_Documento::setHourEnd(vector<QString>vec){hourEnd = vec;}
vector<QString> Terapeutica_Medica_Documento::getDateStart(){return dateStart;}
vector<QString> Terapeutica_Medica_Documento::getHourStart(){return hourStart;}
vector<QString> Terapeutica_Medica_Documento::getTerapeutica(){return terapeutica;}
vector<QString> Terapeutica_Medica_Documento::getDateEnd(){return dateEnd;}
vector<QString> Terapeutica_Medica_Documento::getHourEnd(){return hourEnd;}

void Terapeutica_Medica_Documento::generatelatex()
{
    ofstream file_out("terapeutica.tex");
    file_out<<"\\documentclass[10pt,a4paper]{article}"<<endl;
    file_out<<"\\usepackage[spanish]{babel}"<<endl;
    file_out<<"\\usepackage{anysize}"<<endl;
    file_out<<"\\usepackage[latin1]{inputenc}"<<endl;
    file_out<<"\\usepackage{graphicx}"<<endl;
    file_out<<"\\usepackage[light,math]{iwona}"<<endl;
    file_out<<"\\usepackage[T1]{fontenc}"<<endl;
    file_out<<"\\usepackage{longtable}"<<endl;
    file_out<<"\\marginsize{1cm}{0cm}{0cm}{0cm} "<<endl;
    file_out<<"\\pagestyle{empty} "<<endl;
    file_out<<"\\begin{document} "<<endl;
    file_out<<"\\begin{minipage}{10cm}"<<endl;
    file_out<<"\\end{minipage}"<<endl;
    file_out<<"\\hfill"<<endl;
    //MEMBRETE
    file_out<<"\\begin{minipage}{10cm}"<<endl;
    file_out<<"\\begin{flushleft}"<<endl;
    file_out<<"\\scalebox{1.4}[1.5]{"<<endl;
    file_out<<"\\begin{tabular}{|p{3cm}p{2.3cm}|}"<<endl;
    file_out<<"\\hline "<<endl;
    file_out<<"\\multicolumn{2}{|l|}{\\scriptsize{\\textbf{PACIENTE}}}\\\\"<<endl;
    file_out<<"\\multicolumn{2}{|p{5.3cm}|}{\\scriptsize{Apellidos: "<<lastname<<"}}\\\\ "<<endl;
    file_out<<"\\multicolumn{2}{|p{5.3cm}|}{\\scriptsize{Nombres: "<<name<<"}}\\\\ "<<endl;
    file_out<<"\\multicolumn{2}{|p{5.3cm}|}{\\scriptsize{M\\'edico Tratante: "<<medic<<"}}\\\\ "<<endl;
    file_out<<"\\hline "<<endl;
    file_out<<"\\multicolumn{2}{|p{5.3cm}|}{\\scriptsize{Servicio: " << service<<"}}\\\\"<<endl;
    file_out<<"\\hline "<<endl;
    file_out<<"\\scriptsize{Historia Cl\\'inica: "<<clinicHistory<<"}&\\scriptsize{Cama: "<<bed<<"} \\\\ "<<endl;
    file_out<<"\\hline "<<endl;
    file_out<<"\\end{tabular}}"<<endl;
    file_out<<"\\end{flushleft}"<<endl;
    file_out<<"\\end{minipage}"<<endl<<endl;


    //CUERPO
    file_out<<"\\vspace{0.3cm}"<<endl;
    file_out<<"\\begin{center}"<<endl;
    file_out<<"\\LARGE{\\textbf{TERAPEUTICA MEDICA}}"<<endl;
    file_out<<"\\end{center}"<<endl;

    file_out<<"\\begin{center}"<<endl;
    file_out<<"\\begin{longtable}{ |p{2cm}| p{2cm}| p{8cm}| p{2cm}| p{2cm}|}"<<endl;
    //PRIMERA PARTE DE LA TABLA

    file_out<<"\\hline"<<endl;
    file_out<<"\\textbf{F. INICIO} & \\textbf{H. INICIO}& \\textbf{TERAPEUTICA}& \\textbf{F. FINAL}& \\textbf{H. FINAL}\\\\";
    file_out<<"\\endfirsthead"<<endl;
    file_out<<"\\hline"<<endl;
    file_out<<"\\textbf{F. INICIO} & \\textbf{H. INICIO}& \\textbf{TERAPEUTICA}& \\textbf{F. FINAL}& \\textbf{H. FINAL}\\\\";
    file_out<<"\\hline"<<endl;
    file_out<<"\\endhead"<<endl;
    file_out<<"\\endfoot"<<endl;
    file_out<<"\\endlastfoot"<<endl;
    file_out<<"\\hline"<<endl;
    //INICIO DE CONTENIDO DE DATOS
    int size_v = terapeutica.size();
    for(int i=0; i<size_v; i++)
    {
        file_out<<dateStart[i].toStdString()<<"&"<<hourStart[i].toStdString()<<"&"<<terapeutica[i].toStdString()<<"&"<<dateEnd[i].toStdString()<<"&"<<hourEnd[i].toStdString()<<"\\\\"<<endl;
        file_out<<"\\hline"<<endl;
    }
    file_out<<"\\end{longtable}"<<endl;
    file_out<<"\\end{center}"<<endl;
    file_out<<"\\end{document}"<<endl;
    file_out.close();
    system("pdflatex terapeutica.tex > pdfCompiling.txt & start terapeutica.pdf");

}
