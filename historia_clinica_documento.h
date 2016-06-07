#ifndef HISTORIA_CLINICA_DOCUMENTO_H
#define HISTORIA_CLINICA_DOCUMENTO_H

#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;

class historia_clinica_documento
{
    private:
        string principalsymptom;
        string currenthistorydisease;
        string medic;
        string lastname;
        string name;
        string service;
        string clinicHistory;
        string bed;

    public:
        historia_clinica_documento();
        void setprincipalsymptom(string a);
        void setcurrenthistorydisease(string a);
        string getprincipalsymptom();
        string getcurrenthistorydisease();
        void generateLatex();    void setmedic(string a);
    void setlastname(string a);
    void setname(string a);
    void setservice(string a);
    void setclinicHistory(string a);
    void setbed(string a);

};

#endif // HISTORIA_CLINICA_DOCUMENTO_H
