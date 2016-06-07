#ifndef ITEM_TERAPEUTICA_H
#define ITEM_TERAPEUTICA_H
#include "documentos_historial_ui.h"
#include <QWidget>

class documentos_historial_ui;
namespace Ui {
class item_terapeutica;
}

class item_terapeutica : public QWidget
{
    Q_OBJECT
    
public:
    explicit item_terapeutica(QWidget *parent = 0);
    ~item_terapeutica();
    void setCurrentParent(documentos_historial_ui*);
    void setDni(QString);
    
private slots:
    void on_pushButton_Aceptar_clicked();

    void on_pushButton_Cancelar_clicked();

private:
    Ui::item_terapeutica *ui;
    documentos_historial_ui *currentParent;
    QString DNI;
};

#endif // ITEM_TERAPEUTICA_H
