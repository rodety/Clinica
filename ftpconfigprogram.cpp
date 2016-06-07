#include "ftpconfigprogram.h"
#include "ui_ftpconfigprogram.h"
#include <QMessageBox>
#include <QFile>
#include "configurador.h"
ftpconfigprogram::ftpconfigprogram(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ftpconfigprogram)
{
    ui->setupUi(this);
}

ftpconfigprogram::~ftpconfigprogram()
{
    delete ui;
}

void ftpconfigprogram::on_pushButton_2_clicked()
{
    this->close();
}

void ftpconfigprogram::on_pushButton_clicked()
{

    int ret = 0;
    if(ui->lineEdit_ftp_host->text().size() == 0)
            {
                ret = QMessageBox::warning(this, tr("Warning"), tr("Escriba la direccion IP del servidor FTP"),
                                                           QMessageBox::Close);
            }
        if(ui->lineEdit_ftp_user->text().size() == 0)
                {
                    ret = QMessageBox::warning(this, tr("Warning"), tr("Escriba el usuario del servidor FTP"),
                                                               QMessageBox::Close);
                }
        if(ui->lineEdit_ftp_pass->text().size() == 0)
                {
                    ret = QMessageBox::warning(this, tr("Warning"), tr("Escriba la contraseña del servidor FTP"),
                                                               QMessageBox::Close);
                }
        if(ui->lineEdit_ftp_port->text().size() == 0)
                {
                    ret = QMessageBox::warning(this, tr("Warning"), tr("Escriba el número de puerto del servidor FTP"),
                                                               QMessageBox::Close);
                }
        if(ret == 0)
            {

                QFile file("configftp.txt");
                file.open(QIODevice::WriteOnly|QIODevice::Text);
                QString str=
                        ui->lineEdit_ftp_host->text()+"#"
                        +ui->lineEdit_ftp_user->text()+"#"
                        +ui->lineEdit_ftp_pass->text()+"#"
                        +ui->lineEdit_ftp_port->text()+"#";


                file.write(str.toStdString().data());
                file.close();

                configurador* config = configurador::Instance();
                config->conectar_ftp();
            }
             this->close();

}
