#include "seguridad_ui.h"
#include "ui_seguridad_ui.h"

seguridad_ui::seguridad_ui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::seguridad_ui)
{
    ui->setupUi(this);
}

seguridad_ui::~seguridad_ui()
{
    delete ui;
}
