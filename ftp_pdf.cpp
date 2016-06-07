#include "ftp_pdf.h"
#include <QtGui>
#include <QFileDialog>
#include <QMessageBox>

ftp_pdf::ftp_pdf(QString file)
{
    fileName = file;
    viaftp = new FtpWindow;
    viaftp->setnombreCarpeta(fileName);
}
void ftp_pdf::uploadFile()
{
    //QString fileName = QFileDialog::getOpenFileName(this,tr("Open File"), QDir::currentPath());

    if(fileName.endsWith(".JPG") == false)
    {
       /*QMessageBox::information(this, tr("FTP"),
                                               tr("El siguiente no es un archivo soportado %1 in "
                                                  "En el software.")
                                               .arg(fileName));*/
        return;
    }
    viaftp->setnombreFile(fileName);
    viaftp->subirfile();

}
void ftp_pdf::downloadFile()
{
    QSqlQuery query;
    query.exec("select imagen_pk from e_imagen where url = "+fileName);

    while(query.next())
    {
        viaftp->setnombreFile(query.value(0).toString()+".JPG");
        viaftp->downloadFile();
        /*QMessageBox::information(this, tr("Descarga"),
                                 tr("Descargo Correctamente %1 en el actual directorio.")
                                 .arg(query.value(0).toString()+".JPG"));*/

    }
}
void ftp_pdf::createConexion()
{

}
