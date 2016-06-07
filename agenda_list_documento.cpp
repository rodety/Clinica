#include "agenda_list_documento.h"
#include<QString>

agenda_list_documento::agenda_list_documento()
{
}
void agenda_list_documento::generateLatex()
{
      ofstream file("listaTareas.tex");
      file<<"\\documentclass[10pt,a4paper]{article}"<<endl;
      file<<"\\usepackage[spanish]{babel}"<<endl;
      file<<"\\usepackage{fancyhdr}"<<endl;
      file<<"\\usepackage{anysize}"<<endl;
      file<<"\\usepackage[latin1]{inputenc}"<<endl;
      file<<"\\usepackage{graphicx}"<<endl;
      file<<"\\usepackage[light,math]{iwona}"<<endl;
      file<<"\\usepackage[T1]{fontenc}"<<endl;
      file<<"\\usepackage{longtable}"<<endl;
      file<<"\\marginsize{1cm}{0cm}{0cm}{0cm}"<<endl;
      file<<"\\pagenumbering{arabic}"<<endl;
      file<<"\\pagestyle{empty}"<<endl;
      file<<"\\begin{document}"<<endl;
      file<<"\\begin{center}"<<endl;
      file<<"\\small{\\textbf{ "<<company.toStdString()<<" - "<<date.toStdString()<<"}}\\\\"<<endl;
      file<<"\\end{center}"<<endl;



      file<<"\\begin{center}"<<endl;
      file<<"\\begin{longtable}{ | p{1.2cm}| p{4cm}| p{4cm}| p{1cm}| p{3cm} | p{3cm}|}"<<endl;
      //PRIMERA PARTE DE LA TABLA
      //file<<"\\hline"<<endl;
      file<<"\\endfirsthead"<<endl;
      //file<<"\\hline"<<endl;
      //file<<"\\hline"<<endl;
      file<<"\\endhead"<<endl;
      file<<"\\endfoot"<<endl;
      file<<"\\endlastfoot"<<endl;
      //INICIO DE CONTENIDO DE DATOS
      file<<"\\hline"<<endl;
      file<<"\\textbf{HORA} & \\textbf{NOMBRE} & \\textbf{DESCRIPCI\\'ON} & \\textbf{FICHA} & \\textbf{TEL\\'EFONO} & \\textbf{OBSERVACIONES}\\\\";
      file<<"\\hline"<<endl;
      query.prepare("SELECT hora,nombre,descripcion,ficha,telefono FROM e_agenda WHERE fecha='"+date+"' ORDER BY hora");
      //qDebug()<<"DNI To COMPARE"<<dniEmploye[i].toStdString();
      query.exec();
      QString HORA,NOMBRE,DESCRIPCION,FICHA,TELEFONO;
      while(query.next())
          {
              HORA = query.value(0).toString();
              NOMBRE = query.value(1).toString();
              DESCRIPCION = query.value(2).toString();
              FICHA = query.value(3).toString();
              TELEFONO = query.value(4).toString();
              file<<HORA.toStdString()<<"&"<<NOMBRE.toStdString()<<"&"<<DESCRIPCION.toStdString()<<"&"<<FICHA.toStdString()<<"&"<<TELEFONO.toStdString()<<"&"<<"\\\\"<<endl;
              file<<"\\hline"<<endl;              
          }
      file<<"\\end{longtable}"<<endl;
      file<<"\\end{center}"<<endl;
      file<<"\\end{document}"<<endl;
      file.close();
      system("pdflatex listaTareas.tex > pdfCompiling.txt & start listaTareas.pdf");

}
