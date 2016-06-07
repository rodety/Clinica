#include "caja_ui.h"
#include "ui_caja_ui.h"
#include <caja/nuevo_ingreso_ui.h>

caja_ui::caja_ui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::caja_ui)
{
    ui->setupUi(this);
}

caja_ui::~caja_ui()
{
    delete ui;
}

void caja_ui::on_newAlert_alerta_2_clicked()
{
    nuevo_ingreso_ui * form = new nuevo_ingreso_ui;
    form->show();
}
