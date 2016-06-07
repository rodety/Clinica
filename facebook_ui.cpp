#include "facebook_ui.h"
#include "ui_facebook_ui.h"

facebook_ui::facebook_ui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::facebook_ui)
{
    ui->setupUi(this);
}

facebook_ui::~facebook_ui()
{
    delete ui;
}
