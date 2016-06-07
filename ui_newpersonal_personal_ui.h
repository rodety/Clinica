/********************************************************************************
** Form generated from reading UI file 'newpersonal_personal_ui.ui'
**
** Created: Thu 14. May 11:49:01 2015
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWPERSONAL_PERSONAL_UI_H
#define UI_NEWPERSONAL_PERSONAL_UI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_newpersonal_personal_ui
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_FatherName;
    QLabel *label_3;
    QLineEdit *lineEdit_MotherName;
    QLabel *label_5;
    QLineEdit *lineEdit_FirstName;
    QLabel *label_6;
    QLineEdit *lineEdit_SecondName;
    QLabel *label_7;
    QLineEdit *lineEdit_Dni;
    QLabel *label_10;
    QLabel *label_funcion;
    QLineEdit *lineEdit_funcion;
    QFrame *line_2;
    QLabel *label_15;
    QLabel *label;
    QLineEdit *lineEdit_Country;
    QLabel *label_4;
    QLineEdit *lineEdit_Departamento;
    QLabel *label_9;
    QLineEdit *lineEdit_Provincia;
    QLabel *label_25;
    QLineEdit *lineEdit_Distrito;
    QLabel *label_24;
    QLineEdit *lineEdit_Lugar;
    QFrame *line_3;
    QLabel *label_21;
    QComboBox *comboBox_MaritalStatus;
    QLabel *label_22;
    QComboBox *comboBox_Sex;
    QLabel *label_20;
    QLabel *label_11;
    QDateEdit *dateEdit_DateofBirth;
    QComboBox *comboBox_OrganDonor;
    QComboBox *comboBox_tipo;
    QLineEdit *lineEdit_dni_to_insert;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Acept;
    QPushButton *pushButton_Save;
    QPushButton *pushButton_Cancel;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *newpersonal_personal_ui)
    {
        if (newpersonal_personal_ui->objectName().isEmpty())
            newpersonal_personal_ui->setObjectName(QString::fromUtf8("newpersonal_personal_ui"));
        newpersonal_personal_ui->resize(519, 327);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/Add-Male-User.png"), QSize(), QIcon::Normal, QIcon::Off);
        newpersonal_personal_ui->setWindowIcon(icon);
        gridLayout_3 = new QGridLayout(newpersonal_personal_ui);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(newpersonal_personal_ui);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 2);

        lineEdit_FatherName = new QLineEdit(newpersonal_personal_ui);
        lineEdit_FatherName->setObjectName(QString::fromUtf8("lineEdit_FatherName"));

        gridLayout_2->addWidget(lineEdit_FatherName, 0, 2, 1, 2);

        label_3 = new QLabel(newpersonal_personal_ui);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 0, 4, 1, 1);

        lineEdit_MotherName = new QLineEdit(newpersonal_personal_ui);
        lineEdit_MotherName->setObjectName(QString::fromUtf8("lineEdit_MotherName"));

        gridLayout_2->addWidget(lineEdit_MotherName, 0, 5, 1, 1);

        label_5 = new QLabel(newpersonal_personal_ui);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 1, 0, 1, 2);

        lineEdit_FirstName = new QLineEdit(newpersonal_personal_ui);
        lineEdit_FirstName->setObjectName(QString::fromUtf8("lineEdit_FirstName"));

        gridLayout_2->addWidget(lineEdit_FirstName, 1, 2, 1, 2);

        label_6 = new QLabel(newpersonal_personal_ui);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 1, 4, 1, 1);

        lineEdit_SecondName = new QLineEdit(newpersonal_personal_ui);
        lineEdit_SecondName->setObjectName(QString::fromUtf8("lineEdit_SecondName"));

        gridLayout_2->addWidget(lineEdit_SecondName, 1, 5, 1, 1);

        label_7 = new QLabel(newpersonal_personal_ui);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 2, 0, 1, 1);

        lineEdit_Dni = new QLineEdit(newpersonal_personal_ui);
        lineEdit_Dni->setObjectName(QString::fromUtf8("lineEdit_Dni"));

        gridLayout_2->addWidget(lineEdit_Dni, 2, 2, 1, 2);

        label_10 = new QLabel(newpersonal_personal_ui);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_2->addWidget(label_10, 3, 0, 1, 2);

        label_funcion = new QLabel(newpersonal_personal_ui);
        label_funcion->setObjectName(QString::fromUtf8("label_funcion"));

        gridLayout_2->addWidget(label_funcion, 3, 4, 1, 1);

        lineEdit_funcion = new QLineEdit(newpersonal_personal_ui);
        lineEdit_funcion->setObjectName(QString::fromUtf8("lineEdit_funcion"));

        gridLayout_2->addWidget(lineEdit_funcion, 3, 5, 1, 1);

        line_2 = new QFrame(newpersonal_personal_ui);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_2, 4, 0, 1, 6);

        label_15 = new QLabel(newpersonal_personal_ui);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_2->addWidget(label_15, 5, 0, 1, 2);

        label = new QLabel(newpersonal_personal_ui);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 6, 0, 1, 2);

        lineEdit_Country = new QLineEdit(newpersonal_personal_ui);
        lineEdit_Country->setObjectName(QString::fromUtf8("lineEdit_Country"));

        gridLayout_2->addWidget(lineEdit_Country, 6, 2, 1, 2);

        label_4 = new QLabel(newpersonal_personal_ui);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 6, 4, 1, 1);

        lineEdit_Departamento = new QLineEdit(newpersonal_personal_ui);
        lineEdit_Departamento->setObjectName(QString::fromUtf8("lineEdit_Departamento"));

        gridLayout_2->addWidget(lineEdit_Departamento, 6, 5, 1, 1);

        label_9 = new QLabel(newpersonal_personal_ui);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 7, 0, 1, 2);

        lineEdit_Provincia = new QLineEdit(newpersonal_personal_ui);
        lineEdit_Provincia->setObjectName(QString::fromUtf8("lineEdit_Provincia"));

        gridLayout_2->addWidget(lineEdit_Provincia, 7, 2, 1, 2);

        label_25 = new QLabel(newpersonal_personal_ui);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_2->addWidget(label_25, 7, 4, 1, 1);

        lineEdit_Distrito = new QLineEdit(newpersonal_personal_ui);
        lineEdit_Distrito->setObjectName(QString::fromUtf8("lineEdit_Distrito"));

        gridLayout_2->addWidget(lineEdit_Distrito, 7, 5, 1, 1);

        label_24 = new QLabel(newpersonal_personal_ui);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_2->addWidget(label_24, 8, 0, 1, 2);

        lineEdit_Lugar = new QLineEdit(newpersonal_personal_ui);
        lineEdit_Lugar->setObjectName(QString::fromUtf8("lineEdit_Lugar"));

        gridLayout_2->addWidget(lineEdit_Lugar, 8, 2, 1, 2);

        line_3 = new QFrame(newpersonal_personal_ui);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_3, 9, 0, 1, 6);

        label_21 = new QLabel(newpersonal_personal_ui);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_2->addWidget(label_21, 10, 4, 1, 1);

        comboBox_MaritalStatus = new QComboBox(newpersonal_personal_ui);
        comboBox_MaritalStatus->setObjectName(QString::fromUtf8("comboBox_MaritalStatus"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox_MaritalStatus->sizePolicy().hasHeightForWidth());
        comboBox_MaritalStatus->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(comboBox_MaritalStatus, 10, 5, 1, 1);

        label_22 = new QLabel(newpersonal_personal_ui);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_2->addWidget(label_22, 11, 4, 1, 1);

        comboBox_Sex = new QComboBox(newpersonal_personal_ui);
        comboBox_Sex->setObjectName(QString::fromUtf8("comboBox_Sex"));
        sizePolicy.setHeightForWidth(comboBox_Sex->sizePolicy().hasHeightForWidth());
        comboBox_Sex->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(comboBox_Sex, 11, 5, 1, 1);

        label_20 = new QLabel(newpersonal_personal_ui);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_2->addWidget(label_20, 10, 0, 1, 1);

        label_11 = new QLabel(newpersonal_personal_ui);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_2->addWidget(label_11, 11, 0, 1, 1);

        dateEdit_DateofBirth = new QDateEdit(newpersonal_personal_ui);
        dateEdit_DateofBirth->setObjectName(QString::fromUtf8("dateEdit_DateofBirth"));
        sizePolicy.setHeightForWidth(dateEdit_DateofBirth->sizePolicy().hasHeightForWidth());
        dateEdit_DateofBirth->setSizePolicy(sizePolicy);
        dateEdit_DateofBirth->setCurrentSection(QDateTimeEdit::YearSection);
        dateEdit_DateofBirth->setCalendarPopup(true);

        gridLayout_2->addWidget(dateEdit_DateofBirth, 10, 2, 1, 2);

        comboBox_OrganDonor = new QComboBox(newpersonal_personal_ui);
        comboBox_OrganDonor->setObjectName(QString::fromUtf8("comboBox_OrganDonor"));
        sizePolicy.setHeightForWidth(comboBox_OrganDonor->sizePolicy().hasHeightForWidth());
        comboBox_OrganDonor->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(comboBox_OrganDonor, 11, 2, 1, 2);

        comboBox_tipo = new QComboBox(newpersonal_personal_ui);
        comboBox_tipo->setObjectName(QString::fromUtf8("comboBox_tipo"));
        sizePolicy.setHeightForWidth(comboBox_tipo->sizePolicy().hasHeightForWidth());
        comboBox_tipo->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(comboBox_tipo, 3, 2, 1, 1);

        lineEdit_dni_to_insert = new QLineEdit(newpersonal_personal_ui);
        lineEdit_dni_to_insert->setObjectName(QString::fromUtf8("lineEdit_dni_to_insert"));

        gridLayout_2->addWidget(lineEdit_dni_to_insert, 2, 5, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        pushButton_Acept = new QPushButton(newpersonal_personal_ui);
        pushButton_Acept->setObjectName(QString::fromUtf8("pushButton_Acept"));

        gridLayout->addWidget(pushButton_Acept, 0, 1, 1, 1);

        pushButton_Save = new QPushButton(newpersonal_personal_ui);
        pushButton_Save->setObjectName(QString::fromUtf8("pushButton_Save"));

        gridLayout->addWidget(pushButton_Save, 0, 2, 1, 1);

        pushButton_Cancel = new QPushButton(newpersonal_personal_ui);
        pushButton_Cancel->setObjectName(QString::fromUtf8("pushButton_Cancel"));

        gridLayout->addWidget(pushButton_Cancel, 0, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 4, 1, 1);


        gridLayout_3->addLayout(gridLayout, 2, 0, 1, 1);

        QWidget::setTabOrder(lineEdit_FatherName, lineEdit_MotherName);
        QWidget::setTabOrder(lineEdit_MotherName, lineEdit_FirstName);
        QWidget::setTabOrder(lineEdit_FirstName, lineEdit_SecondName);
        QWidget::setTabOrder(lineEdit_SecondName, lineEdit_Dni);
        QWidget::setTabOrder(lineEdit_Dni, comboBox_tipo);
        QWidget::setTabOrder(comboBox_tipo, lineEdit_funcion);
        QWidget::setTabOrder(lineEdit_funcion, lineEdit_Country);
        QWidget::setTabOrder(lineEdit_Country, lineEdit_Departamento);
        QWidget::setTabOrder(lineEdit_Departamento, lineEdit_Provincia);
        QWidget::setTabOrder(lineEdit_Provincia, lineEdit_Distrito);
        QWidget::setTabOrder(lineEdit_Distrito, lineEdit_Lugar);
        QWidget::setTabOrder(lineEdit_Lugar, dateEdit_DateofBirth);
        QWidget::setTabOrder(dateEdit_DateofBirth, comboBox_MaritalStatus);
        QWidget::setTabOrder(comboBox_MaritalStatus, comboBox_OrganDonor);
        QWidget::setTabOrder(comboBox_OrganDonor, comboBox_Sex);
        QWidget::setTabOrder(comboBox_Sex, pushButton_Acept);
        QWidget::setTabOrder(pushButton_Acept, pushButton_Save);
        QWidget::setTabOrder(pushButton_Save, pushButton_Cancel);

        retranslateUi(newpersonal_personal_ui);

        QMetaObject::connectSlotsByName(newpersonal_personal_ui);
    } // setupUi

    void retranslateUi(QWidget *newpersonal_personal_ui)
    {
        newpersonal_personal_ui->setWindowTitle(QApplication::translate("newpersonal_personal_ui", "Personal", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("newpersonal_personal_ui", "Apellido Paterno :", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("newpersonal_personal_ui", "Apellido Materno :", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("newpersonal_personal_ui", "Primer Nombre :", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("newpersonal_personal_ui", "Segundo Nombre:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("newpersonal_personal_ui", "Dni :", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("newpersonal_personal_ui", "Funci\303\263n :", 0, QApplication::UnicodeUTF8));
        label_funcion->setText(QApplication::translate("newpersonal_personal_ui", "Funcion :", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("newpersonal_personal_ui", "Direcci\303\263n :", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("newpersonal_personal_ui", "Pais :", 0, QApplication::UnicodeUTF8));
        lineEdit_Country->setText(QString());
        label_4->setText(QApplication::translate("newpersonal_personal_ui", "Departamento :", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("newpersonal_personal_ui", "Provincia :", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("newpersonal_personal_ui", "Distrito :", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("newpersonal_personal_ui", "Lugar :", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("newpersonal_personal_ui", "Estado Civil :", 0, QApplication::UnicodeUTF8));
        comboBox_MaritalStatus->clear();
        comboBox_MaritalStatus->insertItems(0, QStringList()
         << QApplication::translate("newpersonal_personal_ui", "Soltero/a", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("newpersonal_personal_ui", "Casado/a", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("newpersonal_personal_ui", "Divorciado/a", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("newpersonal_personal_ui", "Viudo/a", 0, QApplication::UnicodeUTF8)
        );
        label_22->setText(QApplication::translate("newpersonal_personal_ui", "Sexo", 0, QApplication::UnicodeUTF8));
        comboBox_Sex->clear();
        comboBox_Sex->insertItems(0, QStringList()
         << QApplication::translate("newpersonal_personal_ui", "Femenino", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("newpersonal_personal_ui", "Masculino", 0, QApplication::UnicodeUTF8)
        );
        label_20->setText(QApplication::translate("newpersonal_personal_ui", "Fecha de Naciemiento :", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("newpersonal_personal_ui", "Donacion de Organos :", 0, QApplication::UnicodeUTF8));
        dateEdit_DateofBirth->setDisplayFormat(QApplication::translate("newpersonal_personal_ui", "yyyy/MM/dd", 0, QApplication::UnicodeUTF8));
        comboBox_OrganDonor->clear();
        comboBox_OrganDonor->insertItems(0, QStringList()
         << QApplication::translate("newpersonal_personal_ui", "No informaci\303\263n", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("newpersonal_personal_ui", "Si", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("newpersonal_personal_ui", "No", 0, QApplication::UnicodeUTF8)
        );
        comboBox_tipo->clear();
        comboBox_tipo->insertItems(0, QStringList()
         << QApplication::translate("newpersonal_personal_ui", "M\303\251dico", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("newpersonal_personal_ui", "Enfermera", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("newpersonal_personal_ui", "Recepcionista", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("newpersonal_personal_ui", "Otro", 0, QApplication::UnicodeUTF8)
        );
        pushButton_Acept->setText(QApplication::translate("newpersonal_personal_ui", "Aceptar", 0, QApplication::UnicodeUTF8));
        pushButton_Save->setText(QApplication::translate("newpersonal_personal_ui", "Guardar", 0, QApplication::UnicodeUTF8));
        pushButton_Cancel->setText(QApplication::translate("newpersonal_personal_ui", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class newpersonal_personal_ui: public Ui_newpersonal_personal_ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWPERSONAL_PERSONAL_UI_H
