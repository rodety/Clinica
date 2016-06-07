#include "tratamientos_ui.h"
#include "ui_tratamientos_ui.h"

tratamientos_ui::tratamientos_ui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tratamientos_ui)
{
    ui->setupUi(this);
}

tratamientos_ui::~tratamientos_ui()
{
    delete ui;
}
