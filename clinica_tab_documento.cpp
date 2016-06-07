#include "clinica_tab_documento.h"

Clinica_Tab_Documento::Clinica_Tab_Documento()
{

}

string Clinica_Tab_Documento::getlastname(){return lastname;}
string Clinica_Tab_Documento::getname(){return name;}
string Clinica_Tab_Documento::getaddres(){return addres;}
string Clinica_Tab_Documento::getphone(){return phone;}
string Clinica_Tab_Documento::getdni(){return dni;}
string Clinica_Tab_Documento::getage(){return age;}
string Clinica_Tab_Documento::getmaritalstatus(){return maritalstatus;}
string Clinica_Tab_Documento::getocupation(){return ocupation;}
string Clinica_Tab_Documento::getpreviouSurgeries(){return previouSurgeries;}
string Clinica_Tab_Documento::getallergy(){return allergy;}
string Clinica_Tab_Documento::getprecedents(){return precedents;}
string Clinica_Tab_Documento::getactualmedication(){return actualmedication;}
vector< QString> Clinica_Tab_Documento::getdate(){return date;}
vector< QString> Clinica_Tab_Documento::getreason(){return reason;}

void Clinica_Tab_Documento:: setlastname(string a){lastname=a;}
void Clinica_Tab_Documento:: setname(string a){name=a;}
void Clinica_Tab_Documento:: setaddres(string a){addres=a;}
void Clinica_Tab_Documento:: setphone(string a){phone=a;}
void Clinica_Tab_Documento:: setdni(string a){dni=a;}
void Clinica_Tab_Documento:: setage(string a){age=a;}
void Clinica_Tab_Documento:: setmaritalstatus(string a){maritalstatus=a;}
void Clinica_Tab_Documento:: setocupation(string a){ocupation=a;}
void Clinica_Tab_Documento:: setpreviouSurgeries(string a){previouSurgeries=a;}
void Clinica_Tab_Documento:: setallergy(string a){allergy=a;}
void Clinica_Tab_Documento:: setprecedents(string a){precedents=a;}
void Clinica_Tab_Documento:: setactualmedication(string a){actualmedication=a;}
void Clinica_Tab_Documento:: setdate(vector< QString> a){date=a;}
void Clinica_Tab_Documento:: setreason(vector< QString> a){reason=a;}

void Clinica_Tab_Documento::generateLatex()
{
    ofstream file("fichaClinica.tex");
    file<<"\\documentclass[10pt,a4paper]{article}"<<endl;
    file<<"\\usepackage[spanish]{babel}"<<endl;
    file<<"\\usepackage{fancyhdr}"<<endl;
    file<<"\\usepackage{anysize}"<<endl;
    file<<"\\usepackage[latin1]{inputenc}"<<endl;
    file<<"\\usepackage{graphicx}"<<endl;
    file<<"\\usepackage[light,math]{iwona}"<<endl;
    file<<"\\usepackage[T1]{fontenc}"<<endl;
    file<<"\\usepackage{longtable}"<<endl;
    file<<"\\marginsize{1cm}{0cm}{1cm}{1cm}"<<endl;
    file<<"\\pagenumbering{arabic}"<<endl;
    file<<"\\pagestyle{empty}"<<endl;
    file<<"\\begin{document}"<<endl;
    file<<"\\begin{center}"<<endl;
    file<<"\\LARGE{\\textbf{FICHA CL\\'INICA}}"<<endl;
    file<<"\\end{center}"<<endl;
    file<<"\\scalebox{1.40}[1.55]{"<<endl;
    file<<"\\begin{tabular}{p{2.8cm}p{2.8cm}p{6.5cm}}"<<endl;
    file<<"\\multicolumn{2}{p{6cm}}{\\scriptsize{APELLIDOS: "<<lastname<<"}} & \\scriptsize{NOMBRES: "<<name<<"} \\\\"<<endl;
    file<<"\\multicolumn{3}{p{13cm}}{\\scriptsize{DIRECCION: "<<addres<<"}} \\\\"<<endl;
    file<<"\\scriptsize{TELF: "<<phone<<"} & \\scriptsize{DNI: "<<dni<<"} & \\scriptsize{EDAD: "<<age<<"} \\\\"<<endl;
    file<<"\\multicolumn{2}{p{6cm}}{\\scriptsize{ESTADO CIVIL: "<< maritalstatus<<"}} & \\scriptsize{OCUPACI\\'ON: "<<ocupation<<"} \\\\"<<endl;
    file<<"\\multicolumn{2}{p{6 cm}}{\\scriptsize{CIRUJIAS PREVIAS :"<<previouSurgeries<<"}} & \\scriptsize{AL\\'ERGIAS: "<<allergy<<"} \\\\"<<endl;
    file<<"\\multicolumn{3}{p{13 cm}}{\\scriptsize{ANTECEDENTES: "<<precedents<<"}} \\\\"<<endl;
    file<<"\\multicolumn{3}{p{13 cm}}{\\scriptsize{MEDICACI\\'ON ACTUAL: "<<actualmedication<<"}} \\\\"<<endl;
    file<<"\\end{tabular}}"<<endl;
    file<<"\\vspace{0.3cm}"<<endl;
    file<<"\\begin{center}"<<endl;
    file<<"\\LARGE{\\textbf{MOTIVO DE CONSULTA}}"<<endl;
    file<<"\\end{center}"<<endl;

    file<<"\\begin{center}"<<endl;
    file<<"\\begin{longtable}{ p{2cm}| p{14.5cm}}"<<endl;
    //PRIMERA PARTE DE LA TABLA

    file<<"\\hline"<<endl;
    file<<"\\endfirsthead"<<endl;
    file<<"\\textbf{FECHA} & \\textbf{MOTIVO DE CONSULTA}\\\\";
    file<<"\\hline"<<endl;
    file<<"\\endhead"<<endl;
    file<<"\\endfoot"<<endl;
    file<<"\\endlastfoot"<<endl;
    //INICIO DE CONTENIDO DE DATOS
    int size_v = date.size();
    for(int i=0; i<size_v; i++)
    {
        file<<date[i].toStdString()<<"&"<<reason[i].toStdString()<<"\\\\"<<endl;
        file<<"\\hline"<<endl;
    }
    file<<"\\end{longtable}"<<endl;
    file<<"\\end{center}"<<endl;
    file<<"\\end{document}"<<endl;
    file.close();
    system("pdflatex fichaClinica.tex > pdfCompiling.txt & start fichaClinica.pdf");

}
