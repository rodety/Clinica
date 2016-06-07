#ifndef REPORTE_OPERATORIO_DOCUMENTO_H
#define REPORTE_OPERATORIO_DOCUMENTO_H

#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;

class reporte_operatorio_documento
{
private:
    string cirujano;
    string firstHelper;
    string secondHelper;
    string anesthesiologist;
    string instrumentalist;
    string circulating;
    string typeAnesthesia;
    string startAnesthesia;
    string endAnesthesia;
    string count;
    string drains;
    string dressings;
    string other;
    string date;
    string startOperation;
    string endOperation;
    //string order;
    string dxPreOpe;
    string dxPostOpe;
    string procedure;
    string find;
    string firm;
    string fathername;
    string mothername;
    string names;
    string nhcl;
    string bed;
    string medic;
    string agreement;

    string cabemedic;
    string cabelastname;
    string cabename;
    string cabeservice;
    string cabeclinicHistory;
    string cabebed;

public:
    reporte_operatorio_documento();
    string getcirujano();
    string getfirstHelper();
    string getsecondHelper();
    string getanesthesiologist();
    string getinstrumentalist();
    string getcirculating();
    string gettypeAnesthesia();
    string getstartAnesthesia();
    string getendAnesthesia();
    string getcount();
    string getdrains();
    string getdressings();
    string getother();
    string getdate();
    string getstartOperation();
    string getendOperation();
    string getorder();
    string getdxPreOpe();
    string getdxPostOpe();
    string getprocedure();
    string getfind();
    string getfirm();
    string getfathername();
    string getmothername();
    string getnames();
    string getnhcl();
    string getbed();
    string getmedic();
    string getagreement();

    void setcirujano(string a);
    void setfirstHelper(string a);
    void setsecondHelper(string a);
    void setanesthesiologist(string a);
    void setinstrumentalist(string a);
    void setcirculating(string a);
    void settypeAnesthesia(string a);
    void setstartAnesthesia(string a);
    void setendAnesthesia(string a);
    void setcount(string a);
    void setdrains(string a);
    void setdressings(string a);
    void setother(string a);
    void setdate(string a);
    void setstartOperation(string a);
    void setendOperation(string a);
    void setorder(string a);
    void setdxPreOpe(string a);
    void setdxPostOpe(string a);
    void setprocedure(string a);
    void setfind(string a);
    void setfirm(string a);
    void setfathername(string a);
    void setmothername(string a);
    void setnames(string a);
    void setnhcl(string a);
    void setbed(string a);
    void setmedic(string a);
    void setagreement(string a);
    void generateLatex();
};
#endif // REPORTE_OPERATORIO_DOCUMENTO_H
