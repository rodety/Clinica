#ifndef AGENDA_LIST_DOCUMENTO_H
#define AGENDA_LIST_DOCUMENTO_H
#include "agenda_ui.h"
#include <fstream>
#include <cstdlib>
#include <QString>
#include <QSqlQuery>
#include <QVector>
#include <QObject>

using namespace std;
class agenda_list_documento:QObject
{
public:
    agenda_list_documento();
    void setCompany(QString a){ company = a;}
    void setDate(QString a) {date = a;}
    void setListEmploye(QVector< QString > &a) {employe = a;}
    void setListDniEmploye(QVector< QString > &a) {dniEmploye = a;}
    void generateLatex();

private:
    QString company;
    QString date;
    QVector< QString > employe;
    QVector< QString > dniEmploye;
    QSqlQuery query;
};

#endif // AGENDA_LIST_DOCUMENTO_H
