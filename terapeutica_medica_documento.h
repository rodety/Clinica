#ifndef TERAPEUTICA_MEDICA_DOCUMENTO_H
#define TERAPEUTICA_MEDICA_DOCUMENTO_H
#include<string>
#include<QString>
#include<vector>
using namespace std;
class Terapeutica_Medica_Documento
{
public:
    Terapeutica_Medica_Documento();
private:

    string medic;
    string lastname;
    string name;
    string service;
    string clinicHistory;
    string bed;
    vector<QString> dateStart;
    vector<QString> hourStart;
    vector<QString> terapeutica;
    vector<QString> dateEnd;
    vector<QString> hourEnd;





public:
    void generatelatex();
    void setmedic(string a);
    void setlastname(string a);
    void setname(string a);
    void setservice(string a);
    void setclinicHistory(string a);
    void setbed(string a);
    void setDateStart(vector<QString>);
    void setHourStart(vector<QString>);
    void setTerapeutica(vector<QString>);
    void setdateEnd(vector<QString>);
    void setHourEnd(vector<QString>);
    vector<QString> getDateStart();
    vector<QString> getHourStart();
    vector<QString> getTerapeutica();
    vector<QString> getDateEnd();
    vector<QString> getHourEnd();

};

#endif // TERAPEUTICA_MEDICA_DOCUMENTO_H
