#ifndef CLINICA_TAB_DOCUMENTO_H
#define CLINICA_TAB_DOCUMENTO_H

#include <string>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <QString>
using namespace std;

class Clinica_Tab_Documento
{
private:
     string lastname;
     string name;
     string addres;
     string phone;
     string dni;
     string age;
     string maritalstatus;
     string ocupation;
     string previouSurgeries;
     string allergy;
     string precedents;
     string actualmedication;
     vector< QString> date;
     vector< QString> reason;
public:
    Clinica_Tab_Documento();
    string getlastname();
    string getname();
    string getaddres();
    string getphone();
    string getdni();
    string getage();
    string getmaritalstatus();
    string getocupation();
    string getpreviouSurgeries();
    string getallergy();
    string getprecedents();
    string getactualmedication();
    vector< QString> getdate();
    vector< QString> getreason();

    void setlastname(string a);
    void setname(string a);
    void setaddres(string a);
    void setphone(string a);
    void setdni(string a);
    void setage(string a);
    void setmaritalstatus(string a);
    void setocupation(string a);
    void setpreviouSurgeries(string a);
    void setallergy(string a);
    void setprecedents(string a);
    void setactualmedication(string a);
    void setdate(vector< QString> a);
    void setreason(vector< QString> a);
    void generateLatex();
};

#endif // CLINICA_TAB_DOCUMENTO_H
