#ifndef ANTECEDENTES_DOCUMENTO_H
#define ANTECEDENTES_DOCUMENTO_H

#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;
class antecedentes_documento
{
private:
    string age;
    string datebirth;
    string admission;
    string sex;
    string maritalStatus;
    string ocupation;
    string personalprecedent;
    string allergy;
    string lastMenstruation;
    string catamRegime;
    string harmfulHabit;
    bool tabaco;
    bool alcohol;
    string currentMedication;
    string operationDateSite;
    string relativeprecedent;
    string observation;

    string medic;
    string lastname;
    string name;
    string service;
    string clinicHistory;
    string bed;

public:
    antecedentes_documento();

    void generatelatex();

    string getage();
    string getdatebirth();
    string getadmission();
    string getsex();
    string getmaritalStatus();
    string getocupation();
    string getpersonalprecedent();
    string getallergy();
    string getlastMenstruation();
    bool getTabaco();
    bool getAlcohol();
    string getharmfulHabit();
    string getcatamRegime();
    string getcurrentMedication();
    string getoperationDateSite();
    string getrelativeprecedent();
    string getobservation();

    void setage(string a);
    void setdatebirth(string a);
    void setadmission(string a);
    void setsex(string a);
    void setmaritalStatus(string a);
    void setocupation(string a);
    void setpersonalprecedent(string a);
    void setallergy(string a);
    void setlastMenstruation(string a);
    void setcatamRegime(string a);
    void setTabaco(bool a);
    void setAlcohol(bool a);
    void setcurrentMedication(string a);
    void setoperationDateSite(string a);
    void setrelativeprecedent(string a);
    void setobservation(string a);
    void setmedic(string a);
    void setlastname(string a);
    void setname(string a);
    void setservice(string a);
    void setclinicHistory(string a);
    void setbed(string a);

};

#endif // ANTECEDENTES_DOCUMENTO_H
