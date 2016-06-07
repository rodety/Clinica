#include "ftpwindow.h"
class Conexionftp;
#include <iostream>
using namespace std;

FtpWindow::FtpWindow(QWidget *parent)
    : QDialog(parent), ftp(0), networkSession(0)
{
    ftpConexion = Conexionftp::Instance();
    host = ftpConexion->getHost();
    user = ftpConexion->getUser();
    pass = ftpConexion->getPass();
    port = ftpConexion->getPort();

    ftpServerLabel = new QLabel(tr("Ftp &server:"));
    ftpServerLineEdit = new QLineEdit(host);

    ftpServerLabel->setBuddy(ftpServerLineEdit);

    statusLabel = new QLabel(tr("Please enter the name of an FTP server."));
#ifdef Q_OS_SYMBIAN
    // Use word wrapping to fit the text on screen
    statusLabel->setWordWrap( true );
#endif

    fileList = new QTreeWidget;
    fileList->setEnabled(false);
    fileList->setRootIsDecorated(false);
    fileList->setHeaderLabels(QStringList() << tr("Name") << tr("Size") << tr("Owner") << tr("Group") << tr("Time"));
    fileList->header()->setStretchLastSection(false);

    connectButton = new QPushButton(tr("Connect"));
    connectButton->setDefault(true);

    cdToParentButton = new QPushButton;
    cdToParentButton->setIcon(QPixmap(":/images/cdtoparent.png"));
    cdToParentButton->setEnabled(false);

    downloadButton = new QPushButton(tr("Download"));
    downloadButton->setEnabled(false);
    uploadButton = new QPushButton(tr("Upload"));
    uploadButton->setEnabled(true);

    quitButton = new QPushButton(tr("Quit"));

    buttonBox = new QDialogButtonBox;
    buttonBox->addButton(downloadButton, QDialogButtonBox::ActionRole);
    buttonBox->addButton(quitButton, QDialogButtonBox::RejectRole);
    buttonBox->addButton(uploadButton, QDialogButtonBox::RejectRole);

    progressDialog = new QProgressDialog(this);

    connect(fileList, SIGNAL(itemActivated(QTreeWidgetItem*,int)),
            this, SLOT(processItem(QTreeWidgetItem*,int)));
    connect(fileList, SIGNAL(currentItemChanged(QTreeWidgetItem*,QTreeWidgetItem*)),
            this, SLOT(enableDownloadButton()));

    connect(connectButton, SIGNAL(clicked()), this, SLOT(connectOrDisconnect()));
    connect(cdToParentButton, SIGNAL(clicked()), this, SLOT(cdToParent()));

    connect(uploadButton, SIGNAL(clicked()), this, SLOT(uploadFile()));
    connect(quitButton, SIGNAL(clicked()), this, SLOT(close()));

    topLayout = new QHBoxLayout;
    topLayout->addWidget(ftpServerLabel);
    topLayout->addWidget(ftpServerLineEdit);
#ifndef Q_OS_SYMBIAN
    topLayout->addWidget(cdToParentButton);
    topLayout->addWidget(connectButton);
#else
    // Make app better lookin on small screen
    QHBoxLayout *topLayout2 = new QHBoxLayout;
    topLayout2->addWidget(cdToParentButton);
    topLayout2->addWidget(connectButton);
#endif

    mainLayout = new QVBoxLayout;
    mainLayout->addLayout(topLayout);
#ifdef Q_OS_SYMBIAN
    // Make app better lookin on small screen
    mainLayout->addLayout(topLayout2);
#endif
    mainLayout->addWidget(fileList);
    mainLayout->addWidget(statusLabel);
    mainLayout->addWidget(buttonBox);
    setLayout(mainLayout);

    QNetworkConfigurationManager manager;
    if (manager.capabilities() & QNetworkConfigurationManager::NetworkSessionRequired) {
        // Get saved network configuration
        QSettings settings(QSettings::UserScope, QLatin1String("Trolltech"));
        settings.beginGroup(QLatin1String("QtNetwork"));
        const QString id = settings.value(QLatin1String("DefaultNetworkConfiguration")).toString();
        settings.endGroup();

        // If the saved network configuration is not currently discovered use the system default
        QNetworkConfiguration config = manager.configurationFromIdentifier(id);
        if ((config.state() & QNetworkConfiguration::Discovered) !=
            QNetworkConfiguration::Discovered) {
            config = manager.defaultConfiguration();
        }

        networkSession = new QNetworkSession(config, this);
        connect(networkSession, SIGNAL(opened()), this, SLOT(enableConnectButton()));

        connectButton->setEnabled(false);
        cout<<"sesion iniciada"<<endl;
        statusLabel->setText(tr("Opening network session."));
        networkSession->open();
    }

    setWindowTitle(tr("FTP"));
    connectOrDisconnect();


}
FtpWindow::~FtpWindow()
{
    delete ftpServerLabel;
    delete ftpServerLineEdit;
    delete statusLabel;
    delete fileList;
    delete cdToParentButton;
    delete connectButton;
    delete downloadButton;
    delete uploadButton;
    delete quitButton;
    delete buttonBox;
    delete progressDialog;
    delete ftp;
    delete file;
    delete file1;
    delete networkSession;
    delete item;
    delete topLayout;
    delete mainLayout;

}
QSize FtpWindow::sizeHint() const
{
    return QSize(500, 300);
}

void FtpWindow::connectOrDisconnect()
{
    if (ftp) {
        ftp->abort();
        ftp->deleteLater();
        ftp = 0;
        fileList->setEnabled(false);
        cdToParentButton->setEnabled(false);
        downloadButton->setEnabled(false);
        connectButton->setEnabled(true);
        connectButton->setText(tr("Connect"));
#ifndef QT_NO_CURSOR
        setCursor(Qt::ArrowCursor);
#endif
        statusLabel->setText(tr("Please enter the name of an FTP server."));
        cout<<"cerrando las conexion existentes"<<endl;
        return;
    }

#ifndef QT_NO_CURSOR
    setCursor(Qt::WaitCursor);
#endif

    ftp = new QFtp(this);
    connect(ftp,SIGNAL(commandFinished(int,bool)),this, SLOT(ftpCommandFinished(int,bool)));
    connect(ftp,SIGNAL(stateChanged(int)),this,SLOT(connectToHost(int)));
    connect(ftp,SIGNAL(listInfo(QUrlInfo)),this, SLOT(addToList(QUrlInfo)));
    connect(ftp,SIGNAL(dataTransferProgress(qint64,qint64)),this, SLOT(updateDataTransferProgress(qint64,qint64)));
    connect(ftp,SIGNAL(stateChanged(int)),this,SLOT(stateChange(int)));


    fileList->clear();
    currentPath.clear();
    isDirectory.clear();


    QUrl url(ftpServerLineEdit->text());

    if (!url.isValid() || url.scheme().toLower() != QLatin1String("ftp")) {
        ftp->connectToHost(ftpServerLineEdit->text(), 21);

        ftp->login(user,pass);
        ftp->list();

        cout<<"intentando conectarse a root"<<endl;

    } else {
        ftp->connectToHost(url.host(), url.port(port.toInt()));

        if (!url.userName().isEmpty())
            ftp->login(QUrl::fromPercentEncoding(url.userName().toLatin1()), url.password());
        else
        {

            ftp->login();
            cout<<"intentando conectarse como anomimo"<<endl;
        }
        if (!url.path().isEmpty())
            ftp->cd(url.path());
    }

    fileList->setEnabled(true);
    connectButton->setEnabled(false);
    connectButton->setText(tr("Disconnect"));
    statusLabel->setText(tr("Connecting to FTP server %1...")
                         .arg(ftpServerLineEdit->text()));
}


void FtpWindow::downloadFile(QString fileName)
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

void FtpWindow::uploadFile()
{

    if (!QFile::exists(fileName)) {
             QMessageBox::information(this, tr("FTP"),
                                      tr("There already exists a file called %1 in "
                                         "the current directory.")
                                      .arg(fileName));
             return;
         }
    QFile imagen(fileName);
    if (!imagen.open(QIODevice::ReadOnly))
    {
        QMessageBox::information(this, tr("Image Viewer"),
                                          tr("No se puede leer %1.").arg(fileName));
        return;
    }

    cout<<fileName.indexOf("/")<<endl;

    ftp->put(&imagen,renameFile,QFtp::Binary);
    progressDialog->setLabelText(tr("Uploading %1...").arg(fileName));
    qDebug()<<"Subiendo :"<<renameFile<<endl;
    progressDialog->exec();
}

void FtpWindow::cancelDownload()
{
}

void FtpWindow::ftpCommandFinished(int, bool error)
{
#ifndef QT_NO_CURSOR
    setCursor(Qt::ArrowCursor);
#endif

    if (ftp->currentCommand() == QFtp::ConnectToHost) {
        if (error) {
            QMessageBox::information(this, tr("FTP"),
                                     tr("Unable to connect to the FTP server "
                                        "at %1. Please check that the host "
                                        "name is correct.")
                                     .arg(ftpServerLineEdit->text()));
            connectOrDisconnect();
            return;
        }
        statusLabel->setText(tr("Logged onto %1.")
                             .arg(ftpServerLineEdit->text()));
        fileList->setFocus();
        downloadButton->setDefault(true);
        connectButton->setEnabled(true);
        return;
    }

    if (ftp->currentCommand() == QFtp::Login)
    {
        cout<<"Login Correcto"<<endl;
        ftp->list();
    }

    if (ftp->currentCommand() == QFtp::Get) {
             if (error) {

                 qDebug()<<"Error al descargar"<<endl;
                 return;
             }
             else
             {
                 qDebug()<<"Descargado Correctamente"<<endl;
                 return;
             }

         }
    else if (ftp->currentCommand() == QFtp::List) {
        if (isDirectory.isEmpty()) {
            fileList->addTopLevelItem(new QTreeWidgetItem(QStringList() << tr("<empty>")));
            fileList->setEnabled(false);
        }
    }
    if(ftp->currentCommand()==QFtp::Put) {
        if (error) {
            cout<<"No pudo enviar el archivo"<<endl;
            emit puterror(renameFile);
            connectOrDisconnect();
            return;
        }
        else
        {
            cout<<"Guardo satisfactoriamente a la carpeta"<<endl;
            emit putCorrect();
        }
        return;
    }


    if (ftp->currentCommand() == QFtp::Cd) {
        if (error) {

            cout<<"No pudo ingresar a la carpeta seleccionada sin enbargo se creara el directorio y se ingresara"<<endl;
            ftp->mkdir(carpeta);
            ftp->cd(carpeta);            
            return;
        }
        else cout<<"Entro satisfactoriamente a la carpeta"<<endl;
        return;
    }

    if (ftp->currentCommand() == QFtp::Mkdir) {
        if (error) {
            cout<<"No se puede crear la carpeta"<<endl;            
            return;
        }
        else cout<<"Se creo la carpeta correctamente"<<endl;
        return;
    }

    if (ftp->currentCommand() == QFtp::Remove) {
        if (error) {
            cout<<"No se pudo borrar ek archivo"<<endl;
            return;
        }
        else cout<<"El archivo fue borrado..."<<endl;
        return;
    }


}

void FtpWindow::addToList(const QUrlInfo &urlInfo)
{
    item= new QTreeWidgetItem;
    item->setText(0, urlInfo.name());
    item->setText(1, QString::number(urlInfo.size()));
    item->setText(2, urlInfo.owner());
    item->setText(3, urlInfo.group());
    item->setText(4, urlInfo.lastModified().toString("MMM dd yyyy"));

    QPixmap pixmap(urlInfo.isDir() ? ":/images/dir.png" : ":/images/file.png");
    item->setIcon(0, pixmap);

    isDirectory[urlInfo.name()] = urlInfo.isDir();
    fileList->addTopLevelItem(item);
    if (!fileList->currentItem()) {
        fileList->setCurrentItem(fileList->topLevelItem(0));
        fileList->setEnabled(true);
    }
}

void FtpWindow::processItem(QTreeWidgetItem *item, int /*column*/)
{
    QString name = item->text(0);
    if (isDirectory.value(name)) {
        fileList->clear();
        isDirectory.clear();
        currentPath += '/';
        currentPath += name;
        ftp->cd(name);
        ftp->list();
        cdToParentButton->setEnabled(true);
#ifndef QT_NO_CURSOR
        setCursor(Qt::WaitCursor);
#endif
        return;
    }
}

void FtpWindow::cdToParent()
{
#ifndef QT_NO_CURSOR
    setCursor(Qt::WaitCursor);
#endif
    fileList->clear();
    isDirectory.clear();
    currentPath = currentPath.left(currentPath.lastIndexOf('/'));
    if (currentPath.isEmpty()) {
        cdToParentButton->setEnabled(false);
        ftp->cd("/");
    } else {
        ftp->cd(currentPath);
    }
    ftp->list();
}

void FtpWindow::updateDataTransferProgress(qint64 readBytes,
                                           qint64 totalBytes)
{
    progressDialog->setMaximum(totalBytes);
    progressDialog->setValue(readBytes);
}

void FtpWindow::enableDownloadButton()
{
    QTreeWidgetItem *current = fileList->currentItem();
    if (current) {
        QString currentFile = current->text(0);
        downloadButton->setEnabled(!isDirectory.value(currentFile));
    } else {
        downloadButton->setEnabled(false);
    }
}

void FtpWindow::enableConnectButton()
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

    connectButton->setEnabled(networkSession->isOpen());
    statusLabel->setText(tr("Please enter the name of an FTP server."));
}
void FtpWindow::subirfile()
{
     uploadFile();
}
void FtpWindow::bajarfile(QString name)
{
    downloadFile(name);
}

void FtpWindow::setnombreCarpeta(QString nombre)
{
   carpeta = nombre;
   ftp->cd(carpeta);
}
void FtpWindow::bajarFotos()
{

}
void FtpWindow::setnombreFile(QString name)
{
   fileName = name;
}
QString FtpWindow::getnombreFile()
{
   return fileName;
}
void FtpWindow::setRenameFile(QString name)
{
   renameFile = name;
}
QString FtpWindow::getnombreCarpeta()
{
   return carpeta;
}
void FtpWindow::connectToHost(int val)
{
    if(val == 5)
        qDebug()<<"Valor de connethost  "<<val<<endl;
}


void FtpWindow::stateChange(int estado)
{
    switch (estado) {

    case 0:

        emit closeconecction();
        break;
    case 1:
        emit closeconecction();
        break;
    case 2:
        emit closeconecction();
        break;
    case 3:
        emit closeconecction();
        break;
    case 4:
        emit openconnecction();
        break;
    case 5:

        emit closeconecction();
        break;
    }

}
