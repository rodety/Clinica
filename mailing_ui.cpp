#include "mailing_ui.h"
#include "ui_mailing_ui.h"

mailing_ui::mailing_ui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mailing_ui)
{
    ui->setupUi(this);


}

mailing_ui::~mailing_ui()
{
    delete ui;
}
