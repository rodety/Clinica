#ifndef CONFIGURADOR_H
#define CONFIGURADOR_H
#include <QString>
#include <fstream>
#include <vector>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include "conexionbd.h"
#include "conexionftp.h"
#include <QObject>
#include <QWidget>
class configurador:public QWidget
{

public:
    static configurador* Instance();
    ~configurador();
    bool conectar_db();
    void conectar_ftp();
    void setnamefiles(QString val1,QString val2){nombreArchivo = val1; nombreArchivoFtp = val2;}

protected:
    configurador();
private:
    static configurador* _instance;
    bool leerConfiguracionDatabase();
    bool leerConfiguracionftp();
    QString nombreArchivo;
    QString nombreArchivoFtp;
    ConexionBD *conexiondb;
    Conexionftp *conexionftp;



};

#endif // CONFIGURADOR_H
