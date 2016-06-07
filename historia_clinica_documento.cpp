#include "historia_clinica_documento.h"


historia_clinica_documento::historia_clinica_documento()
{
    name="Juan Alberto";
    lastname="Danko Antolovic";
    clinicHistory="12345";
    medic="Carlos arriaga Montesinos";
    service="Cirujia Estetica";
    clinicHistory="00-458-632";
    bed="0012";
   // principalsymptom = "The user interface, in the industrial design field of human–machine interaction, is the space where interaction between humans and machines occurs. The goal of interaction between a human and a machine at the user interface is effective operation and control of the machine, and feedback from the machine which aids the operator in making operational decisions. Examples of this broad concept of user interfaces include the interactive aspects of computer operating systems, hand tools, heavy machinery operator controls, and process controls. The design considerations applicable when creating user interfaces are related to or involve such disciplines as ergonomics and psychology.";
    currenthistorydisease = "Generally, the goal of human-machine interaction engineering is to produce a user interface which makes it easy, efficient, and enjoyable to operate a machine in the way which produces the desired result. This generally means that the operator needs to provide minimal input to achieve the desired output, and also that the machine minimizes undesired outputs to the human.";
}
void historia_clinica_documento::setprincipalsymptom(string a ){ principalsymptom =a;}
void historia_clinica_documento::setcurrenthistorydisease(string a) { currenthistorydisease=a;}
string historia_clinica_documento::getprincipalsymptom(){return principalsymptom;}
string historia_clinica_documento::getcurrenthistorydisease(){return currenthistorydisease;}
void historia_clinica_documento::setmedic(string a){ medic=a; }
void historia_clinica_documento::setlastname(string a){lastname=a;}
void historia_clinica_documento::setname(string a){name=a;}
void historia_clinica_documento::setservice(string a){service=a;}
void historia_clinica_documento::setclinicHistory(string a){clinicHistory=a;}
void historia_clinica_documento::setbed(string a){bed=a;}

void historia_clinica_documento::generateLatex()
{
    ofstream file_out("historiaClinica.tex");
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
    file_out<<"\\scalebox{1.4}[1.55]{"<<endl;
    file_out<<"\\begin{tabular}{|p{12.5cm}|}"<<endl;
    file_out<<"\\hline "<<endl;
    file_out<<"\\scriptsize{SINTOMA PRINCIPAL (DURACION) :}\\\\"<<endl;
    file_out<<"\\multicolumn{1}{|p{12.5cm}|}{\\scriptsize{"<< principalsymptom <<"}}\\\\ "<<endl;
    file_out<<"\\scriptsize{HISTORIA EMFERMEDAD ACTUAL:}\\\\"<<endl;
    file_out<<"\\multicolumn{1}{|p{12.5cm}|}{\\scriptsize{"<<currenthistorydisease <<"}}\\\\"<<endl;
    file_out<<"\\hline "<<endl;
    file_out<<"\\end{tabular}}"<<endl;
    file_out<<"\\vspace{0.6cm}"<<endl;
    file_out<<"\\begin{flushleft}"<<endl;
    file_out<<"\\begin{LARGE}"<<endl;
    file_out<<"\\textbf{HISTORIA CL\\'INICA}"<<endl;
    file_out<<"\\end{LARGE}"<<endl;
    file_out<<"\\end{flushleft}"<<endl;
    file_out<<"\\end{document}"<<endl;
    file_out.close();
    system("pdflatex historiaClinica.tex");
    system("historiaClinica.pdf");

}
