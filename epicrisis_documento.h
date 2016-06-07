#ifndef EPICRISIS_DOCUMENTO_H
#define EPICRISIS_DOCUMENTO_H
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;
class epicrisis_documento
{
public:
    epicrisis_documento();
    void generateLatex();
    void setmedic(string a);
    void setlastname(string a);
    void setname(string a);
    void setservice(string a);
    void setclinicHistory(string a);
    void setbed(string a);

    void setDateIn(string a);
    void setDateout(string a);
    void setDayHospitalized(string a);
    void setConditionOut(string a);
    void setTextSummaryClinic(string a);
    void setTextSummaryTestClinic(string a);
    void setTextTestAux(string a);
    void setDiagnosisIn(string a);
    void setTreatment(string a);
    void setEvolution(string a);
    void setDiagnosisEnd(string a);
    void setDirections(string a);
    //
    string getmedic();
    string getlastname();
    string getname();
    string getservice();
    string getclinicHistory();
    string getbed();

    string getDateIn();
    string getDateout();
    string getDayHospitalized();
    string getConditionOut();
    string getTextSummaryClinic();
    string getTextSummaryTestClinic();
    string getTextTestAux();
    string getDiagnosisIn();
    string getTreatment();
    string getEvolution();
    string getDiagnosisEnd();
    string getDirections();

private:
    string medic;
    string lastname;
    string name;
    string service;
    string clinicHistory;
    string bed;

    string dateIn;
    string dateOut;
    string dayHopitalized;
    string conditionOut;
    string textSummaryClinic;
    string textSummaryTestClinic;
    string textTestAux;
    string diagnosisIn;
    string treatment;
    string evolution;
    string diagnosisEnd;
    string directions;
};

#endif // EPICRISIS_DOCUMENTO_H
