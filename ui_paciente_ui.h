/********************************************************************************
** Form generated from reading UI file 'paciente_ui.ui'
**
** Created: Sat 11. Jun 15:48:01 2016
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PACIENTE_UI_H
#define UI_PACIENTE_UI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_paciente_ui
{
public:
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_5;
    QLabel *label_6;
    QLineEdit *lineEdit_fichaCurrentPatient;
    QLabel *label_8;
    QLineEdit *lineEdit_CurrentPatient;
    QComboBox *comboBox;
    QLabel *label;
    QLineEdit *lineEdit_buscar;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_3;
    QFrame *line_2;
    QFrame *line_4;
    QGridLayout *gridLayout_4;
    QPushButton *verDatos_paciente;
    QPushButton *pushButton_editarDatos;
    QPushButton *verConsultas_paciente;
    QPushButton *eliminar_paciente;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *newConsulta_paciente;
    QPushButton *newPaciente_paciente;
    QFrame *line_3;
    QTableView *tableView_ListaPacientes1;

    void setupUi(QWidget *paciente_ui)
    {
        if (paciente_ui->objectName().isEmpty())
            paciente_ui->setObjectName(QString::fromUtf8("paciente_ui"));
        paciente_ui->resize(1250, 650);
        gridLayout_6 = new QGridLayout(paciente_ui);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_6 = new QLabel(paciente_ui);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        label_6->setFont(font);

        gridLayout_5->addWidget(label_6, 0, 0, 1, 1);

        lineEdit_fichaCurrentPatient = new QLineEdit(paciente_ui);
        lineEdit_fichaCurrentPatient->setObjectName(QString::fromUtf8("lineEdit_fichaCurrentPatient"));
        lineEdit_fichaCurrentPatient->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_fichaCurrentPatient->sizePolicy().hasHeightForWidth());
        lineEdit_fichaCurrentPatient->setSizePolicy(sizePolicy1);
        lineEdit_fichaCurrentPatient->setMinimumSize(QSize(250, 0));
        lineEdit_fichaCurrentPatient->setMaximumSize(QSize(120, 16777215));
        lineEdit_fichaCurrentPatient->setFont(font);

        gridLayout_5->addWidget(lineEdit_fichaCurrentPatient, 0, 1, 1, 1);

        label_8 = new QLabel(paciente_ui);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setFont(font);

        gridLayout_5->addWidget(label_8, 0, 3, 1, 1);

        lineEdit_CurrentPatient = new QLineEdit(paciente_ui);
        lineEdit_CurrentPatient->setObjectName(QString::fromUtf8("lineEdit_CurrentPatient"));
        lineEdit_CurrentPatient->setEnabled(false);
        sizePolicy1.setHeightForWidth(lineEdit_CurrentPatient->sizePolicy().hasHeightForWidth());
        lineEdit_CurrentPatient->setSizePolicy(sizePolicy1);
        lineEdit_CurrentPatient->setMinimumSize(QSize(120, 0));
        lineEdit_CurrentPatient->setMaximumSize(QSize(250, 16777215));
        lineEdit_CurrentPatient->setFont(font);

        gridLayout_5->addWidget(lineEdit_CurrentPatient, 0, 4, 1, 1);

        comboBox = new QComboBox(paciente_ui);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setEnabled(true);
        comboBox->setMinimumSize(QSize(100, 0));
        comboBox->setFont(font);

        gridLayout_5->addWidget(comboBox, 0, 8, 1, 1);

        label = new QLabel(paciente_ui);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        gridLayout_5->addWidget(label, 0, 7, 1, 1);

        lineEdit_buscar = new QLineEdit(paciente_ui);
        lineEdit_buscar->setObjectName(QString::fromUtf8("lineEdit_buscar"));
        lineEdit_buscar->setFont(font);
        lineEdit_buscar->setInputMask(QString::fromUtf8(""));

        gridLayout_5->addWidget(lineEdit_buscar, 0, 11, 1, 1);

        label_2 = new QLabel(paciente_ui);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout_5->addWidget(label_2, 0, 10, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_5, 0, 9, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 3, 2, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

        gridLayout_6->addLayout(horizontalLayout, 5, 2, 1, 2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        line_2 = new QFrame(paciente_ui);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(line_2->sizePolicy().hasHeightForWidth());
        line_2->setSizePolicy(sizePolicy2);
        line_2->setFont(font);
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_2, 0, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_3, 0, 0, 5, 1);

        line_4 = new QFrame(paciente_ui);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFont(font);
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_6->addWidget(line_4, 2, 2, 1, 2);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        verDatos_paciente = new QPushButton(paciente_ui);
        verDatos_paciente->setObjectName(QString::fromUtf8("verDatos_paciente"));
        sizePolicy1.setHeightForWidth(verDatos_paciente->sizePolicy().hasHeightForWidth());
        verDatos_paciente->setSizePolicy(sizePolicy1);
        verDatos_paciente->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/preferences-contact-list.png"), QSize(), QIcon::Normal, QIcon::Off);
        verDatos_paciente->setIcon(icon);
        verDatos_paciente->setIconSize(QSize(20, 20));

        gridLayout_4->addWidget(verDatos_paciente, 0, 0, 1, 1);

        pushButton_editarDatos = new QPushButton(paciente_ui);
        pushButton_editarDatos->setObjectName(QString::fromUtf8("pushButton_editarDatos"));
        sizePolicy1.setHeightForWidth(pushButton_editarDatos->sizePolicy().hasHeightForWidth());
        pushButton_editarDatos->setSizePolicy(sizePolicy1);
        pushButton_editarDatos->setFont(font);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/sign-up.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_editarDatos->setIcon(icon1);
        pushButton_editarDatos->setIconSize(QSize(20, 20));

        gridLayout_4->addWidget(pushButton_editarDatos, 0, 1, 1, 1);

        verConsultas_paciente = new QPushButton(paciente_ui);
        verConsultas_paciente->setObjectName(QString::fromUtf8("verConsultas_paciente"));
        sizePolicy1.setHeightForWidth(verConsultas_paciente->sizePolicy().hasHeightForWidth());
        verConsultas_paciente->setSizePolicy(sizePolicy1);
        verConsultas_paciente->setFont(font);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/distributor-report.png"), QSize(), QIcon::Normal, QIcon::Off);
        verConsultas_paciente->setIcon(icon2);
        verConsultas_paciente->setIconSize(QSize(20, 20));

        gridLayout_4->addWidget(verConsultas_paciente, 0, 2, 1, 1);

        eliminar_paciente = new QPushButton(paciente_ui);
        eliminar_paciente->setObjectName(QString::fromUtf8("eliminar_paciente"));
        sizePolicy1.setHeightForWidth(eliminar_paciente->sizePolicy().hasHeightForWidth());
        eliminar_paciente->setSizePolicy(sizePolicy1);
        eliminar_paciente->setFont(font);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/Remove-Male-User.png"), QSize(), QIcon::Normal, QIcon::Off);
        eliminar_paciente->setIcon(icon3);
        eliminar_paciente->setIconSize(QSize(20, 20));

        gridLayout_4->addWidget(eliminar_paciente, 0, 3, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(228, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 0, 4, 1, 1);

        newConsulta_paciente = new QPushButton(paciente_ui);
        newConsulta_paciente->setObjectName(QString::fromUtf8("newConsulta_paciente"));
        sizePolicy1.setHeightForWidth(newConsulta_paciente->sizePolicy().hasHeightForWidth());
        newConsulta_paciente->setSizePolicy(sizePolicy1);
        newConsulta_paciente->setFont(font);
        newConsulta_paciente->setIcon(icon1);
        newConsulta_paciente->setIconSize(QSize(20, 20));

        gridLayout_4->addWidget(newConsulta_paciente, 0, 5, 1, 1);

        newPaciente_paciente = new QPushButton(paciente_ui);
        newPaciente_paciente->setObjectName(QString::fromUtf8("newPaciente_paciente"));
        sizePolicy1.setHeightForWidth(newPaciente_paciente->sizePolicy().hasHeightForWidth());
        newPaciente_paciente->setSizePolicy(sizePolicy1);
        newPaciente_paciente->setFont(font);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/Add-Male-User.png"), QSize(), QIcon::Normal, QIcon::Off);
        newPaciente_paciente->setIcon(icon4);
        newPaciente_paciente->setIconSize(QSize(20, 20));

        gridLayout_4->addWidget(newPaciente_paciente, 0, 6, 1, 1);


        gridLayout_6->addLayout(gridLayout_4, 1, 2, 1, 2);

        line_3 = new QFrame(paciente_ui);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(line_3->sizePolicy().hasHeightForWidth());
        line_3->setSizePolicy(sizePolicy3);
        line_3->setFont(font);
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_6->addWidget(line_3, 0, 1, 6, 2);

        tableView_ListaPacientes1 = new QTableView(paciente_ui);
        tableView_ListaPacientes1->setObjectName(QString::fromUtf8("tableView_ListaPacientes1"));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        tableView_ListaPacientes1->setFont(font1);

        gridLayout_6->addWidget(tableView_ListaPacientes1, 4, 3, 1, 1);


        retranslateUi(paciente_ui);

        QMetaObject::connectSlotsByName(paciente_ui);
    } // setupUi

    void retranslateUi(QWidget *paciente_ui)
    {
        paciente_ui->setWindowTitle(QApplication::translate("paciente_ui", "Form", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("paciente_ui", "Paciente Actual :", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("paciente_ui", "Historia Cl\303\255nica : ", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("paciente_ui", "A", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("paciente_ui", "B", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("paciente_ui", "C", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("paciente_ui", "D", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("paciente_ui", "E", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("paciente_ui", "F", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("paciente_ui", "G", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("paciente_ui", "H", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("paciente_ui", "I", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("paciente_ui", "J", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("paciente_ui", "K", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("paciente_ui", "L", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("paciente_ui", "M", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("paciente_ui", "N", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("paciente_ui", "\303\221", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("paciente_ui", "O", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("paciente_ui", "P", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("paciente_ui", "Q", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("paciente_ui", "R", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("paciente_ui", "S", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("paciente_ui", "T", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("paciente_ui", "U", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("paciente_ui", "V", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("paciente_ui", "W", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("paciente_ui", "X", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("paciente_ui", "Y", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("paciente_ui", "Z", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("paciente_ui", "Orden Alfab\303\251tico:", 0, QApplication::UnicodeUTF8));
        lineEdit_buscar->setText(QString());
        label_2->setText(QApplication::translate("paciente_ui", "BUSCAR:", 0, QApplication::UnicodeUTF8));
        verDatos_paciente->setText(QApplication::translate("paciente_ui", "&Ver Datos", 0, QApplication::UnicodeUTF8));
        pushButton_editarDatos->setText(QApplication::translate("paciente_ui", "E&ditar Datos", 0, QApplication::UnicodeUTF8));
        verConsultas_paciente->setText(QApplication::translate("paciente_ui", " Ver &Consultas", 0, QApplication::UnicodeUTF8));
        eliminar_paciente->setText(QApplication::translate("paciente_ui", "Elimina&r Paciente", 0, QApplication::UnicodeUTF8));
        newConsulta_paciente->setText(QApplication::translate("paciente_ui", "&Nueva Consulta", 0, QApplication::UnicodeUTF8));
        newPaciente_paciente->setText(QApplication::translate("paciente_ui", "Nuev&o Paciente", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class paciente_ui: public Ui_paciente_ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PACIENTE_UI_H
