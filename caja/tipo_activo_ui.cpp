#include "tipo_activo_ui.h"
#include "ui_tipo_activo_ui.h"

tipo_activo_ui::tipo_activo_ui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tipo_activo_ui)
{
    ui->setupUi(this);
}

tipo_activo_ui::~tipo_activo_ui()
{
    delete ui;
}
