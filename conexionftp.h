#ifndef CONEXIONFTP_H
#define CONEXIONFTP_H
#include<QString>
#include<QObject>
#include<QFtp>
#include "ftpconfigprogram.h"
#include <QFile>
#include <QProgressDialog>
#include <QtNetwork>


class Conexionftp:public QWidget
{
    Q_OBJECT
public:
    static Conexionftp* Instance();
    ~Conexionftp();
    void connect();
    void setHost(QString val){ftp_host = val;}
    void setUser(QString val){ftp_user = val;}
    void setPass(QString val){ftp_pass = val;}
    void setPort(QString val){ftp_port = val;}

    QString getHost( ){return ftp_host;}
    QString getUser( ){return ftp_user;}
    QString getPass( ){return ftp_pass;}
    QString getPort( ){return ftp_port;}
    void uploadFile(QString route, QString name);
    void downloadFile(QString name);
    void closeConexion();
    void cdfolder(QString name);
protected:
    Conexionftp();
public slots:
    void commandfinish(int, bool error);
    void updateDataTransferProgress(qint64 readBytes,qint64 totalBytes);
    void stateChange(int estado);
    void enableConnectButton();
signals:
    void conexionfinished();
    void putcorrected();
    void puterror(QString);
    void conexionestablished();

private:
    static Conexionftp* _instance;
    QString ftp_host;    ///<Host servidor ftp
    QString ftp_user;    ///<Usuario de ftp
    QString ftp_pass;    ///<Contraseña de acceso ftp
    QString ftp_port;    ///<Puerto del servidor ftp
    QFtp *ftp;
    QString currentFile;
    QProgressDialog* progressDialog;
    QString folder;
    QNetworkSession *networkSession;
};

#endif // CONEXIONFTP_H
