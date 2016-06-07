#include "frame_paciente.h"
#include "ui_frame_paciente.h"

frame_paciente::frame_paciente(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::frame_paciente)
{
    ui->setupUi(this);
}

frame_paciente::~frame_paciente()
{
    delete ui;
}
