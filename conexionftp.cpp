#include "conexionftp.h"
#include<QFtp>
#include<QMessageBox>
#include<QDebug>
#include <QDir>
#include <QProgressDialog>
Conexionftp* Conexionftp::_instance =0;
Conexionftp* Conexionftp::Instance()
{
    if(_instance ==0)
    {
        _instance = new Conexionftp;
    }
    return _instance;
}
Conexionftp::Conexionftp()
{
    ftp = new QFtp(this);
    progressDialog = new QProgressDialog(this);
    QObject::connect (ftp,SIGNAL(commandFinished(int,bool)),this,SLOT(commandfinish(int,bool)));
    QObject::connect (ftp,SIGNAL(dataTransferProgress(qint64,qint64)),this, SLOT(updateDataTransferProgress(qint64,qint64)));
    QObject::connect (ftp,SIGNAL(stateChanged(int)),this,SLOT(stateChange(int)));


}
Conexionftp::~Conexionftp()
{
    delete ftp;
    delete progressDialog;
}
void Conexionftp::connect()
{
    if(ftp->state() == QFtp::Unconnected)
    {
        ftp->connectToHost(ftp_host,ftp_port.toInt());
        ftp->login(ftp_user,ftp_pass);
    }

   if(ftp->state() == QFtp::Connecting)
    {
        ftp->clearPendingCommands();
        QMessageBox::warning(this, tr("Warning"), tr("No se logro encontrar al servidor porfavor configure la conexión"),
                                                                   QMessageBox::Close);
        ftpconfigprogram* window_ftp = new ftpconfigprogram;
        window_ftp->show();
    }
}

void Conexionftp::commandfinish(int, bool error)
{
    int ret;
    if(ftp->currentCommand() == QFtp::ConnectToHost)
        {
            if(error)
            {
                ret = QMessageBox::warning(this, tr("Warning"), tr("No se logro conectar al servidor porfavor configure la conexión"),
                                                           QMessageBox::Close);
                ftpconfigprogram* window_ftp = new ftpconfigprogram;
                window_ftp->show();
                return;
            }
                else
            {

                return;
            }
        }
    if(ftp->currentCommand() == QFtp::Login)
        {
            if(error)
            {
                ret = QMessageBox::warning(this, tr("Warning"), tr("No se logro loguear al servidor porfavor configure la conexión"),
                                                           QMessageBox::Close);
                ftpconfigprogram* window_ftp = new ftpconfigprogram;
                window_ftp->show();
                return;
            }
            else
            {
                emit conexionestablished();
                //CERRANDO LA CONECCION YA QUE NO SE USARA
                ftp->close();
                return;
            }
        }

    if(ftp->currentCommand() == QFtp::Put)
    {
        if(error)
        {
            ret = QMessageBox::warning(this, tr("Warning"), tr("Error de envio de archivo"),
                                                       QMessageBox::Close);
            emit puterror(currentFile);
            return;
        }
        else
        {
            emit putcorrected();
            return;
        }
    }

    if(ftp->currentCommand() == QFtp::Get)
        {
            if(error)
            {
                ret = QMessageBox::warning(this, tr("Warning"), tr("Error al descargar el archivo"),
                                                           QMessageBox::Close);
                return;
            }

        }
    if (ftp->currentCommand() == QFtp::Cd) {
        if (error) {

            qDebug()<<"Creando Directorio "<<folder<<endl;
            ftp->mkdir(folder);
            ftp->cd(folder);
            return;
        }
        else
            qDebug()<<"Entro al directorio "<<folder<<endl;


    }

}

void Conexionftp::uploadFile(QString route, QString name)
{
    currentFile = name;
    QFile file(route);   
    ftp->put(&file,name,QFtp::Binary);
    progressDialog->setLabelText(tr("Subiendo %1...").arg(name));
    progressDialog->setCancelButton(0);
    progressDialog->exec();

}

void Conexionftp::downloadFile(QString fileName)
{
    QFile file(fileName);
    if(file.open(QIODevice::WriteOnly))
    {
        ftp->get(fileName,&file,QFtp::Binary);
        progressDialog->setLabelText(tr("Descargando %1...").arg(fileName));
        progressDialog->setCancelButton(0);
        progressDialog->exec();
        file.close();
    }
    else
    {
        QMessageBox::information(this, tr("FTP"),
                                 tr("No se puede grabar en disco %1: %2.")
                                 .arg(fileName).arg(file.errorString()));

        return;
    }
}

void Conexionftp::updateDataTransferProgress(qint64 readBytes,
                                           qint64 totalBytes)
{
    progressDialog->setMaximum(totalBytes);
    progressDialog->setValue(readBytes);
}

void Conexionftp::stateChange(int estado)
{
    switch (estado) {

    case 0:


        emit conexionfinished();
        break;
    case 1:


        break;
    case 2:


        break;
    case 3:


        break;
    case 4:

        break;
    case 5:

         emit conexionfinished();
         break;

    }

}

void Conexionftp::closeConexion()
{

}

void Conexionftp::cdfolder(QString name)
{
    folder = name;
    ftp->cd("/");
    ftp->cd(folder);
}
void Conexionftp::enableConnectButton()
{
    // Save the used configuration
    QNetworkConfiguration config = networkSession->configuration();
    QString id;
    if (config.type() == QNetworkConfiguration::UserChoice)
        id = networkSession->sessionProperty(QLatin1String("UserChoiceConfiguration")).toString();
    else
        id = config.identifier();

    QSettings settings(QSettings::UserScope, QLatin1String("Trolltech"));
    settings.beginGroup(QLatin1String("QtNetwork"));
    settings.setValue(QLatin1String("DefaultNetworkConfiguration"), id);
    settings.endGroup();
}

