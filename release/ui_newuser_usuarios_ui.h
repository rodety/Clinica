/********************************************************************************
** Form generated from reading UI file 'newuser_usuarios_ui.ui'
**
** Created: Wed 27. May 12:29:15 2015
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWUSER_USUARIOS_UI_H
#define UI_NEWUSER_USUARIOS_UI_H

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

class Ui_newuser_usuarios_ui
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLineEdit *lineEdit_Name;
    QLabel *label_4;
    QLineEdit *lineEdit_dni;
    QPushButton *pushButton_consultar;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QLineEdit *lineEdit_UserNick;
    QLabel *label_2;
    QLineEdit *lineEdit_Password;
    QLabel *label_5;
    QLineEdit *lineEdit_confirmPassword;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Acept;
    QPushButton *pushButton_Cancel;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_Save;

    void setupUi(QWidget *newuser_usuarios_ui)
    {
        if (newuser_usuarios_ui->objectName().isEmpty())
            newuser_usuarios_ui->setObjectName(QString::fromUtf8("newuser_usuarios_ui"));
        newuser_usuarios_ui->resize(407, 183);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/Security_Reader2.png"), QSize(), QIcon::Normal, QIcon::Off);
        newuser_usuarios_ui->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(newuser_usuarios_ui);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(newuser_usuarios_ui);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        lineEdit_Name = new QLineEdit(newuser_usuarios_ui);
        lineEdit_Name->setObjectName(QString::fromUtf8("lineEdit_Name"));

        gridLayout->addWidget(lineEdit_Name, 0, 1, 1, 3);

        label_4 = new QLabel(newuser_usuarios_ui);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        lineEdit_dni = new QLineEdit(newuser_usuarios_ui);
        lineEdit_dni->setObjectName(QString::fromUtf8("lineEdit_dni"));

        gridLayout->addWidget(lineEdit_dni, 1, 1, 1, 1);

        pushButton_consultar = new QPushButton(newuser_usuarios_ui);
        pushButton_consultar->setObjectName(QString::fromUtf8("pushButton_consultar"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/zoom.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_consultar->setIcon(icon1);
        pushButton_consultar->setIconSize(QSize(20, 20));
        pushButton_consultar->setFlat(true);

        gridLayout->addWidget(pushButton_consultar, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 3, 1, 1);

        label = new QLabel(newuser_usuarios_ui);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        lineEdit_UserNick = new QLineEdit(newuser_usuarios_ui);
        lineEdit_UserNick->setObjectName(QString::fromUtf8("lineEdit_UserNick"));

        gridLayout->addWidget(lineEdit_UserNick, 2, 1, 1, 2);

        label_2 = new QLabel(newuser_usuarios_ui);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        lineEdit_Password = new QLineEdit(newuser_usuarios_ui);
        lineEdit_Password->setObjectName(QString::fromUtf8("lineEdit_Password"));
        lineEdit_Password->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit_Password, 3, 1, 1, 2);

        label_5 = new QLabel(newuser_usuarios_ui);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        lineEdit_confirmPassword = new QLineEdit(newuser_usuarios_ui);
        lineEdit_confirmPassword->setObjectName(QString::fromUtf8("lineEdit_confirmPassword"));
        lineEdit_confirmPassword->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit_confirmPassword, 4, 1, 1, 2);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 0, 1, 1);

        pushButton_Acept = new QPushButton(newuser_usuarios_ui);
        pushButton_Acept->setObjectName(QString::fromUtf8("pushButton_Acept"));

        gridLayout_3->addWidget(pushButton_Acept, 0, 1, 1, 1);

        pushButton_Cancel = new QPushButton(newuser_usuarios_ui);
        pushButton_Cancel->setObjectName(QString::fromUtf8("pushButton_Cancel"));

        gridLayout_3->addWidget(pushButton_Cancel, 0, 3, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 0, 4, 1, 1);

        pushButton_Save = new QPushButton(newuser_usuarios_ui);
        pushButton_Save->setObjectName(QString::fromUtf8("pushButton_Save"));

        gridLayout_3->addWidget(pushButton_Save, 0, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout_3, 1, 0, 1, 1);


        retranslateUi(newuser_usuarios_ui);

        QMetaObject::connectSlotsByName(newuser_usuarios_ui);
    } // setupUi

    void retranslateUi(QWidget *newuser_usuarios_ui)
    {
        newuser_usuarios_ui->setWindowTitle(QApplication::translate("newuser_usuarios_ui", "Usuario", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("newuser_usuarios_ui", "Nombre :", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("newuser_usuarios_ui", "Dni :", 0, QApplication::UnicodeUTF8));
        pushButton_consultar->setText(QApplication::translate("newuser_usuarios_ui", "Buscar", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("newuser_usuarios_ui", "Usuario :", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("newuser_usuarios_ui", "Clave :", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("newuser_usuarios_ui", "Confirmar clave :", 0, QApplication::UnicodeUTF8));
        pushButton_Acept->setText(QApplication::translate("newuser_usuarios_ui", "Aceptar", 0, QApplication::UnicodeUTF8));
        pushButton_Cancel->setText(QApplication::translate("newuser_usuarios_ui", "Cancelar", 0, QApplication::UnicodeUTF8));
        pushButton_Save->setText(QApplication::translate("newuser_usuarios_ui", "Guardar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class newuser_usuarios_ui: public Ui_newuser_usuarios_ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWUSER_USUARIOS_UI_H
