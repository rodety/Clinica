#ifndef RIESGO_QUIRURGICO_DOCUMENTO_H
#define RIESGO_QUIRURGICO_DOCUMENTO_H
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;
class riesgo_quirurgico_documento
{
public:
    riesgo_quirurgico_documento();
    void generatelatex();

    void setProcedencia(string);
    void setSexo(string);
    void setHTA(string);
    void setASMA(string);
    void setTBC(string);
    void setDM(string);
    void setMotivo_RQCV(string);
    void setPA(string);
    void setFC(string);
    void setCorazon(string);
    void setPulmones(string);
    void setPulso_Periferico(string);
    void setSistema_Venoso(string);
    void setEKG(string);
    void setFC1(string);
    void setP(string);
    void setPR(string);
    void setQRC(string);
    void setQT(string);
    void setST(string);
    void setOnda_T(string);
    void setAQRS(string);
    void setID(string);
    void setRQCV(string);
    void setSugerencias(string);
    void setDate(string);

    void setmedic(string a);
    void setlastname(string a);
    void setname(string a);
    void setservice(string a);
    void setclinicHistory(string a);
    void setbed(string a);
    void setage(int a);



    string getProcedencia();
    string getSexo();
    string getHTA();
    string getASMA();
    string getTBC();
    string getDM();
    string getMotivo_RQCV();
    string getPA();
    string getFC();
    string getCorazon();
    string getPulmones();
    string getPulso_Periferico();
    string getSistema_Venoso();
    string getEKG();
    string getFC1();
    string getP();
    string getPR();
    string getQRC();
    string getQT();
    string getST();
    string getOnda_T();
    string getAQRS();
    string getID();
    string getRQCV();
    string getSugerencias();
    string getDate();

    string getmedic();
    string getlastname();
    string getname();
    string getservice();
    string getclinicHistory();
    string getbed();
    int getage();

private:
    string medic;
    string lastname;
    string name;
    string service;
    string clinicHistory;
    string bed;
    int age;


    string procedencia;
    string sexo;
    string HTA;
    string ASMA;
    string TBC;
    string DM;
    string motivo_RQCV;
    string PA;
    string FC;
    string corazon;
    string pulmones;
    string pulso_periferico;
    string sistema_venoso;
    string EKG;
    string FC1;
    string P;
    string PR;
    string QRC;
    string QT;
    string ST;
    string onda_T;
    string AQRS;
    string ID;
    string RQCV;
    string sugerencias;
    string date;


};

#endif // RIESGO_QUIRURGICO_DOCUMENTO_H
