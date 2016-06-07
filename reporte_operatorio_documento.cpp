#include "reporte_operatorio_documento.h"


reporte_operatorio_documento::reporte_operatorio_documento()
{
}
string reporte_operatorio_documento::getcirujano(){return cirujano;}
string reporte_operatorio_documento::getfirstHelper(){return firstHelper;}
string reporte_operatorio_documento::getsecondHelper(){return secondHelper;}
string reporte_operatorio_documento::getanesthesiologist(){return anesthesiologist;}
string reporte_operatorio_documento::getinstrumentalist(){return instrumentalist;}
string reporte_operatorio_documento::getcirculating(){return circulating;}
string reporte_operatorio_documento::gettypeAnesthesia(){return typeAnesthesia;}
string reporte_operatorio_documento::getstartAnesthesia(){return startAnesthesia;}
string reporte_operatorio_documento::getendAnesthesia(){return endAnesthesia;}
string reporte_operatorio_documento::getcount(){return count;}
string reporte_operatorio_documento::getdrains(){return drains;}
string reporte_operatorio_documento::getdressings(){return dressings;}
string reporte_operatorio_documento::getother(){return other;}
string reporte_operatorio_documento::getdate(){return date;}
string reporte_operatorio_documento::getstartOperation(){return startOperation;}
string reporte_operatorio_documento::getendOperation(){return endOperation;}
//string reporte_operatorio_documento::getorder(){return order;}
string reporte_operatorio_documento::getdxPreOpe(){return dxPreOpe;}
string reporte_operatorio_documento::getdxPostOpe(){return dxPostOpe;}
string reporte_operatorio_documento::getprocedure(){return procedure;}
string reporte_operatorio_documento::getfind(){return find;}
string reporte_operatorio_documento::getfirm(){return firm;}
string reporte_operatorio_documento::getfathername(){return fathername;}
string reporte_operatorio_documento::getmothername(){return mothername;}
string reporte_operatorio_documento::getnames(){return names;}
string reporte_operatorio_documento::getnhcl(){return nhcl;}
string reporte_operatorio_documento::getbed(){return bed;}
string reporte_operatorio_documento::getmedic(){return medic;}
string reporte_operatorio_documento::getagreement(){return agreement;}

void reporte_operatorio_documento::setcirujano(string a){cirujano=a;}
void reporte_operatorio_documento::setfirstHelper(string a){firstHelper =a;}
void reporte_operatorio_documento::setsecondHelper(string a){secondHelper =a;}
void reporte_operatorio_documento::setanesthesiologist(string a){anesthesiologist =a;}
void reporte_operatorio_documento::setinstrumentalist(string a){instrumentalist =a;}
void reporte_operatorio_documento::setcirculating(string a){circulating =a;}
void reporte_operatorio_documento::settypeAnesthesia(string a){typeAnesthesia =a;}
void reporte_operatorio_documento::setstartAnesthesia(string a){startAnesthesia =a;}
void reporte_operatorio_documento::setendAnesthesia(string a){endAnesthesia =a;}
void reporte_operatorio_documento::setcount(string a){count =a;}
void reporte_operatorio_documento::setdrains(string a){drains=a;}
void reporte_operatorio_documento::setdressings(string a){dressings =a;}
void reporte_operatorio_documento::setother(string a){other=a;}
void reporte_operatorio_documento::setdate(string a){date=a;}
void reporte_operatorio_documento::setstartOperation(string a){startOperation=a;}
void reporte_operatorio_documento::setendOperation(string a){ endOperation=a;}
//void reporte_operatorio_documento::setorder(string a){ order=a;}
void reporte_operatorio_documento::setdxPreOpe(string a){dxPreOpe=a;}
void reporte_operatorio_documento::setdxPostOpe(string a){dxPostOpe=a;}
void reporte_operatorio_documento::setprocedure(string a){procedure=a;}
void reporte_operatorio_documento::setfind(string a){find =a;}
void reporte_operatorio_documento::setfirm(string a){ firm =a;}
void reporte_operatorio_documento::setfathername(string a){fathername =a;}
void reporte_operatorio_documento::setmothername(string a){ mothername=a;}
void reporte_operatorio_documento::setnames(string a){names=a;}
void reporte_operatorio_documento::setnhcl(string a){nhcl=a;}
void reporte_operatorio_documento::setbed(string a){bed=a;}
void reporte_operatorio_documento::setmedic(string a){medic=a;}
void reporte_operatorio_documento::setagreement(string a){agreement=a;}
void reporte_operatorio_documento::generateLatex()
{
    ofstream file("reporteOperatorio.tex");
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
    file<<"\\vspace*{2cm}"<<endl;
    file<<"\\hspace{11cm}"<<endl;
    file<<"\\begin{LARGE}"<<endl;
    file<<"REPORTE OPERATORIO"<<endl;
    file<<"\\end{LARGE}"<<endl;
    file<<"\\vspace{1cm}"<<endl;
    file<<endl;
    file<<"\\scalebox{1.4}[1.55]{"<<endl;
    file<<"\\begin{tabular}{p{2.8cm}p{2.8cm}p{2.8cm}p{2.8cm}}"<<endl;
    file<<"\\multicolumn{2}{l}{\\begin{minipage}[t]{5.5 cm}\\scriptsize{CIRUJANO: "<<cirujano<<"}\\end{minipage}}&\\multicolumn{2}{l}{\\begin{minipage}[t]{5.5 cm}\\scriptsize{1er AYUDANTE: "<<firstHelper<<"}\\end{minipage}}\\\\"<<endl;
    file<<"\\multicolumn{2}{l}{\\begin{minipage}[t]{5.5 cm}\\scriptsize{2do AYUDANTE: "<<secondHelper<<"}\\end{minipage}}&\\multicolumn{2}{l}{\\begin{minipage}[t]{5.5 cm}\\scriptsize{ANESTESI\\'OLOGO: "<<anesthesiologist<<"}\\end{minipage}}\\\\"<<endl;
    file<<"\\multicolumn{2}{l}{\\begin{minipage}[t]{5.5 cm}\\scriptsize{INSTRUMENTISTA: "<<instrumentalist<<"}\\end{minipage}}&\\multicolumn{2}{l}{\\begin{minipage}[t]{5.5 cm}\\scriptsize{CIRCULANTE: "<<circulating<<"}\\end{minipage}}\\\\"<<endl;
    file<<"\\multicolumn{2}{l}{\\begin{minipage}[t]{5.5 cm}\\scriptsize{TIPO DE ANESTESIA: "<< typeAnesthesia <<"}\\end{minipage}} & \\scriptsize{INICIO ANESTESIA: "<< startAnesthesia<<"} & \\scriptsize{FIN ANESTESIA: "<< endAnesthesia<<"}\\\\"<<endl;
    file<<"\\scriptsize{CUENTA: "<<count<<"} & \\scriptsize{DRENES: "<< drains<<"} & \\scriptsize{AP\\'OSITOS: " << dressings <<"} &  \\scriptsize{OTROS: "<< other<<"} \\\\"<<endl;
    file<<"\\multicolumn{2}{l}{\\begin{minipage}[t]{5.5 cm}\\scriptsize{FECHA: "<< date <<"}\\end{minipage}} & \\scriptsize{INICIO OP: "<< startOperation<<"} & \\scriptsize{FIN OP: "<<endOperation<<"} \\\\"<<endl;
    file<<"\\end{tabular}}"<<endl;
    file<<endl;
    file<<"\\vspace{0.5cm}"<<endl;
    file<<"\\scalebox{1.4}[1.55]{"<<endl;
    file<<"\\begin{tabular}{|p{2.8cm}|p{2.8cm}p{2.8cm}p{2.8cm}|}"<<endl;
    file<<"\\hline"<<endl;
    file<<"\\textbf{ORDEN} & \\multicolumn{3}{|l|}{"<< ""<<"}\\\\"<<endl;
    file<<"\\textbf{DX Pre. Op.: }&\\multicolumn{3}{l|}{\\begin{minipage}[t]{9 cm}\\scriptsize{"<< dxPreOpe<<"}\\end{minipage}}\\\\"<<endl;
    file<<"\\textbf{DX Post Op.: }&\\multicolumn{3}{l|}{\\begin{minipage}[t]{9 cm}\\scriptsize{"<< dxPostOpe<<"}\\end{minipage}}\\\\"<<endl;
    file<<"\\textbf{Procedimiento: }&\\multicolumn{3}{l|}{\\begin{minipage}[t]{9 cm}\\scriptsize{"<< procedure<<"}\\end{minipage}}\\\\"<<endl;
    file<<"\\textbf{Hallazgo: }&\\multicolumn{3}{l|}{\\begin{minipage}[t]{9 cm}\\scriptsize{"<< find<<"}\\end{minipage}}\\\\"<<endl;
    file<<"\\textbf{Firma: }&\\multicolumn{3}{l|}{\\begin{minipage}[t]{9 cm}\\scriptsize{"<< firm<<"}\\end{minipage}}\\\\"<<endl;
    file<<"\\hline"<<endl;
    //MODIFICAR N.H.CL.
    file<<"\\scriptsize{\\textbf{Apellido Paterno: }"<< fathername<<"} &\\scriptsize{\\textbf{Apellido Materno: }" <<mothername <<"}&\\scriptsize{\\textbf{Nombres: }"<< names<<"}&\\scriptsize{\\textbf{Nro Hist.Cl.:}"<< nhcl<<"}\\\\"<<endl;
    file<<"\\hline"<<endl;
    file<<"\\scriptsize{\\textbf{Cama: }"<<bed<<"}& \\multicolumn{2}{l}{\\begin{minipage}[t]{5.5 cm}\\scriptsize{\\textbf{M\\'edico Tratante: }"<< medic<<"}\\end{minipage}} &\\scriptsize{\\textbf{Convenio: }"<< agreement<<"}\\\\"<<endl;
    file<<endl;
    file<<"\\hline"<<endl;
    file<<"\\end{tabular}}"<<endl;
    file<<"\\end{document}"<<endl;
    file.close();
    system("pdflatex reporteOperatorio.tex > pdfCompiling.txt & start reporteOperatorio.pdf");

}
