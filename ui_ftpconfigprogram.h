/********************************************************************************
** Form generated from reading UI file 'ftpconfigprogram.ui'
**
** Created: Sat 11. Jun 15:26:29 2016
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FTPCONFIGPROGRAM_H
#define UI_FTPCONFIGPROGRAM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ftpconfigprogram
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_ftp_host;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_ftp_user;
    QLineEdit *lineEdit_ftp_pass;
    QLineEdit *lineEdit_ftp_port;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *ftpconfigprogram)
    {
        if (ftpconfigprogram->objectName().isEmpty())
            ftpconfigprogram->setObjectName(QString::fromUtf8("ftpconfigprogram"));
        ftpconfigprogram->resize(289, 208);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/1349716435_cog.png"), QSize(), QIcon::Normal, QIcon::Off);
        ftpconfigprogram->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(ftpconfigprogram);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(ftpconfigprogram);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 4);

        label_2 = new QLabel(ftpconfigprogram);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 2);

        lineEdit_ftp_host = new QLineEdit(ftpconfigprogram);
        lineEdit_ftp_host->setObjectName(QString::fromUtf8("lineEdit_ftp_host"));
        lineEdit_ftp_host->setFont(font);

        gridLayout->addWidget(lineEdit_ftp_host, 1, 2, 1, 2);

        label_3 = new QLabel(ftpconfigprogram);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 2, 0, 1, 2);

        label_4 = new QLabel(ftpconfigprogram);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 3, 0, 1, 2);

        label_5 = new QLabel(ftpconfigprogram);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 4, 0, 1, 2);

        lineEdit_ftp_user = new QLineEdit(ftpconfigprogram);
        lineEdit_ftp_user->setObjectName(QString::fromUtf8("lineEdit_ftp_user"));
        lineEdit_ftp_user->setFont(font);

        gridLayout->addWidget(lineEdit_ftp_user, 2, 2, 1, 2);

        lineEdit_ftp_pass = new QLineEdit(ftpconfigprogram);
        lineEdit_ftp_pass->setObjectName(QString::fromUtf8("lineEdit_ftp_pass"));
        lineEdit_ftp_pass->setFont(font);
        lineEdit_ftp_pass->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit_ftp_pass, 3, 2, 1, 2);

        lineEdit_ftp_port = new QLineEdit(ftpconfigprogram);
        lineEdit_ftp_port->setObjectName(QString::fromUtf8("lineEdit_ftp_port"));
        lineEdit_ftp_port->setFont(font);

        gridLayout->addWidget(lineEdit_ftp_port, 4, 2, 1, 2);

        pushButton = new QPushButton(ftpconfigprogram);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font);

        gridLayout->addWidget(pushButton, 5, 1, 1, 1);

        pushButton_2 = new QPushButton(ftpconfigprogram);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font);

        gridLayout->addWidget(pushButton_2, 5, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 5, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 5, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        QWidget::setTabOrder(lineEdit_ftp_host, lineEdit_ftp_user);
        QWidget::setTabOrder(lineEdit_ftp_user, lineEdit_ftp_pass);
        QWidget::setTabOrder(lineEdit_ftp_pass, lineEdit_ftp_port);
        QWidget::setTabOrder(lineEdit_ftp_port, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_2);

        retranslateUi(ftpconfigprogram);

        QMetaObject::connectSlotsByName(ftpconfigprogram);
    } // setupUi

    void retranslateUi(QWidget *ftpconfigprogram)
    {
        ftpconfigprogram->setWindowTitle(QApplication::translate("ftpconfigprogram", "Configurac\303\255on de servidor FTP", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ftpconfigprogram", "CONFIGURACION FTP", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ftpconfigprogram", "Direcci\303\263n IP:", 0, QApplication::UnicodeUTF8));
        lineEdit_ftp_host->setText(QApplication::translate("ftpconfigprogram", "192.168.1.254", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ftpconfigprogram", "Usuario:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ftpconfigprogram", "Contrase\303\261a", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ftpconfigprogram", "Puerto", 0, QApplication::UnicodeUTF8));
        lineEdit_ftp_user->setText(QApplication::translate("ftpconfigprogram", "remote", 0, QApplication::UnicodeUTF8));
        lineEdit_ftp_pass->setText(QApplication::translate("ftpconfigprogram", "jfdf5d4f65ds4@bf", 0, QApplication::UnicodeUTF8));
        lineEdit_ftp_port->setText(QApplication::translate("ftpconfigprogram", "21", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("ftpconfigprogram", "Aceptar", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("ftpconfigprogram", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ftpconfigprogram: public Ui_ftpconfigprogram {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FTPCONFIGPROGRAM_H
