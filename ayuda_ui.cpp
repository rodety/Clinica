#include "ayuda_ui.h"
#include "ui_ayuda_ui.h"

ayuda_ui::ayuda_ui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ayuda_ui)
{
    ui->setupUi(this);
}

ayuda_ui::~ayuda_ui()
{
    delete ui;
}
