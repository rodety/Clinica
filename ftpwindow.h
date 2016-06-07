#ifndef FTPWINDOW_H
 #define FTPWINDOW_H

 #include <QDialog>
 #include <QHash>
 #include <QSqlQuery>
 #include <QtGui>
 #include <QtNetwork>
 #include "conexionftp.h"
 class QDialogButtonBox;
 class QFile;
 class QFtp;
 class QLabel;
 class QLineEdit;
 class QTreeWidget;
 class QTreeWidgetItem;
 class QProgressDialog;
 class QPushButton;
 class QUrlInfo;
 class QNetworkSession;
 class FtpWindow : public QDialog
 {
     Q_OBJECT

 public:
     FtpWindow(QWidget *parent = 0);
     ~FtpWindow();
     QSize sizeHint() const;
     void subirfile();
     void bajarfile(QString);
     void setnombreCarpeta(QString);
     QString getnombreCarpeta();
     void bajarFotos();
     void setnombreFile(QString);
     void setRenameFile(QString);
     QString getnombreFile();
 public slots:
     void connectOrDisconnect();
     void downloadFile(QString);
     void uploadFile();
     void cancelDownload();
     void ftpCommandFinished(int commandId, bool error);
     void addToList(const QUrlInfo &urlInfo);
     void processItem(QTreeWidgetItem *item, int column);
     void cdToParent();
     void updateDataTransferProgress(qint64 readBytes,
                                     qint64 totalBytes);
     void enableDownloadButton();
     void enableConnectButton();
     void connectToHost(int);
     void stateChange(int estado);
 private:
     QLabel *ftpServerLabel;
     QLineEdit *ftpServerLineEdit;
     QLabel *statusLabel;
     QTreeWidget *fileList;
     QPushButton *cdToParentButton;
     QPushButton *connectButton;
     QPushButton *downloadButton;
     QPushButton *uploadButton;
     QPushButton *quitButton;
     QDialogButtonBox *buttonBox;
     QProgressDialog *progressDialog;
     QHash<QString, bool> isDirectory;
     QString currentPath;
     QFtp *ftp;
     QFile *file;
     QFile *file1;
     QNetworkSession *networkSession;
     QSqlQuery query;
     QString carpeta;
     QString nombre;
     QString fileName;
     QString renameFile;
     bool ListoLeer;
     QTreeWidgetItem *item;
     QHBoxLayout *topLayout;
     QVBoxLayout *mainLayout;
     Conexionftp * ftpConexion;
     QString host;
     QString user;
     QString pass;
     QString port;

 signals:
     void putCorrect();
     void downloadCorrect();
     void closeconecction();
     void puterror(QString);
     void openconnecction();

 };

 #endif
