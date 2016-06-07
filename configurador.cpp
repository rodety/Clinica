#include "configurador.h"
#include <QMessageBox>
#include <vector>

using namespace std;
configurador* configurador::_instance =0;
configurador* configurador::Instance()
{
    if(_instance ==0)
    {
        _instance = new configurador;
    }
    return _instance;
}
configurador::configurador()
{
    conexiondb = new ConexionBD;
    conexionftp =  Conexionftp::Instance();
}
configurador::~configurador()
{
    delete conexiondb;
    delete conexionftp;
}
bool configurador::leerConfiguracionDatabase()
{
    QString namefile = nombreArchivo;
    QFile file(namefile);
    file.open(QIODevice::ReadOnly|QIODevice::Text);
    QString str_db;
    QTextStream in(&file);
    str_db = in.readAll();
    vector<QString> v_str;
    int posInit=0;
    v_str.resize(5);
    int j=0;
    for(int i=0; i<str_db.length(); i++)
    {
        if(str_db[i] == '#')
        {
            v_str[j] = str_db.mid(posInit, i-posInit);
            posInit = i+1;
            j++;
        }
    }
    file.close();    

    conexiondb->setHost(v_str[0]);
    conexiondb->setName(v_str[1]);
    conexiondb->setUser(v_str[2]);
    conexiondb->setPass(v_str[3]);
    conexiondb->setPort(v_str[4]);    

}
bool configurador::leerConfiguracionftp()
{



    QString nameFileFtp = nombreArchivoFtp;
    QFile file(nameFileFtp);
    file.open(QIODevice::ReadOnly|QIODevice::Text);
    QString str_ftp;
    vector<QString> v_str_ftp;
    int posInit=0;
    int j=0;

    QTextStream in_ftp(&file);
    str_ftp = in_ftp.readAll();
    v_str_ftp.resize(4);
    for(int i=0; i<str_ftp.length(); i++)
        {
            if(str_ftp[i] == '#')
            {
                v_str_ftp[j] = str_ftp.mid(posInit, i-posInit);
                posInit = i+1;
                j++;
            }
        }
    file.close();
    conexionftp->setHost(v_str_ftp[0]);
    conexionftp->setUser(v_str_ftp[1]);
    conexionftp->setPass(v_str_ftp[2]);
    conexionftp->setPort(v_str_ftp[3]);

}

bool configurador::conectar_db()
{
    leerConfiguracionDatabase();

    if(conexiondb->connect())
    {       
        return true;
    }
    else
    {       
        return false;
    }

}
void configurador::conectar_ftp()
{
    leerConfiguracionftp();
    conexionftp->connect();
}

