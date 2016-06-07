#include "item_terapeutica.h"
#include "ui_item_terapeutica.h"
#include <QSqlQuery>
item_terapeutica::item_terapeutica(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::item_terapeutica)
{

    ui->setupUi(this);
    const QDate FECHA = QDate::currentDate();
    ui->dateEdit_Fecha_inicio->setDate(FECHA);
    ui->dateEdit_Fecha_fin->setDate(FECHA);
}

item_terapeutica::~item_terapeutica()
{
    delete ui;
}

void item_terapeutica::on_pushButton_Aceptar_clicked()
{
    currentParent->agregar_terapeutica(ui->dateEdit_Fecha_inicio->text(),
                                       ui->timeEdit_Hora_inicio->text(),
                                       ui->lineEdit->text(),
                                       ui->dateEdit_Fecha_fin->text(),
                                       ui->timeEdit_Hora_fin->text());
    ui->lineEdit->clear();
    ui->dateEdit_Fecha_inicio->setFocus();

}

void item_terapeutica::on_pushButton_Cancelar_clicked()
{
    this->close();
}
void item_terapeutica::setCurrentParent(documentos_historial_ui * parent)
{
    currentParent = parent;
}
void item_terapeutica::setDni(QString numero)
{
    DNI = numero;
}
