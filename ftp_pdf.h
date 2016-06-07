#ifndef FTP_PDF_H
#define FTP_PDF_H
#include"ftpwindow.h"
#include<QString>
#include<QDebug>
#include<QSqlQuery>


class ftp_pdf
{
public:
    ftp_pdf(QString);
    void uploadFile();
    void downloadFile();
    void createConexion();
    void setnombreCarpeta(QString);

private:
    FtpWindow *viaftp;
    QString fileName;
    QString carpeta;
};

#endif // FTP_PDF_H
