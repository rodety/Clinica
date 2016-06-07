#include "nuevo_ingreso_ui.h"
#include "ui_nuevo_ingreso_ui.h"

nuevo_ingreso_ui::nuevo_ingreso_ui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::nuevo_ingreso_ui)
{
    ui->setupUi(this);
}

nuevo_ingreso_ui::~nuevo_ingreso_ui()
{
    delete ui;
}
