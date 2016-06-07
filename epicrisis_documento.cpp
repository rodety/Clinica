#include "epicrisis_documento.h"

epicrisis_documento::epicrisis_documento()
{
}

string epicrisis_documento::getmedic(){return medic;}
string epicrisis_documento::getlastname(){return lastname;}
string epicrisis_documento::getname(){return name;}
string epicrisis_documento::getservice(){return service;}
string epicrisis_documento::getclinicHistory(){return clinicHistory;}
string epicrisis_documento::getbed(){return bed;}

string epicrisis_documento::getDateIn(){return dateIn;}
string epicrisis_documento::getDateout(){return dateOut;}
string epicrisis_documento::getDayHospitalized(){return dayHopitalized;}
string epicrisis_documento::getConditionOut(){return conditionOut;}
string epicrisis_documento::getTextSummaryClinic(){return textSummaryClinic;}
string epicrisis_documento::getTextSummaryTestClinic(){return textSummaryTestClinic;}
string epicrisis_documento::getTextTestAux(){return textTestAux;}
string epicrisis_documento::getDiagnosisIn(){return diagnosisIn;}
string epicrisis_documento::getTreatment(){return treatment;}
string epicrisis_documento::getEvolution(){return evolution;}
string epicrisis_documento::getDiagnosisEnd(){return diagnosisEnd;}
string epicrisis_documento::getDirections(){return directions;}

void epicrisis_documento::setmedic(string a){ medic=a;}
void epicrisis_documento::setlastname(string a){ lastname=a;}
void epicrisis_documento::setname(string a){ name=a;}
void epicrisis_documento::setservice(string a){ service=a;}
void epicrisis_documento::setclinicHistory(string a){ clinicHistory=a;}
void epicrisis_documento::setbed(string a){ bed=a;}
void epicrisis_documento::setDateIn(string a){ dateIn=a;}
void epicrisis_documento::setDateout(string a){ dateOut=a;}
void epicrisis_documento::setDayHospitalized(string a){ dayHopitalized=a;}
void epicrisis_documento::setConditionOut(string a){ conditionOut=a;}
void epicrisis_documento::setTextSummaryClinic(string a){ textSummaryClinic=a;}
void epicrisis_documento::setTextSummaryTestClinic(string a){ textSummaryTestClinic=a;}
void epicrisis_documento::setTextTestAux(string a){ textTestAux=a;}
void epicrisis_documento::setDiagnosisIn(string a){ diagnosisIn=a;}
void epicrisis_documento::setTreatment(string a){ treatment=a;}
void epicrisis_documento::setEvolution(string a){ evolution=a;}
void epicrisis_documento::setDiagnosisEnd(string a){ diagnosisEnd=a;}
void epicrisis_documento::setDirections(string a){ directions=a;}
void epicrisis_documento::generateLatex()
{
    ofstream file_out("epicrisis.tex");
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

    //PRIMERA HOJA

   file_out<<"\\vspace{0.5cm}"<<endl;
   file_out<<"\\scalebox{1.40}[1.55]{"<<endl;
   file_out<<"\\begin{tabular}{|p{2.8cm}p{2.8cm}p{2.8cm}p{2.8cm}|} "<<endl;
   file_out<<"\\hline "<<endl<<endl;

   file_out<<"\\multicolumn{1}{|l}{\\scriptsize{FECHA DE INGRESO:" << dateIn <<"}}& \\multicolumn{2}{l}{ \\scriptsize{FECHA DE ALTA:"<<dateOut<<"}}& \\multicolumn{1}{l|}{ \\scriptsize{DIAS DE HOSPITALIZACION:"<<dayHopitalized <<"}}\\\\"<<endl;
   file_out<<"\\hline "<<endl;
   file_out<<"\\multicolumn{4}{|l|}{\\scriptsize{CONDICI\\'ON DE ALTA:}}\\\\"<<endl;

   if(conditionOut == "FALLECIDO")
   {
       file_out<<"\\multicolumn{1}{|l}{\\scriptsize{FALLECIDO (X)}}&\\multicolumn{1}{l}{\\scriptsize{SIN VARIACI\\'ON ( )}}&\\multicolumn{1}{l}{\\scriptsize{MEJORADO ( )}}&\\multicolumn{1}{l|}{\\scriptsize{CURADO ( )}}\\\\"<<endl;
   }
   else if(conditionOut == "SVARIACION")
   {
       file_out<<"\\multicolumn{1}{|l}{\\scriptsize{FALLECIDO ( )}}&\\multicolumn{1}{l}{\\scriptsize{SIN VARIACI\\'ON (X)}}&\\multicolumn{1}{l}{\\scriptsize{MEJORADO ( )}}&\\multicolumn{1}{l|}{\\scriptsize{CURADO ( )}}\\\\"<<endl;
   }
   else if(conditionOut == "MEJORADO")
   {
       file_out<<"\\multicolumn{1}{|l}{\\scriptsize{FALLECIDO ( )}}&\\multicolumn{1}{l}{\\scriptsize{SIN VARIACI\\'ON ( )}}&\\multicolumn{1}{l}{\\scriptsize{MEJORADO (X)}}&\\multicolumn{1}{l|}{\\scriptsize{CURADO ( )}}\\\\"<<endl;
   }
   else if(conditionOut == "CURADO")
   {
       file_out<<"\\multicolumn{1}{|l}{\\scriptsize{FALLECIDO (X)}}&\\multicolumn{1}{l}{\\scriptsize{SIN VARIACI\\'ON ( )}}&\\multicolumn{1}{l}{\\scriptsize{MEJORADO ( )}}&\\multicolumn{1}{l|}{\\scriptsize{CURADO (X)}}\\\\"<<endl;
   }
   else
   {
       file_out<<"\\multicolumn{1}{|l}{\\scriptsize{FALLECIDO ( )}}&\\multicolumn{1}{l}{\\scriptsize{SIN VARIACI\\'ON ( )}}&\\multicolumn{1}{l}{\\scriptsize{MEJORADO ( )}}&\\multicolumn{1}{l|}{\\scriptsize{CURADO ( )}}\\\\"<<endl;
   }
   file_out<<"\\hline "<<endl;
   file_out<<"\\multicolumn{4}{|l|}{\\scriptsize{RESUMEN HIA. CL\\'INICA:}}\\\\"<<endl;
   file_out<<"\\multicolumn{4}{|p{12.5cm}|}{\\scriptsize{"<<textSummaryClinic<<"}}\\\\ "<<endl;
   file_out<<"\\hline "<<endl;
   file_out<<"\\multicolumn{4}{|l|}{\\scriptsize{RESUMEN EX\\'AMEN CL\\'INICO :}}\\\\"<<endl;
   file_out<<"\\multicolumn{4}{|p{12.5cm}|}{\\scriptsize{"<<textSummaryTestClinic<<"}}\\\\ "<<endl;
   file_out<<"\\hline "<<endl;
   file_out<<"\\multicolumn{4}{|l|}{\\scriptsize{EX\\'AMENES AUXILIARES:}}\\\\"<<endl;
   file_out<<"\\multicolumn{4}{|p{12.5cm}|}{\\scriptsize{"<<textTestAux<<"}}\\\\ "<<endl;
   file_out<<"\\hline "<<endl;
   file_out<<"\\multicolumn{4}{|l|}{\\scriptsize{DIAGNOSTICO INGRESO:}}\\\\"<<endl;
   file_out<<"\\multicolumn{4}{|p{12.5cm}|}{\\scriptsize{"<<diagnosisIn<<"}}\\\\ "<<endl;
   file_out<<"\\hline "<<endl;
   file_out<<"\\multicolumn{4}{|l|}{\\scriptsize{TRATAMIENTO:}}\\\\"<<endl;
   file_out<<"\\multicolumn{4}{|p{12.5cm}|}{\\scriptsize{"<<treatment<<"}}\\\\ "<<endl;
   file_out<<"\\hline "<<endl;
   file_out<<"\\multicolumn{4}{|l|}{\\scriptsize{EVOLUCI\\'ON:}}\\\\"<<endl;
   file_out<<"\\multicolumn{4}{|p{12.5cm}|}{\\scriptsize{"<<evolution<<"}}\\\\ "<<endl;
   file_out<<"\\hline "<<endl;
   file_out<<"\\multicolumn{4}{|l|}{\\scriptsize{DIAGNOSTICO FINAL:}}\\\\"<<endl;
   file_out<<"\\multicolumn{4}{|p{12.5cm}|}{\\scriptsize{"<<diagnosisEnd<<"}}\\\\ "<<endl;
   file_out<<"\\hline "<<endl;
   file_out<<"\\multicolumn{4}{|l|}{\\scriptsize{INDICACIONES:}}\\\\"<<endl;
   file_out<<"\\multicolumn{4}{|p{12.5cm}|}{\\scriptsize{"<<directions<<"}}\\\\ "<<endl;
   file_out<<"\\hline "<<endl;
   file_out<<"\\end{tabular}}"<<endl;
   file_out<<"\\vspace{0.6cm}"<<endl;
   file_out<<"\\begin{flushleft}"<<endl;
   file_out<<"\\begin{LARGE}"<<endl;
   file_out<<"\\textbf{EPICRISIS}"<<endl;
   file_out<<"\\end{LARGE}"<<endl;
   file_out<<"\\end{flushleft}"<<endl;
   file_out<<"\\end{document}"<<endl;
   file_out.close();

   system("pdflatex epicrisis.tex > pdfCompiling.txt & start epicrisis.pdf");

}

