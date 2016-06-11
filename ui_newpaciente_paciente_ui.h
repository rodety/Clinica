/********************************************************************************
** Form generated from reading UI file 'newpaciente_paciente_ui.ui'
**
** Created: Sat 11. Jun 15:49:54 2016
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWPACIENTE_PACIENTE_UI_H
#define UI_NEWPACIENTE_PACIENTE_UI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_newPaciente_paciente_ui
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_FatherName;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLineEdit *lineEdit_MotherName;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QLineEdit *lineEdit_FirstName;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QLineEdit *lineEdit_SecondName;
    QLabel *label_24;
    QLineEdit *lineEdit_Lugar;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_25;
    QLineEdit *lineEdit_Distrito;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_9;
    QLineEdit *lineEdit_Provincia;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_4;
    QLineEdit *lineEdit_Departamento;
    QLabel *label;
    QLineEdit *lineEdit_Country;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_8;
    QLineEdit *lineEdit_Telephone;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_15;
    QLineEdit *lineEdit_Cellphone;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_7;
    QLineEdit *lineEdit_Dni;
    QLabel *label_21;
    QComboBox *comboBox_MaritalStatus;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_10;
    QLineEdit *lineEdit_Ocupation;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_13;
    QComboBox *comboBox_Sex;
    QLabel *label_19;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox_PrefSurgery;
    QLineEdit *lineEdit_cirujias_previas;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_23;
    QLineEdit *lineEdit_alergias;
    QLabel *label_14;
    QLineEdit *lineEdit_antecedentes;
    QLabel *label_17;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBox_CurrentMedication;
    QLineEdit *lineEdit_Medicacion_actual;
    QLabel *label_20;
    QDateEdit *dateEdit_DateofBirth;
    QLabel *label_11;
    QComboBox *comboBox_OrganDonor;
    QLabel *label_18;
    QLineEdit *lineEdit_TutorPerson;
    QLabel *label_12;
    QLineEdit *lineEdit_TelephoneTutorPerson;
    QLabel *label_22;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit_historiaClinica;
    QCheckBox *checkBox_Historia;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_16;
    QLineEdit *lineEdit_Email;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_Acept;
    QPushButton *pushButton_Save;
    QPushButton *pushButton_Cancel;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *newPaciente_paciente_ui)
    {
        if (newPaciente_paciente_ui->objectName().isEmpty())
            newPaciente_paciente_ui->setObjectName(QString::fromUtf8("newPaciente_paciente_ui"));
        newPaciente_paciente_ui->resize(999, 464);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/Add-Male-User.png"), QSize(), QIcon::Normal, QIcon::Off);
        newPaciente_paciente_ui->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(newPaciente_paciente_ui);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(newPaciente_paciente_ui);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        lineEdit_FatherName = new QLineEdit(newPaciente_paciente_ui);
        lineEdit_FatherName->setObjectName(QString::fromUtf8("lineEdit_FatherName"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_FatherName->sizePolicy().hasHeightForWidth());
        lineEdit_FatherName->setSizePolicy(sizePolicy1);
        lineEdit_FatherName->setFont(font);

        gridLayout->addWidget(lineEdit_FatherName, 0, 1, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_3 = new QLabel(newPaciente_paciente_ui);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setFont(font);

        horizontalLayout_5->addWidget(label_3);

        lineEdit_MotherName = new QLineEdit(newPaciente_paciente_ui);
        lineEdit_MotherName->setObjectName(QString::fromUtf8("lineEdit_MotherName"));
        sizePolicy1.setHeightForWidth(lineEdit_MotherName->sizePolicy().hasHeightForWidth());
        lineEdit_MotherName->setSizePolicy(sizePolicy1);
        lineEdit_MotherName->setFont(font);

        horizontalLayout_5->addWidget(lineEdit_MotherName);


        gridLayout->addLayout(horizontalLayout_5, 0, 2, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_5 = new QLabel(newPaciente_paciente_ui);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        horizontalLayout_6->addWidget(label_5);

        lineEdit_FirstName = new QLineEdit(newPaciente_paciente_ui);
        lineEdit_FirstName->setObjectName(QString::fromUtf8("lineEdit_FirstName"));
        sizePolicy1.setHeightForWidth(lineEdit_FirstName->sizePolicy().hasHeightForWidth());
        lineEdit_FirstName->setSizePolicy(sizePolicy1);
        lineEdit_FirstName->setFont(font);

        horizontalLayout_6->addWidget(lineEdit_FirstName);


        gridLayout->addLayout(horizontalLayout_6, 0, 3, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_6 = new QLabel(newPaciente_paciente_ui);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        horizontalLayout_7->addWidget(label_6);

        lineEdit_SecondName = new QLineEdit(newPaciente_paciente_ui);
        lineEdit_SecondName->setObjectName(QString::fromUtf8("lineEdit_SecondName"));
        sizePolicy1.setHeightForWidth(lineEdit_SecondName->sizePolicy().hasHeightForWidth());
        lineEdit_SecondName->setSizePolicy(sizePolicy1);
        lineEdit_SecondName->setFont(font);

        horizontalLayout_7->addWidget(lineEdit_SecondName);


        gridLayout->addLayout(horizontalLayout_7, 0, 4, 1, 1);

        label_24 = new QLabel(newPaciente_paciente_ui);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setFont(font);

        gridLayout->addWidget(label_24, 1, 0, 1, 1);

        lineEdit_Lugar = new QLineEdit(newPaciente_paciente_ui);
        lineEdit_Lugar->setObjectName(QString::fromUtf8("lineEdit_Lugar"));
        lineEdit_Lugar->setFont(font);

        gridLayout->addWidget(lineEdit_Lugar, 1, 1, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_25 = new QLabel(newPaciente_paciente_ui);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setFont(font);

        horizontalLayout_8->addWidget(label_25);

        lineEdit_Distrito = new QLineEdit(newPaciente_paciente_ui);
        lineEdit_Distrito->setObjectName(QString::fromUtf8("lineEdit_Distrito"));
        sizePolicy1.setHeightForWidth(lineEdit_Distrito->sizePolicy().hasHeightForWidth());
        lineEdit_Distrito->setSizePolicy(sizePolicy1);
        lineEdit_Distrito->setFont(font);

        horizontalLayout_8->addWidget(lineEdit_Distrito);


        gridLayout->addLayout(horizontalLayout_8, 1, 2, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_9 = new QLabel(newPaciente_paciente_ui);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);

        horizontalLayout_10->addWidget(label_9);

        lineEdit_Provincia = new QLineEdit(newPaciente_paciente_ui);
        lineEdit_Provincia->setObjectName(QString::fromUtf8("lineEdit_Provincia"));
        sizePolicy1.setHeightForWidth(lineEdit_Provincia->sizePolicy().hasHeightForWidth());
        lineEdit_Provincia->setSizePolicy(sizePolicy1);
        lineEdit_Provincia->setFont(font);

        horizontalLayout_10->addWidget(lineEdit_Provincia);


        gridLayout->addLayout(horizontalLayout_10, 1, 3, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_4 = new QLabel(newPaciente_paciente_ui);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setFont(font);

        horizontalLayout_11->addWidget(label_4);

        lineEdit_Departamento = new QLineEdit(newPaciente_paciente_ui);
        lineEdit_Departamento->setObjectName(QString::fromUtf8("lineEdit_Departamento"));
        sizePolicy1.setHeightForWidth(lineEdit_Departamento->sizePolicy().hasHeightForWidth());
        lineEdit_Departamento->setSizePolicy(sizePolicy1);
        lineEdit_Departamento->setFont(font);

        horizontalLayout_11->addWidget(lineEdit_Departamento);


        gridLayout->addLayout(horizontalLayout_11, 1, 4, 1, 1);

        label = new QLabel(newPaciente_paciente_ui);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setFont(font);

        gridLayout->addWidget(label, 2, 0, 1, 1);

        lineEdit_Country = new QLineEdit(newPaciente_paciente_ui);
        lineEdit_Country->setObjectName(QString::fromUtf8("lineEdit_Country"));
        sizePolicy1.setHeightForWidth(lineEdit_Country->sizePolicy().hasHeightForWidth());
        lineEdit_Country->setSizePolicy(sizePolicy1);
        lineEdit_Country->setFont(font);

        gridLayout->addWidget(lineEdit_Country, 2, 1, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_8 = new QLabel(newPaciente_paciente_ui);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        horizontalLayout_9->addWidget(label_8);

        lineEdit_Telephone = new QLineEdit(newPaciente_paciente_ui);
        lineEdit_Telephone->setObjectName(QString::fromUtf8("lineEdit_Telephone"));
        sizePolicy1.setHeightForWidth(lineEdit_Telephone->sizePolicy().hasHeightForWidth());
        lineEdit_Telephone->setSizePolicy(sizePolicy1);
        lineEdit_Telephone->setFont(font);

        horizontalLayout_9->addWidget(lineEdit_Telephone);


        gridLayout->addLayout(horizontalLayout_9, 2, 2, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_15 = new QLabel(newPaciente_paciente_ui);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font);

        horizontalLayout_12->addWidget(label_15);

        lineEdit_Cellphone = new QLineEdit(newPaciente_paciente_ui);
        lineEdit_Cellphone->setObjectName(QString::fromUtf8("lineEdit_Cellphone"));
        sizePolicy1.setHeightForWidth(lineEdit_Cellphone->sizePolicy().hasHeightForWidth());
        lineEdit_Cellphone->setSizePolicy(sizePolicy1);
        lineEdit_Cellphone->setFont(font);

        horizontalLayout_12->addWidget(lineEdit_Cellphone);


        gridLayout->addLayout(horizontalLayout_12, 2, 3, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_7 = new QLabel(newPaciente_paciente_ui);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        horizontalLayout_13->addWidget(label_7);

        lineEdit_Dni = new QLineEdit(newPaciente_paciente_ui);
        lineEdit_Dni->setObjectName(QString::fromUtf8("lineEdit_Dni"));
        sizePolicy1.setHeightForWidth(lineEdit_Dni->sizePolicy().hasHeightForWidth());
        lineEdit_Dni->setSizePolicy(sizePolicy1);
        lineEdit_Dni->setFont(font);

        horizontalLayout_13->addWidget(lineEdit_Dni);


        gridLayout->addLayout(horizontalLayout_13, 2, 4, 1, 1);

        label_21 = new QLabel(newPaciente_paciente_ui);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        sizePolicy.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy);
        label_21->setFont(font);

        gridLayout->addWidget(label_21, 3, 0, 1, 1);

        comboBox_MaritalStatus = new QComboBox(newPaciente_paciente_ui);
        comboBox_MaritalStatus->setObjectName(QString::fromUtf8("comboBox_MaritalStatus"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comboBox_MaritalStatus->sizePolicy().hasHeightForWidth());
        comboBox_MaritalStatus->setSizePolicy(sizePolicy2);
        comboBox_MaritalStatus->setFont(font);

        gridLayout->addWidget(comboBox_MaritalStatus, 3, 1, 1, 1);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_10 = new QLabel(newPaciente_paciente_ui);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);

        horizontalLayout_15->addWidget(label_10);

        lineEdit_Ocupation = new QLineEdit(newPaciente_paciente_ui);
        lineEdit_Ocupation->setObjectName(QString::fromUtf8("lineEdit_Ocupation"));
        sizePolicy1.setHeightForWidth(lineEdit_Ocupation->sizePolicy().hasHeightForWidth());
        lineEdit_Ocupation->setSizePolicy(sizePolicy1);
        lineEdit_Ocupation->setFont(font);

        horizontalLayout_15->addWidget(lineEdit_Ocupation);


        gridLayout->addLayout(horizontalLayout_15, 3, 2, 1, 1);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_13 = new QLabel(newPaciente_paciente_ui);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font);

        horizontalLayout_14->addWidget(label_13);

        comboBox_Sex = new QComboBox(newPaciente_paciente_ui);
        comboBox_Sex->setObjectName(QString::fromUtf8("comboBox_Sex"));
        sizePolicy2.setHeightForWidth(comboBox_Sex->sizePolicy().hasHeightForWidth());
        comboBox_Sex->setSizePolicy(sizePolicy2);
        comboBox_Sex->setFont(font);

        horizontalLayout_14->addWidget(comboBox_Sex);


        gridLayout->addLayout(horizontalLayout_14, 3, 3, 1, 1);

        label_19 = new QLabel(newPaciente_paciente_ui);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setFont(font);

        gridLayout->addWidget(label_19, 4, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        comboBox_PrefSurgery = new QComboBox(newPaciente_paciente_ui);
        comboBox_PrefSurgery->setObjectName(QString::fromUtf8("comboBox_PrefSurgery"));
        sizePolicy2.setHeightForWidth(comboBox_PrefSurgery->sizePolicy().hasHeightForWidth());
        comboBox_PrefSurgery->setSizePolicy(sizePolicy2);
        comboBox_PrefSurgery->setFont(font);

        horizontalLayout->addWidget(comboBox_PrefSurgery);

        lineEdit_cirujias_previas = new QLineEdit(newPaciente_paciente_ui);
        lineEdit_cirujias_previas->setObjectName(QString::fromUtf8("lineEdit_cirujias_previas"));
        lineEdit_cirujias_previas->setFont(font);

        horizontalLayout->addWidget(lineEdit_cirujias_previas);


        gridLayout->addLayout(horizontalLayout, 4, 1, 1, 1);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_23 = new QLabel(newPaciente_paciente_ui);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setFont(font);

        horizontalLayout_16->addWidget(label_23);

        lineEdit_alergias = new QLineEdit(newPaciente_paciente_ui);
        lineEdit_alergias->setObjectName(QString::fromUtf8("lineEdit_alergias"));
        lineEdit_alergias->setFont(font);

        horizontalLayout_16->addWidget(lineEdit_alergias);


        gridLayout->addLayout(horizontalLayout_16, 4, 2, 1, 3);

        label_14 = new QLabel(newPaciente_paciente_ui);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font);

        gridLayout->addWidget(label_14, 5, 0, 1, 1);

        lineEdit_antecedentes = new QLineEdit(newPaciente_paciente_ui);
        lineEdit_antecedentes->setObjectName(QString::fromUtf8("lineEdit_antecedentes"));
        lineEdit_antecedentes->setFont(font);

        gridLayout->addWidget(lineEdit_antecedentes, 5, 1, 1, 4);

        label_17 = new QLabel(newPaciente_paciente_ui);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setFont(font);

        gridLayout->addWidget(label_17, 6, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        comboBox_CurrentMedication = new QComboBox(newPaciente_paciente_ui);
        comboBox_CurrentMedication->setObjectName(QString::fromUtf8("comboBox_CurrentMedication"));
        sizePolicy2.setHeightForWidth(comboBox_CurrentMedication->sizePolicy().hasHeightForWidth());
        comboBox_CurrentMedication->setSizePolicy(sizePolicy2);
        comboBox_CurrentMedication->setFont(font);

        horizontalLayout_2->addWidget(comboBox_CurrentMedication);

        lineEdit_Medicacion_actual = new QLineEdit(newPaciente_paciente_ui);
        lineEdit_Medicacion_actual->setObjectName(QString::fromUtf8("lineEdit_Medicacion_actual"));
        lineEdit_Medicacion_actual->setFont(font);

        horizontalLayout_2->addWidget(lineEdit_Medicacion_actual);


        gridLayout->addLayout(horizontalLayout_2, 6, 1, 1, 4);

        label_20 = new QLabel(newPaciente_paciente_ui);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        sizePolicy.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy);
        label_20->setFont(font);

        gridLayout->addWidget(label_20, 7, 0, 1, 1);

        dateEdit_DateofBirth = new QDateEdit(newPaciente_paciente_ui);
        dateEdit_DateofBirth->setObjectName(QString::fromUtf8("dateEdit_DateofBirth"));
        sizePolicy2.setHeightForWidth(dateEdit_DateofBirth->sizePolicy().hasHeightForWidth());
        dateEdit_DateofBirth->setSizePolicy(sizePolicy2);
        dateEdit_DateofBirth->setFont(font);
        dateEdit_DateofBirth->setCurrentSection(QDateTimeEdit::YearSection);
        dateEdit_DateofBirth->setCalendarPopup(true);

        gridLayout->addWidget(dateEdit_DateofBirth, 7, 1, 1, 1);

        label_11 = new QLabel(newPaciente_paciente_ui);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);

        gridLayout->addWidget(label_11, 8, 0, 1, 1);

        comboBox_OrganDonor = new QComboBox(newPaciente_paciente_ui);
        comboBox_OrganDonor->setObjectName(QString::fromUtf8("comboBox_OrganDonor"));
        sizePolicy2.setHeightForWidth(comboBox_OrganDonor->sizePolicy().hasHeightForWidth());
        comboBox_OrganDonor->setSizePolicy(sizePolicy2);
        comboBox_OrganDonor->setFont(font);

        gridLayout->addWidget(comboBox_OrganDonor, 8, 1, 1, 1);

        label_18 = new QLabel(newPaciente_paciente_ui);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        sizePolicy.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy);
        label_18->setFont(font);

        gridLayout->addWidget(label_18, 9, 0, 1, 1);

        lineEdit_TutorPerson = new QLineEdit(newPaciente_paciente_ui);
        lineEdit_TutorPerson->setObjectName(QString::fromUtf8("lineEdit_TutorPerson"));
        sizePolicy1.setHeightForWidth(lineEdit_TutorPerson->sizePolicy().hasHeightForWidth());
        lineEdit_TutorPerson->setSizePolicy(sizePolicy1);
        lineEdit_TutorPerson->setFont(font);

        gridLayout->addWidget(lineEdit_TutorPerson, 9, 1, 1, 2);

        label_12 = new QLabel(newPaciente_paciente_ui);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);
        label_12->setFont(font);

        gridLayout->addWidget(label_12, 10, 0, 1, 1);

        lineEdit_TelephoneTutorPerson = new QLineEdit(newPaciente_paciente_ui);
        lineEdit_TelephoneTutorPerson->setObjectName(QString::fromUtf8("lineEdit_TelephoneTutorPerson"));
        sizePolicy1.setHeightForWidth(lineEdit_TelephoneTutorPerson->sizePolicy().hasHeightForWidth());
        lineEdit_TelephoneTutorPerson->setSizePolicy(sizePolicy1);
        lineEdit_TelephoneTutorPerson->setFont(font);

        gridLayout->addWidget(lineEdit_TelephoneTutorPerson, 10, 1, 1, 2);

        label_22 = new QLabel(newPaciente_paciente_ui);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        sizePolicy2.setHeightForWidth(label_22->sizePolicy().hasHeightForWidth());
        label_22->setSizePolicy(sizePolicy2);
        label_22->setFont(font);

        gridLayout->addWidget(label_22, 11, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lineEdit_historiaClinica = new QLineEdit(newPaciente_paciente_ui);
        lineEdit_historiaClinica->setObjectName(QString::fromUtf8("lineEdit_historiaClinica"));
        lineEdit_historiaClinica->setEnabled(true);
        sizePolicy1.setHeightForWidth(lineEdit_historiaClinica->sizePolicy().hasHeightForWidth());
        lineEdit_historiaClinica->setSizePolicy(sizePolicy1);
        lineEdit_historiaClinica->setFont(font);

        horizontalLayout_3->addWidget(lineEdit_historiaClinica);

        checkBox_Historia = new QCheckBox(newPaciente_paciente_ui);
        checkBox_Historia->setObjectName(QString::fromUtf8("checkBox_Historia"));
        checkBox_Historia->setFont(font);

        horizontalLayout_3->addWidget(checkBox_Historia);


        gridLayout->addLayout(horizontalLayout_3, 11, 1, 1, 2);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_16 = new QLabel(newPaciente_paciente_ui);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font);

        horizontalLayout_17->addWidget(label_16);

        lineEdit_Email = new QLineEdit(newPaciente_paciente_ui);
        lineEdit_Email->setObjectName(QString::fromUtf8("lineEdit_Email"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lineEdit_Email->sizePolicy().hasHeightForWidth());
        lineEdit_Email->setSizePolicy(sizePolicy3);
        lineEdit_Email->setFont(font);

        horizontalLayout_17->addWidget(lineEdit_Email);


        gridLayout->addLayout(horizontalLayout_17, 7, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        pushButton_Acept = new QPushButton(newPaciente_paciente_ui);
        pushButton_Acept->setObjectName(QString::fromUtf8("pushButton_Acept"));
        pushButton_Acept->setFont(font);

        horizontalLayout_4->addWidget(pushButton_Acept);

        pushButton_Save = new QPushButton(newPaciente_paciente_ui);
        pushButton_Save->setObjectName(QString::fromUtf8("pushButton_Save"));
        pushButton_Save->setFont(font);

        horizontalLayout_4->addWidget(pushButton_Save);

        pushButton_Cancel = new QPushButton(newPaciente_paciente_ui);
        pushButton_Cancel->setObjectName(QString::fromUtf8("pushButton_Cancel"));
        pushButton_Cancel->setFont(font);

        horizontalLayout_4->addWidget(pushButton_Cancel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        gridLayout_2->addLayout(horizontalLayout_4, 2, 0, 1, 1);

        QWidget::setTabOrder(lineEdit_FatherName, lineEdit_MotherName);
        QWidget::setTabOrder(lineEdit_MotherName, lineEdit_FirstName);
        QWidget::setTabOrder(lineEdit_FirstName, lineEdit_SecondName);
        QWidget::setTabOrder(lineEdit_SecondName, lineEdit_Lugar);
        QWidget::setTabOrder(lineEdit_Lugar, lineEdit_Distrito);
        QWidget::setTabOrder(lineEdit_Distrito, lineEdit_Provincia);
        QWidget::setTabOrder(lineEdit_Provincia, lineEdit_Departamento);
        QWidget::setTabOrder(lineEdit_Departamento, lineEdit_Country);
        QWidget::setTabOrder(lineEdit_Country, lineEdit_Telephone);
        QWidget::setTabOrder(lineEdit_Telephone, lineEdit_Cellphone);
        QWidget::setTabOrder(lineEdit_Cellphone, lineEdit_Dni);
        QWidget::setTabOrder(lineEdit_Dni, comboBox_MaritalStatus);
        QWidget::setTabOrder(comboBox_MaritalStatus, lineEdit_Ocupation);
        QWidget::setTabOrder(lineEdit_Ocupation, comboBox_Sex);
        QWidget::setTabOrder(comboBox_Sex, comboBox_PrefSurgery);
        QWidget::setTabOrder(comboBox_PrefSurgery, lineEdit_cirujias_previas);
        QWidget::setTabOrder(lineEdit_cirujias_previas, lineEdit_alergias);
        QWidget::setTabOrder(lineEdit_alergias, lineEdit_antecedentes);
        QWidget::setTabOrder(lineEdit_antecedentes, comboBox_CurrentMedication);
        QWidget::setTabOrder(comboBox_CurrentMedication, lineEdit_Medicacion_actual);
        QWidget::setTabOrder(lineEdit_Medicacion_actual, dateEdit_DateofBirth);
        QWidget::setTabOrder(dateEdit_DateofBirth, lineEdit_Email);
        QWidget::setTabOrder(lineEdit_Email, comboBox_OrganDonor);
        QWidget::setTabOrder(comboBox_OrganDonor, lineEdit_TutorPerson);
        QWidget::setTabOrder(lineEdit_TutorPerson, lineEdit_TelephoneTutorPerson);
        QWidget::setTabOrder(lineEdit_TelephoneTutorPerson, lineEdit_historiaClinica);
        QWidget::setTabOrder(lineEdit_historiaClinica, checkBox_Historia);
        QWidget::setTabOrder(checkBox_Historia, pushButton_Acept);
        QWidget::setTabOrder(pushButton_Acept, pushButton_Save);
        QWidget::setTabOrder(pushButton_Save, pushButton_Cancel);

        retranslateUi(newPaciente_paciente_ui);

        QMetaObject::connectSlotsByName(newPaciente_paciente_ui);
    } // setupUi

    void retranslateUi(QWidget *newPaciente_paciente_ui)
    {
        newPaciente_paciente_ui->setWindowTitle(QApplication::translate("newPaciente_paciente_ui", "Paciente", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("newPaciente_paciente_ui", "Ap. Paterno :", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("newPaciente_paciente_ui", "Ap. Materno :", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("newPaciente_paciente_ui", "P. Nombre :", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("newPaciente_paciente_ui", "S. Nombre:", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("newPaciente_paciente_ui", "Direccion:", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("newPaciente_paciente_ui", "Distrito :", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("newPaciente_paciente_ui", "Provincia :", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("newPaciente_paciente_ui", "Departamento :   ", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("newPaciente_paciente_ui", "Pais :                    ", 0, QApplication::UnicodeUTF8));
        lineEdit_Country->setText(QString());
        label_8->setText(QApplication::translate("newPaciente_paciente_ui", "Tel\303\251fono", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("newPaciente_paciente_ui", "Celular :", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("newPaciente_paciente_ui", "Dni :", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("newPaciente_paciente_ui", "Estado Civil :", 0, QApplication::UnicodeUTF8));
        comboBox_MaritalStatus->clear();
        comboBox_MaritalStatus->insertItems(0, QStringList()
         << QApplication::translate("newPaciente_paciente_ui", "Soltero/a", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("newPaciente_paciente_ui", "Casado/a", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("newPaciente_paciente_ui", "Divorciado/a", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("newPaciente_paciente_ui", "Viudo/a", 0, QApplication::UnicodeUTF8)
        );
        label_10->setText(QApplication::translate("newPaciente_paciente_ui", "Ocupaci\303\263n :", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("newPaciente_paciente_ui", "Genero:", 0, QApplication::UnicodeUTF8));
        comboBox_Sex->clear();
        comboBox_Sex->insertItems(0, QStringList()
         << QApplication::translate("newPaciente_paciente_ui", "Femenino", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("newPaciente_paciente_ui", "Masculino", 0, QApplication::UnicodeUTF8)
        );
        label_19->setText(QApplication::translate("newPaciente_paciente_ui", "Ciruj\303\255as Previas :", 0, QApplication::UnicodeUTF8));
        comboBox_PrefSurgery->clear();
        comboBox_PrefSurgery->insertItems(0, QStringList()
         << QApplication::translate("newPaciente_paciente_ui", "Si", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("newPaciente_paciente_ui", "No", 0, QApplication::UnicodeUTF8)
        );
        label_23->setText(QApplication::translate("newPaciente_paciente_ui", "Alergias :", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("newPaciente_paciente_ui", "Antecedentes :", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("newPaciente_paciente_ui", "Medicaci\303\263n:", 0, QApplication::UnicodeUTF8));
        comboBox_CurrentMedication->clear();
        comboBox_CurrentMedication->insertItems(0, QStringList()
         << QApplication::translate("newPaciente_paciente_ui", "Si", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("newPaciente_paciente_ui", "No", 0, QApplication::UnicodeUTF8)
        );
        label_20->setText(QApplication::translate("newPaciente_paciente_ui", "F. de Nacimiento :", 0, QApplication::UnicodeUTF8));
        dateEdit_DateofBirth->setDisplayFormat(QApplication::translate("newPaciente_paciente_ui", "yyyy/MM/dd", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("newPaciente_paciente_ui", "Donaci\303\263n de Org :", 0, QApplication::UnicodeUTF8));
        comboBox_OrganDonor->clear();
        comboBox_OrganDonor->insertItems(0, QStringList()
         << QApplication::translate("newPaciente_paciente_ui", "No informaci\303\263n", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("newPaciente_paciente_ui", "Si", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("newPaciente_paciente_ui", "No", 0, QApplication::UnicodeUTF8)
        );
        label_18->setText(QApplication::translate("newPaciente_paciente_ui", "Persona a recurrir :", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("newPaciente_paciente_ui", "Telefono Persona", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("newPaciente_paciente_ui", "Historia Cl\303\255nica :", 0, QApplication::UnicodeUTF8));
        checkBox_Historia->setText(QApplication::translate("newPaciente_paciente_ui", "No Historia", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("newPaciente_paciente_ui", "Email :", 0, QApplication::UnicodeUTF8));
        pushButton_Acept->setText(QApplication::translate("newPaciente_paciente_ui", "Aceptar", 0, QApplication::UnicodeUTF8));
        pushButton_Save->setText(QApplication::translate("newPaciente_paciente_ui", "Guardar", 0, QApplication::UnicodeUTF8));
        pushButton_Cancel->setText(QApplication::translate("newPaciente_paciente_ui", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class newPaciente_paciente_ui: public Ui_newPaciente_paciente_ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWPACIENTE_PACIENTE_UI_H
