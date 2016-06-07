#include "paciente_frame.h"
#include "ui_paciente_frame.h"

paciente_frame::paciente_frame(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::paciente_frame)
{
    ui->setupUi(this);
}

paciente_frame::~paciente_frame()
{
    delete ui;
}
