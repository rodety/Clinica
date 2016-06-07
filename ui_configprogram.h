/********************************************************************************
** Form generated from reading UI file 'configprogram.ui'
**
** Created: Thu 14. May 11:49:01 2015
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGPROGRAM_H
#define UI_CONFIGPROGRAM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigProgram
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;
    QFormLayout *formLayout;
    QLabel *label_6;
    QLabel *label;
    QLineEdit *lineEdit_hostName;
    QLabel *label_2;
    QLineEdit *lineEdit_databaseName;
    QLabel *label_3;
    QLineEdit *lineEdit_userName;
    QLabel *label_4;
    QLineEdit *lineEdit_password;
    QLabel *label_10;
    QLineEdit *lineEdit_port;

    void setupUi(QWidget *ConfigProgram)
    {
        if (ConfigProgram->objectName().isEmpty())
            ConfigProgram->setObjectName(QString::fromUtf8("ConfigProgram"));
        ConfigProgram->resize(324, 206);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/1349716435_cog.png"), QSize(), QIcon::Normal, QIcon::Off);
        ConfigProgram->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(ConfigProgram);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(38, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        pushButton = new QPushButton(ConfigProgram);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 1, 1, 1, 1);

        pushButton_2 = new QPushButton(ConfigProgram);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(58, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 3, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_6 = new QLabel(ConfigProgram);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(0, QFormLayout::SpanningRole, label_6);

        label = new QLabel(ConfigProgram);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        lineEdit_hostName = new QLineEdit(ConfigProgram);
        lineEdit_hostName->setObjectName(QString::fromUtf8("lineEdit_hostName"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_hostName);

        label_2 = new QLabel(ConfigProgram);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        lineEdit_databaseName = new QLineEdit(ConfigProgram);
        lineEdit_databaseName->setObjectName(QString::fromUtf8("lineEdit_databaseName"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_databaseName);

        label_3 = new QLabel(ConfigProgram);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        lineEdit_userName = new QLineEdit(ConfigProgram);
        lineEdit_userName->setObjectName(QString::fromUtf8("lineEdit_userName"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_userName);

        label_4 = new QLabel(ConfigProgram);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        lineEdit_password = new QLineEdit(ConfigProgram);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_password);

        label_10 = new QLabel(ConfigProgram);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_10);

        lineEdit_port = new QLineEdit(ConfigProgram);
        lineEdit_port->setObjectName(QString::fromUtf8("lineEdit_port"));

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEdit_port);


        gridLayout->addLayout(formLayout, 0, 0, 1, 4);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(ConfigProgram);

        QMetaObject::connectSlotsByName(ConfigProgram);
    } // setupUi

    void retranslateUi(QWidget *ConfigProgram)
    {
        ConfigProgram->setWindowTitle(QApplication::translate("ConfigProgram", "Configuraci\303\263n de base de datos", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("ConfigProgram", "Aceptar", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("ConfigProgram", "Cancel", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ConfigProgram", "DATABASE SERVER", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ConfigProgram", "Host Name:", 0, QApplication::UnicodeUTF8));
        lineEdit_hostName->setText(QApplication::translate("ConfigProgram", "192.168.1.254", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ConfigProgram", "Database Name:", 0, QApplication::UnicodeUTF8));
        lineEdit_databaseName->setText(QApplication::translate("ConfigProgram", "clinicadb", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ConfigProgram", "User Name:", 0, QApplication::UnicodeUTF8));
        lineEdit_userName->setText(QApplication::translate("ConfigProgram", "clinicadb", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ConfigProgram", "Password:", 0, QApplication::UnicodeUTF8));
        lineEdit_password->setText(QApplication::translate("ConfigProgram", "clinica123", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("ConfigProgram", "Port:", 0, QApplication::UnicodeUTF8));
        lineEdit_port->setText(QApplication::translate("ConfigProgram", "3306", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ConfigProgram: public Ui_ConfigProgram {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGPROGRAM_H
