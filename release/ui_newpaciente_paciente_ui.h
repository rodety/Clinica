/********************************************************************************
** Form generated from reading UI file 'newpaciente_paciente_ui.ui'
**
** Created: Wed 27. May 12:29:14 2015
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWPACIENTE_PACIENTE_UI_H
#define UI_NEWPACIENTE_PACIENTE_UI_H

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

class Ui_newPaciente_paciente_ui
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
    QLineEdit *lineEdit_Ocupation;
    QLabel *label_8;
    QLineEdit *lineEdit_Telephone;
    QLabel *label_15;
    QLineEdit *lineEdit_Cellphone;
    QLabel *label_16;
    QLineEdit *lineEdit_Email;
    QFrame *line_2;
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
    QLabel *label_20;
    QDateEdit *dateEdit_DateofBirth;
    QLabel *label_11;
    QComboBox *comboBox_OrganDonor;
    QComboBox *comboBox_Sex;
    QLabel *label_19;
    QComboBox *comboBox_PrefSurgery;
    QLabel *label_17;
    QComboBox *comboBox_CurrentMedication;
    QLabel *label_23;
    QLineEdit *lineEdit_alergias;
    QLabel *label_14;
    QLineEdit *lineEdit_antecedentes;
    QFrame *line;
    QLabel *label_18;
    QLineEdit *lineEdit_TutorPerson;
    QLabel *label_12;
    QLineEdit *lineEdit_TelephoneTutorPerson;
    QFrame *line_4;
    QSpacerItem *horizontalSpacer;
    QLabel *label_22;
    QComboBox *comboBox_MaritalStatus;
    QLabel *label_21;
    QLabel *label_13;
    QLineEdit *lineEdit_historiaClinica;
    QLineEdit *lineEdit_cirujias_previas;
    QLineEdit *lineEdit_Medicacion_actual;
    QLineEdit *lineEdit_dni_to_insert;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_Acept;
    QPushButton *pushButton_Save;
    QPushButton *pushButton_Cancel;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *newPaciente_paciente_ui)
    {
        if (newPaciente_paciente_ui->objectName().isEmpty())
            newPaciente_paciente_ui->setObjectName(QString::fromUtf8("newPaciente_paciente_ui"));
        newPaciente_paciente_ui->resize(580, 548);
        newPaciente_paciente_ui->setMinimumSize(QSize(580, 548));
        newPaciente_paciente_ui->setMaximumSize(QSize(580, 548));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/Add-Male-User.png"), QSize(), QIcon::Normal, QIcon::Off);
        newPaciente_paciente_ui->setWindowIcon(icon);
        gridLayout_3 = new QGridLayout(newPaciente_paciente_ui);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(6);
        label_2 = new QLabel(newPaciente_paciente_ui);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        lineEdit_FatherName = new QLineEdit(newPaciente_paciente_ui);
        lineEdit_FatherName->setObjectName(QString::fromUtf8("lineEdit_FatherName"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_FatherName->sizePolicy().hasHeightForWidth());
        lineEdit_FatherName->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(lineEdit_FatherName, 0, 1, 1, 3);

        label_3 = new QLabel(newPaciente_paciente_ui);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_3, 0, 5, 1, 3);

        lineEdit_MotherName = new QLineEdit(newPaciente_paciente_ui);
        lineEdit_MotherName->setObjectName(QString::fromUtf8("lineEdit_MotherName"));
        sizePolicy1.setHeightForWidth(lineEdit_MotherName->sizePolicy().hasHeightForWidth());
        lineEdit_MotherName->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(lineEdit_MotherName, 0, 8, 1, 2);

        label_5 = new QLabel(newPaciente_paciente_ui);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        lineEdit_FirstName = new QLineEdit(newPaciente_paciente_ui);
        lineEdit_FirstName->setObjectName(QString::fromUtf8("lineEdit_FirstName"));
        sizePolicy1.setHeightForWidth(lineEdit_FirstName->sizePolicy().hasHeightForWidth());
        lineEdit_FirstName->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(lineEdit_FirstName, 1, 1, 1, 3);

        label_6 = new QLabel(newPaciente_paciente_ui);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 1, 5, 1, 3);

        lineEdit_SecondName = new QLineEdit(newPaciente_paciente_ui);
        lineEdit_SecondName->setObjectName(QString::fromUtf8("lineEdit_SecondName"));
        sizePolicy1.setHeightForWidth(lineEdit_SecondName->sizePolicy().hasHeightForWidth());
        lineEdit_SecondName->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(lineEdit_SecondName, 1, 8, 1, 2);

        label_7 = new QLabel(newPaciente_paciente_ui);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 2, 0, 1, 1);

        lineEdit_Dni = new QLineEdit(newPaciente_paciente_ui);
        lineEdit_Dni->setObjectName(QString::fromUtf8("lineEdit_Dni"));
        sizePolicy1.setHeightForWidth(lineEdit_Dni->sizePolicy().hasHeightForWidth());
        lineEdit_Dni->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(lineEdit_Dni, 2, 1, 1, 3);

        label_10 = new QLabel(newPaciente_paciente_ui);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_2->addWidget(label_10, 2, 5, 1, 1);

        lineEdit_Ocupation = new QLineEdit(newPaciente_paciente_ui);
        lineEdit_Ocupation->setObjectName(QString::fromUtf8("lineEdit_Ocupation"));
        sizePolicy1.setHeightForWidth(lineEdit_Ocupation->sizePolicy().hasHeightForWidth());
        lineEdit_Ocupation->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(lineEdit_Ocupation, 2, 8, 1, 2);

        label_8 = new QLabel(newPaciente_paciente_ui);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 3, 0, 1, 1);

        lineEdit_Telephone = new QLineEdit(newPaciente_paciente_ui);
        lineEdit_Telephone->setObjectName(QString::fromUtf8("lineEdit_Telephone"));
        sizePolicy1.setHeightForWidth(lineEdit_Telephone->sizePolicy().hasHeightForWidth());
        lineEdit_Telephone->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(lineEdit_Telephone, 3, 1, 1, 3);

        label_15 = new QLabel(newPaciente_paciente_ui);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_2->addWidget(label_15, 3, 5, 1, 1);

        lineEdit_Cellphone = new QLineEdit(newPaciente_paciente_ui);
        lineEdit_Cellphone->setObjectName(QString::fromUtf8("lineEdit_Cellphone"));
        sizePolicy1.setHeightForWidth(lineEdit_Cellphone->sizePolicy().hasHeightForWidth());
        lineEdit_Cellphone->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(lineEdit_Cellphone, 3, 8, 1, 2);

        label_16 = new QLabel(newPaciente_paciente_ui);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_2->addWidget(label_16, 4, 0, 1, 1);

        lineEdit_Email = new QLineEdit(newPaciente_paciente_ui);
        lineEdit_Email->setObjectName(QString::fromUtf8("lineEdit_Email"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEdit_Email->sizePolicy().hasHeightForWidth());
        lineEdit_Email->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(lineEdit_Email, 4, 1, 1, 9);

        line_2 = new QFrame(newPaciente_paciente_ui);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_2, 5, 0, 1, 10);

        label = new QLabel(newPaciente_paciente_ui);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label, 6, 0, 1, 1);

        lineEdit_Country = new QLineEdit(newPaciente_paciente_ui);
        lineEdit_Country->setObjectName(QString::fromUtf8("lineEdit_Country"));
        sizePolicy1.setHeightForWidth(lineEdit_Country->sizePolicy().hasHeightForWidth());
        lineEdit_Country->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(lineEdit_Country, 6, 1, 1, 3);

        label_4 = new QLabel(newPaciente_paciente_ui);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_4, 6, 5, 1, 3);

        lineEdit_Departamento = new QLineEdit(newPaciente_paciente_ui);
        lineEdit_Departamento->setObjectName(QString::fromUtf8("lineEdit_Departamento"));
        sizePolicy1.setHeightForWidth(lineEdit_Departamento->sizePolicy().hasHeightForWidth());
        lineEdit_Departamento->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(lineEdit_Departamento, 6, 8, 1, 2);

        label_9 = new QLabel(newPaciente_paciente_ui);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 7, 0, 1, 1);

        lineEdit_Provincia = new QLineEdit(newPaciente_paciente_ui);
        lineEdit_Provincia->setObjectName(QString::fromUtf8("lineEdit_Provincia"));
        sizePolicy1.setHeightForWidth(lineEdit_Provincia->sizePolicy().hasHeightForWidth());
        lineEdit_Provincia->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(lineEdit_Provincia, 7, 1, 1, 3);

        label_25 = new QLabel(newPaciente_paciente_ui);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_2->addWidget(label_25, 7, 5, 1, 1);

        lineEdit_Distrito = new QLineEdit(newPaciente_paciente_ui);
        lineEdit_Distrito->setObjectName(QString::fromUtf8("lineEdit_Distrito"));
        sizePolicy1.setHeightForWidth(lineEdit_Distrito->sizePolicy().hasHeightForWidth());
        lineEdit_Distrito->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(lineEdit_Distrito, 7, 8, 1, 2);

        label_24 = new QLabel(newPaciente_paciente_ui);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_2->addWidget(label_24, 8, 0, 1, 1);

        lineEdit_Lugar = new QLineEdit(newPaciente_paciente_ui);
        lineEdit_Lugar->setObjectName(QString::fromUtf8("lineEdit_Lugar"));

        gridLayout_2->addWidget(lineEdit_Lugar, 8, 1, 1, 9);

        line_3 = new QFrame(newPaciente_paciente_ui);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_3, 9, 0, 1, 10);

        label_20 = new QLabel(newPaciente_paciente_ui);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        sizePolicy.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_20, 10, 0, 1, 2);

        dateEdit_DateofBirth = new QDateEdit(newPaciente_paciente_ui);
        dateEdit_DateofBirth->setObjectName(QString::fromUtf8("dateEdit_DateofBirth"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(dateEdit_DateofBirth->sizePolicy().hasHeightForWidth());
        dateEdit_DateofBirth->setSizePolicy(sizePolicy3);
        dateEdit_DateofBirth->setCurrentSection(QDateTimeEdit::YearSection);
        dateEdit_DateofBirth->setCalendarPopup(true);

        gridLayout_2->addWidget(dateEdit_DateofBirth, 10, 2, 1, 2);

        label_11 = new QLabel(newPaciente_paciente_ui);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_2->addWidget(label_11, 11, 0, 1, 2);

        comboBox_OrganDonor = new QComboBox(newPaciente_paciente_ui);
        comboBox_OrganDonor->setObjectName(QString::fromUtf8("comboBox_OrganDonor"));
        sizePolicy3.setHeightForWidth(comboBox_OrganDonor->sizePolicy().hasHeightForWidth());
        comboBox_OrganDonor->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(comboBox_OrganDonor, 11, 2, 1, 2);

        comboBox_Sex = new QComboBox(newPaciente_paciente_ui);
        comboBox_Sex->setObjectName(QString::fromUtf8("comboBox_Sex"));
        sizePolicy3.setHeightForWidth(comboBox_Sex->sizePolicy().hasHeightForWidth());
        comboBox_Sex->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(comboBox_Sex, 11, 7, 1, 3);

        label_19 = new QLabel(newPaciente_paciente_ui);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_2->addWidget(label_19, 12, 0, 1, 1);

        comboBox_PrefSurgery = new QComboBox(newPaciente_paciente_ui);
        comboBox_PrefSurgery->setObjectName(QString::fromUtf8("comboBox_PrefSurgery"));
        sizePolicy3.setHeightForWidth(comboBox_PrefSurgery->sizePolicy().hasHeightForWidth());
        comboBox_PrefSurgery->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(comboBox_PrefSurgery, 12, 2, 1, 1);

        label_17 = new QLabel(newPaciente_paciente_ui);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_2->addWidget(label_17, 13, 0, 1, 1);

        comboBox_CurrentMedication = new QComboBox(newPaciente_paciente_ui);
        comboBox_CurrentMedication->setObjectName(QString::fromUtf8("comboBox_CurrentMedication"));
        sizePolicy3.setHeightForWidth(comboBox_CurrentMedication->sizePolicy().hasHeightForWidth());
        comboBox_CurrentMedication->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(comboBox_CurrentMedication, 13, 2, 1, 1);

        label_23 = new QLabel(newPaciente_paciente_ui);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout_2->addWidget(label_23, 14, 0, 1, 1);

        lineEdit_alergias = new QLineEdit(newPaciente_paciente_ui);
        lineEdit_alergias->setObjectName(QString::fromUtf8("lineEdit_alergias"));

        gridLayout_2->addWidget(lineEdit_alergias, 14, 2, 1, 8);

        label_14 = new QLabel(newPaciente_paciente_ui);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_2->addWidget(label_14, 15, 0, 1, 1);

        lineEdit_antecedentes = new QLineEdit(newPaciente_paciente_ui);
        lineEdit_antecedentes->setObjectName(QString::fromUtf8("lineEdit_antecedentes"));

        gridLayout_2->addWidget(lineEdit_antecedentes, 15, 2, 1, 8);

        line = new QFrame(newPaciente_paciente_ui);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 16, 0, 1, 10);

        label_18 = new QLabel(newPaciente_paciente_ui);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        sizePolicy.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_18, 17, 0, 1, 1);

        lineEdit_TutorPerson = new QLineEdit(newPaciente_paciente_ui);
        lineEdit_TutorPerson->setObjectName(QString::fromUtf8("lineEdit_TutorPerson"));
        sizePolicy1.setHeightForWidth(lineEdit_TutorPerson->sizePolicy().hasHeightForWidth());
        lineEdit_TutorPerson->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(lineEdit_TutorPerson, 17, 3, 1, 7);

        label_12 = new QLabel(newPaciente_paciente_ui);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_12, 18, 0, 1, 3);

        lineEdit_TelephoneTutorPerson = new QLineEdit(newPaciente_paciente_ui);
        lineEdit_TelephoneTutorPerson->setObjectName(QString::fromUtf8("lineEdit_TelephoneTutorPerson"));
        sizePolicy1.setHeightForWidth(lineEdit_TelephoneTutorPerson->sizePolicy().hasHeightForWidth());
        lineEdit_TelephoneTutorPerson->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(lineEdit_TelephoneTutorPerson, 18, 3, 1, 7);

        line_4 = new QFrame(newPaciente_paciente_ui);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_4, 19, 0, 3, 10);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 20, 9, 3, 1);

        label_22 = new QLabel(newPaciente_paciente_ui);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        sizePolicy3.setHeightForWidth(label_22->sizePolicy().hasHeightForWidth());
        label_22->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(label_22, 22, 0, 1, 1);

        comboBox_MaritalStatus = new QComboBox(newPaciente_paciente_ui);
        comboBox_MaritalStatus->setObjectName(QString::fromUtf8("comboBox_MaritalStatus"));
        sizePolicy3.setHeightForWidth(comboBox_MaritalStatus->sizePolicy().hasHeightForWidth());
        comboBox_MaritalStatus->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(comboBox_MaritalStatus, 10, 7, 1, 3);

        label_21 = new QLabel(newPaciente_paciente_ui);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        sizePolicy.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_21, 10, 6, 1, 1);

        label_13 = new QLabel(newPaciente_paciente_ui);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_2->addWidget(label_13, 11, 6, 1, 1);

        lineEdit_historiaClinica = new QLineEdit(newPaciente_paciente_ui);
        lineEdit_historiaClinica->setObjectName(QString::fromUtf8("lineEdit_historiaClinica"));
        lineEdit_historiaClinica->setEnabled(false);
        sizePolicy1.setHeightForWidth(lineEdit_historiaClinica->sizePolicy().hasHeightForWidth());
        lineEdit_historiaClinica->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(lineEdit_historiaClinica, 22, 2, 1, 3);

        lineEdit_cirujias_previas = new QLineEdit(newPaciente_paciente_ui);
        lineEdit_cirujias_previas->setObjectName(QString::fromUtf8("lineEdit_cirujias_previas"));

        gridLayout_2->addWidget(lineEdit_cirujias_previas, 12, 3, 1, 7);

        lineEdit_Medicacion_actual = new QLineEdit(newPaciente_paciente_ui);
        lineEdit_Medicacion_actual->setObjectName(QString::fromUtf8("lineEdit_Medicacion_actual"));

        gridLayout_2->addWidget(lineEdit_Medicacion_actual, 13, 3, 1, 7);

        lineEdit_dni_to_insert = new QLineEdit(newPaciente_paciente_ui);
        lineEdit_dni_to_insert->setObjectName(QString::fromUtf8("lineEdit_dni_to_insert"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(15);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(lineEdit_dni_to_insert->sizePolicy().hasHeightForWidth());
        lineEdit_dni_to_insert->setSizePolicy(sizePolicy4);

        gridLayout_2->addWidget(lineEdit_dni_to_insert, 2, 4, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(22, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        pushButton_Acept = new QPushButton(newPaciente_paciente_ui);
        pushButton_Acept->setObjectName(QString::fromUtf8("pushButton_Acept"));

        gridLayout->addWidget(pushButton_Acept, 0, 1, 1, 1);

        pushButton_Save = new QPushButton(newPaciente_paciente_ui);
        pushButton_Save->setObjectName(QString::fromUtf8("pushButton_Save"));

        gridLayout->addWidget(pushButton_Save, 0, 2, 1, 1);

        pushButton_Cancel = new QPushButton(newPaciente_paciente_ui);
        pushButton_Cancel->setObjectName(QString::fromUtf8("pushButton_Cancel"));

        gridLayout->addWidget(pushButton_Cancel, 0, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 4, 1, 1);


        gridLayout_3->addLayout(gridLayout, 2, 0, 1, 1);

        QWidget::setTabOrder(lineEdit_FatherName, lineEdit_MotherName);
        QWidget::setTabOrder(lineEdit_MotherName, lineEdit_FirstName);
        QWidget::setTabOrder(lineEdit_FirstName, lineEdit_SecondName);
        QWidget::setTabOrder(lineEdit_SecondName, lineEdit_Dni);
        QWidget::setTabOrder(lineEdit_Dni, lineEdit_Ocupation);
        QWidget::setTabOrder(lineEdit_Ocupation, lineEdit_Telephone);
        QWidget::setTabOrder(lineEdit_Telephone, lineEdit_Cellphone);
        QWidget::setTabOrder(lineEdit_Cellphone, lineEdit_Email);
        QWidget::setTabOrder(lineEdit_Email, lineEdit_Country);
        QWidget::setTabOrder(lineEdit_Country, lineEdit_Departamento);
        QWidget::setTabOrder(lineEdit_Departamento, lineEdit_Provincia);
        QWidget::setTabOrder(lineEdit_Provincia, lineEdit_Distrito);
        QWidget::setTabOrder(lineEdit_Distrito, lineEdit_Lugar);
        QWidget::setTabOrder(lineEdit_Lugar, dateEdit_DateofBirth);
        QWidget::setTabOrder(dateEdit_DateofBirth, comboBox_MaritalStatus);
        QWidget::setTabOrder(comboBox_MaritalStatus, comboBox_OrganDonor);
        QWidget::setTabOrder(comboBox_OrganDonor, comboBox_Sex);
        QWidget::setTabOrder(comboBox_Sex, comboBox_PrefSurgery);
        QWidget::setTabOrder(comboBox_PrefSurgery, lineEdit_cirujias_previas);
        QWidget::setTabOrder(lineEdit_cirujias_previas, comboBox_CurrentMedication);
        QWidget::setTabOrder(comboBox_CurrentMedication, lineEdit_Medicacion_actual);
        QWidget::setTabOrder(lineEdit_Medicacion_actual, lineEdit_alergias);
        QWidget::setTabOrder(lineEdit_alergias, lineEdit_antecedentes);
        QWidget::setTabOrder(lineEdit_antecedentes, lineEdit_TutorPerson);
        QWidget::setTabOrder(lineEdit_TutorPerson, lineEdit_TelephoneTutorPerson);
        QWidget::setTabOrder(lineEdit_TelephoneTutorPerson, lineEdit_historiaClinica);
        QWidget::setTabOrder(lineEdit_historiaClinica, pushButton_Acept);
        QWidget::setTabOrder(pushButton_Acept, pushButton_Save);
        QWidget::setTabOrder(pushButton_Save, pushButton_Cancel);
        QWidget::setTabOrder(pushButton_Cancel, lineEdit_dni_to_insert);

        retranslateUi(newPaciente_paciente_ui);

        QMetaObject::connectSlotsByName(newPaciente_paciente_ui);
    } // setupUi

    void retranslateUi(QWidget *newPaciente_paciente_ui)
    {
        newPaciente_paciente_ui->setWindowTitle(QApplication::translate("newPaciente_paciente_ui", "Paciente", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("newPaciente_paciente_ui", "Apellido Paterno :", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("newPaciente_paciente_ui", "Apellido Materno :", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("newPaciente_paciente_ui", "Primer Nombre :", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("newPaciente_paciente_ui", "Segundo Nombre:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("newPaciente_paciente_ui", "Dni :", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("newPaciente_paciente_ui", "Ocupaci\303\263n :", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("newPaciente_paciente_ui", "Tel\303\251fono", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("newPaciente_paciente_ui", "Celular :", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("newPaciente_paciente_ui", "Email :", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("newPaciente_paciente_ui", "Pais :                    ", 0, QApplication::UnicodeUTF8));
        lineEdit_Country->setText(QString());
        label_4->setText(QApplication::translate("newPaciente_paciente_ui", "Departamento :   ", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("newPaciente_paciente_ui", "Provincia :", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("newPaciente_paciente_ui", "Distrito :", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("newPaciente_paciente_ui", "Lugar :", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("newPaciente_paciente_ui", "Fecha de Nacimiento :", 0, QApplication::UnicodeUTF8));
        dateEdit_DateofBirth->setDisplayFormat(QApplication::translate("newPaciente_paciente_ui", "yyyy/MM/dd", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("newPaciente_paciente_ui", "Donaci\303\263n de Organos :", 0, QApplication::UnicodeUTF8));
        comboBox_OrganDonor->clear();
        comboBox_OrganDonor->insertItems(0, QStringList()
         << QApplication::translate("newPaciente_paciente_ui", "No informaci\303\263n", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("newPaciente_paciente_ui", "Si", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("newPaciente_paciente_ui", "No", 0, QApplication::UnicodeUTF8)
        );
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
        label_17->setText(QApplication::translate("newPaciente_paciente_ui", "Medicaci\303\263n Actual :", 0, QApplication::UnicodeUTF8));
        comboBox_CurrentMedication->clear();
        comboBox_CurrentMedication->insertItems(0, QStringList()
         << QApplication::translate("newPaciente_paciente_ui", "Si", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("newPaciente_paciente_ui", "No", 0, QApplication::UnicodeUTF8)
        );
        label_23->setText(QApplication::translate("newPaciente_paciente_ui", "Alergias :", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("newPaciente_paciente_ui", "Antecedentes :", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("newPaciente_paciente_ui", "Persona a recurrir :", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("newPaciente_paciente_ui", "Tel\303\251fonos de persona a recurrir :", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("newPaciente_paciente_ui", "Historia Cl\303\255nica :", 0, QApplication::UnicodeUTF8));
        comboBox_MaritalStatus->clear();
        comboBox_MaritalStatus->insertItems(0, QStringList()
         << QApplication::translate("newPaciente_paciente_ui", "Soltero/a", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("newPaciente_paciente_ui", "Casado/a", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("newPaciente_paciente_ui", "Divorciado/a", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("newPaciente_paciente_ui", "Viudo/a", 0, QApplication::UnicodeUTF8)
        );
        label_21->setText(QApplication::translate("newPaciente_paciente_ui", "Estado Civil :", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("newPaciente_paciente_ui", "Sexo :", 0, QApplication::UnicodeUTF8));
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
