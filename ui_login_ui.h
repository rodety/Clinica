/********************************************************************************
** Form generated from reading UI file 'login_ui.ui'
**
** Created: Sat 11. Jun 15:26:29 2016
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_UI_H
#define UI_LOGIN_UI_H

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

class Ui_login_ui
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_User;
    QLabel *label_2;
    QLineEdit *lineEdit_Password;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Login;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;

    void setupUi(QWidget *login_ui)
    {
        if (login_ui->objectName().isEmpty())
            login_ui->setObjectName(QString::fromUtf8("login_ui"));
        login_ui->resize(245, 99);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/add-group.png"), QSize(), QIcon::Normal, QIcon::Off);
        login_ui->setWindowIcon(icon);
        gridLayout_3 = new QGridLayout(login_ui);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit_User = new QLineEdit(login_ui);
        lineEdit_User->setObjectName(QString::fromUtf8("lineEdit_User"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        lineEdit_User->setFont(font);

        gridLayout->addWidget(lineEdit_User, 0, 1, 1, 2);

        label_2 = new QLabel(login_ui);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_Password = new QLineEdit(login_ui);
        lineEdit_Password->setObjectName(QString::fromUtf8("lineEdit_Password"));
        lineEdit_Password->setFont(font);
        lineEdit_Password->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit_Password, 1, 1, 1, 2);

        horizontalSpacer = new QSpacerItem(69, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        pushButton_Login = new QPushButton(login_ui);
        pushButton_Login->setObjectName(QString::fromUtf8("pushButton_Login"));
        pushButton_Login->setFont(font);

        gridLayout->addWidget(pushButton_Login, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(65, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        label = new QLabel(login_ui);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);


        retranslateUi(login_ui);

        QMetaObject::connectSlotsByName(login_ui);
    } // setupUi

    void retranslateUi(QWidget *login_ui)
    {
        login_ui->setWindowTitle(QApplication::translate("login_ui", "Clinica", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("login_ui", "Clave ", 0, QApplication::UnicodeUTF8));
        pushButton_Login->setText(QApplication::translate("login_ui", "&Entrar", 0, QApplication::UnicodeUTF8));
        pushButton_Login->setShortcut(QApplication::translate("login_ui", "Ctrl+E", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("login_ui", "Usuario ", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class login_ui: public Ui_login_ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_UI_H
