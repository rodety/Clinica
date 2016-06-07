#include "antecedentes_documento.h"


antecedentes_documento::antecedentes_documento()
{

    name="Juan Alberto";
    lastname="Danko Antolovic";
    //clinicHistory="12345";
    medic="Carlos arriaga Montesinos";
    service="Cirujia Estetica";
    clinicHistory="00-458-632";
    bed="0012";
    age= "19";
    datebirth="12/02/1999";
    admission="03/12/12";
    sex="masculino";
    maritalStatus="casado";
    ocupation="abogado";
    personalprecedent="FFTW is a library of C functions which compute discrete Fourier transforms. The library is fairly comprehensive: it computes complex and real Fourier transforms in any number of dimensions, and it has single-precision and double-precision forms. FFTW was first developed for Unix, but a Windows implementation is available as well. It is distributed as free software, under GNU General Public License.";
    allergy="FFTW utilizes the so-called Fast Fourier algorithm, which can improve the speed of the computation, dependent upon the number of input data points. This document demonstrates how to use FFTW in your program, and illustrates the concepts behind FFTW, by guiding you through a typical example. A comprehensive manual and installation instructions can be found at the FFTW web site:";
    lastMenstruation= "--";
    catamRegime="--";
    tabaco=false;
    alcohol=false;
    currentMedication="One property of the Fourier transformation that is very useful in graphics and imaging is known as the convolution theorem. Technically, a convolution of two functions is an integral of their product, where one function is displaced relative to the other. ";
    operationDateSite="At the end of the calculation, we free up the memory that was taken up by the Fourier transform:";
    relativeprecedent="There are many good descriptions of the Fourier transformation in the literature. Here are some references, to help you become familiar with the topic:";
    observation="Once you have FFTW installed on your system, link to the library file (fftw3,  or whatever variation applies to your particular installation), and include the usual header file in your code:";
}
string antecedentes_documento::getage(){return age;}
string antecedentes_documento::getdatebirth(){return datebirth;}
string antecedentes_documento::getadmission(){return admission;}
string antecedentes_documento::getsex(){ return sex;}
string antecedentes_documento::getmaritalStatus(){ return maritalStatus;}
string antecedentes_documento::getocupation(){return ocupation;}
string antecedentes_documento::getpersonalprecedent(){return personalprecedent;}
string antecedentes_documento::getallergy(){ return allergy;}
string antecedentes_documento::getlastMenstruation(){ return lastMenstruation;}
string antecedentes_documento::getcatamRegime(){return catamRegime;}
bool antecedentes_documento::getTabaco(){return tabaco;}
bool antecedentes_documento::getAlcohol(){return alcohol;}
string antecedentes_documento::getcurrentMedication(){return currentMedication;}
string antecedentes_documento::getoperationDateSite(){return operationDateSite;}
string antecedentes_documento::getrelativeprecedent(){return relativeprecedent;}
string antecedentes_documento::getobservation(){return observation;}

void antecedentes_documento::setage(string a){ age=a ;}
void antecedentes_documento::setdatebirth(string a){ datebirth=a;}
void antecedentes_documento::setadmission(string a){ admission=a;}
void antecedentes_documento::setsex(string a){sex=a;}
void antecedentes_documento::setmaritalStatus(string a){maritalStatus=a;}
void antecedentes_documento::setocupation(string a){ocupation=a;}
void antecedentes_documento::setpersonalprecedent(string a){personalprecedent=a;}
void antecedentes_documento::setallergy(string a){allergy=a;}
void antecedentes_documento::setlastMenstruation(string a){lastMenstruation=a;}
void antecedentes_documento::setcatamRegime(string a){catamRegime=a;}

void antecedentes_documento::setTabaco(bool a){tabaco=a;}
void antecedentes_documento::setAlcohol(bool a){alcohol=a;}

void antecedentes_documento::setcurrentMedication(string a){currentMedication=a;}
void antecedentes_documento::setoperationDateSite(string a){operationDateSite=a;}
void antecedentes_documento::setrelativeprecedent(string a){relativeprecedent=a;}
void antecedentes_documento::setobservation(string a){observation=a;}
void antecedentes_documento::setmedic(string a){ medic=a; }
void antecedentes_documento::setlastname(string a){lastname=a;}
void antecedentes_documento::setname(string a){name=a;}
void antecedentes_documento::setservice(string a){service=a;}
void antecedentes_documento::setclinicHistory(string a){clinicHistory=a;}
void antecedentes_documento::setbed(string a){bed=a;}


void antecedentes_documento::generatelatex()
{
    ofstream file_out("antecedentes.tex");
    file_out<<"\\documentclass[10pt,a4paper]{article}"<<endl;
    file_out<<"\\usepackage[spanish]{babel}"<<endl;
    file_out<<"\\usepackage{anysize}"<<endl;
    file_out<<"\\usepackage[latin1]{inputenc}"<<endl;
    file_out<<"\\usepackage{graphicx}"<<endl;
    file_out<<"\\usepackage[light,math]{iwona}"<<endl;
    file_out<<"\\usepackage[T1]{fontenc}"<<endl;
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
   file_out<<"\\vspace{0.5cm}"<<endl;
   file_out<<"\\scalebox{1.40}[1.55]{"<<endl;
   file_out<<"\\begin{tabular}{|p{2cm}p{2cm}p{3cm}p{2cm}|} "<<endl;
   file_out<<"\\hline "<<endl;
   file_out<<"\\multicolumn{1}{|l}{\\scriptsize{EDAD: " << age <<"}}& \\multicolumn{2}{l}{ \\scriptsize{FECHA DE NACIMIENTO: "<<datebirth<<"}}& \\multicolumn{1}{l|}{ \\scriptsize{FECHA DE INGRESO: "<<admission <<"}}\\\\"<<endl;
   file_out<<"\\hline "<<endl;
   file_out<<"\\multicolumn{1}{|l}{\\scriptsize{SEXO: "<< sex<<"}}& \\multicolumn{1}{c}{ \\scriptsize{ESTADO CIVIL: "<<maritalStatus <<"}}& \\multicolumn{2}{p{6cm}|}{ \\scriptsize{OCUPACI\\'ON: "<< ocupation<<"}}\\\\  "<<endl;
   file_out<<"\\hline "<<endl;
   file_out<<"\\multicolumn{4}{|l|}{\\scriptsize{ANTECEDENTES PATOL\\'OGICOS PERSONALES:}}\\\\"<<endl;
   file_out<<"\\multicolumn{4}{|p{12.5cm}|}{\\scriptsize{"<<personalprecedent<<"}}\\\\ "<<endl;
   file_out<<" & && \\\\"<<endl;
   file_out<<"\\hline "<<endl;
   file_out<<"\\multicolumn{4}{|l|}{\\scriptsize{ALERGIAS:}}\\\\ "<<endl;
   file_out<<"\\multicolumn{4}{|p{12.5cm}|}{\\scriptsize{"<<allergy<<"}}\\\\ "<<endl;
   file_out<<"\\hline "<<endl;
   file_out<<"\\multicolumn{4}{|l|}{\\scriptsize{FECHA DE \\'ULTIMA MENSTRUACI\\'ON: "<<lastMenstruation<<"}}\\\\ "<<endl;
   file_out<<"\\hline "<<endl;
   file_out<<"\\multicolumn{4}{|l|}{\\scriptsize{R\\'EGIMEN CATAMENIAL: "<< catamRegime<<"}}\\\\"<<endl;
   file_out<<"\\hline "<<endl;
   if(tabaco&&alcohol)
   {
       file_out<<"\\multicolumn{1}{|l}{\\scriptsize{H\\'ABITOS NOCIVOS:"<<"}}& \\multicolumn{1}{l}{\\scriptsize{ALCOHOL(X)}}&\\multicolumn{2}{l|}{\\scriptsize{TABACO(X)}}\\\\"<<endl;
   }
   else
   {
       if(tabaco)
       {
           file_out<<"\\multicolumn{1}{|l}{\\scriptsize{H\\'ABITOS NOCIVOS:"<<"}}& \\multicolumn{1}{l}{\\scriptsize{ALCOHOL( )}}&\\multicolumn{2}{l|}{\\scriptsize{TABACO(X)}}\\\\"<<endl;
       }
       else
       {
           file_out<<"\\multicolumn{1}{|l}{\\scriptsize{H\\'ABITOS NOCIVOS:"<<"}}& \\multicolumn{1}{l}{\\scriptsize{ALCOHOL(X)}}&\\multicolumn{2}{l|}{\\scriptsize{TABACO( )}}\\\\"<<endl;
       }
   }   
   file_out<<"\\hline "<<endl;
   file_out<<"\\multicolumn{4}{|l|}{\\scriptsize{MEDICACI\\'ON ACTUAL:}}\\\\"<<endl;
   file_out<<"\\multicolumn{4}{|p{12.5cm}|}{\\scriptsize{"<< currentMedication <<"}}\\\\ "<<endl;
   file_out<<"\\hline "<<endl;
   file_out<<"\\multicolumn{4}{|l|}{\\scriptsize{OPERACION (FECHA, HOSPITAL): }}\\\\"<<endl;
   file_out<<"\\multicolumn{4}{|p{12.5cm}|}{\\scriptsize{"<<operationDateSite<<"}}\\\\ "<<endl;
   file_out<<"\\hline "<<endl;
   file_out<<"\\multicolumn{4}{|l|}{\\scriptsize{ANTECEDENTES PATOL\\'OGICOS FAMILIARES:}}\\\\"<<endl;
   file_out<<"\\multicolumn{4}{|p{12.5cm}|}{\\scriptsize{"<< relativeprecedent<<"}}\\\\ "<<endl;
   file_out<<"\\hline "<<endl;
   file_out<<"\\multicolumn{4}{|l|}{\\scriptsize{OBSERVACIONES:}}\\\\"<<endl;
   file_out<<"\\multicolumn{4}{|p{12.5cm}|}{\\scriptsize{"<<observation<<"}}\\\\ "<<endl;
   file_out<<"\\hline "<<endl;
   file_out<<"\\end{tabular}}"<<endl;
   file_out<<"\\vspace{0.6cm}"<<endl;
   file_out<<"\\hspace{13cm}"<<endl;
   file_out<<"\\begin{flushleft}"<<endl;
   file_out<<"\\begin{LARGE}"<<endl;
   file_out<<"\\textbf{ANTECEDENTES}"<<endl;
   file_out<<"\\end{LARGE}"<<endl;
   file_out<<"\\end{flushleft}"<<endl;
   file_out<<"\\end{document}"<<endl;
   file_out.close();

   system("pdflatex antecedentes.tex > pdfCompiling.txt & start antecedentes.pdf");
}
