/********************************************************************************
** Form generated from reading UI file 'historiaclinica_ui.ui'
**
** Created: Sat 11. Jun 16:43:59 2016
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORIACLINICA_UI_H
#define UI_HISTORIACLINICA_UI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
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

class Ui_historiaClinica_ui
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *verDatos_paciente;
    QPushButton *verDocumento_historial;
    QPushButton *pushButton_editarDocuento;
    QPushButton *pushButton_generatePDF;
    QPushButton *pushButton_Fotos;
    QPushButton *nuevoDocumento_historial;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *lineEdit_historialSearch;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QLineEdit *lineEdit_PatientActual;
    QLabel *label_7;
    QLineEdit *lineEdit_currentDni;
    QLabel *label_9;
    QLineEdit *lineEdit_historiaClinicaCurrent;
    QLabel *label_8;
    QLineEdit *lineEdit_documentoCodeCurrent;
    QHBoxLayout *horizontalLayout_2;
    QTableView *tableView_ListaPacientes1;
    QTableView *tableView_DocumentList;

    void setupUi(QWidget *historiaClinica_ui)
    {
        if (historiaClinica_ui->objectName().isEmpty())
            historiaClinica_ui->setObjectName(QString::fromUtf8("historiaClinica_ui"));
        historiaClinica_ui->resize(1327, 477);
        gridLayout = new QGridLayout(historiaClinica_ui);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verDatos_paciente = new QPushButton(historiaClinica_ui);
        verDatos_paciente->setObjectName(QString::fromUtf8("verDatos_paciente"));
        QFont font;
        font.setPointSize(12);
        verDatos_paciente->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/preferences-contact-list.png"), QSize(), QIcon::Normal, QIcon::Off);
        verDatos_paciente->setIcon(icon);
        verDatos_paciente->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(verDatos_paciente);

        verDocumento_historial = new QPushButton(historiaClinica_ui);
        verDocumento_historial->setObjectName(QString::fromUtf8("verDocumento_historial"));
        verDocumento_historial->setFont(font);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/file_search.png"), QSize(), QIcon::Normal, QIcon::Off);
        verDocumento_historial->setIcon(icon1);
        verDocumento_historial->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(verDocumento_historial);

        pushButton_editarDocuento = new QPushButton(historiaClinica_ui);
        pushButton_editarDocuento->setObjectName(QString::fromUtf8("pushButton_editarDocuento"));
        pushButton_editarDocuento->setFont(font);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/file_edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_editarDocuento->setIcon(icon2);
        pushButton_editarDocuento->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(pushButton_editarDocuento);

        pushButton_generatePDF = new QPushButton(historiaClinica_ui);
        pushButton_generatePDF->setObjectName(QString::fromUtf8("pushButton_generatePDF"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_generatePDF->sizePolicy().hasHeightForWidth());
        pushButton_generatePDF->setSizePolicy(sizePolicy);
        pushButton_generatePDF->setMaximumSize(QSize(16777215, 28));
        pushButton_generatePDF->setFont(font);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/Adobe - Acrobat.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_generatePDF->setIcon(icon3);
        pushButton_generatePDF->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(pushButton_generatePDF);

        pushButton_Fotos = new QPushButton(historiaClinica_ui);
        pushButton_Fotos->setObjectName(QString::fromUtf8("pushButton_Fotos"));
        pushButton_Fotos->setFont(font);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/HP-Pictures-Folder-Dock-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Fotos->setIcon(icon4);
        pushButton_Fotos->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(pushButton_Fotos);

        nuevoDocumento_historial = new QPushButton(historiaClinica_ui);
        nuevoDocumento_historial->setObjectName(QString::fromUtf8("nuevoDocumento_historial"));
        nuevoDocumento_historial->setFont(font);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/file_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        nuevoDocumento_historial->setIcon(icon5);
        nuevoDocumento_historial->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(nuevoDocumento_historial);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(historiaClinica_ui);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(100, 16777215));
        label_2->setBaseSize(QSize(100, 0));
        label_2->setFont(font);

        horizontalLayout_4->addWidget(label_2);

        lineEdit_historialSearch = new QLineEdit(historiaClinica_ui);
        lineEdit_historialSearch->setObjectName(QString::fromUtf8("lineEdit_historialSearch"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_historialSearch->sizePolicy().hasHeightForWidth());
        lineEdit_historialSearch->setSizePolicy(sizePolicy1);
        lineEdit_historialSearch->setMinimumSize(QSize(200, 0));
        lineEdit_historialSearch->setFont(font);

        horizontalLayout_4->addWidget(lineEdit_historialSearch);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        label = new QLabel(historiaClinica_ui);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setFont(font);

        horizontalLayout_4->addWidget(label);

        lineEdit_PatientActual = new QLineEdit(historiaClinica_ui);
        lineEdit_PatientActual->setObjectName(QString::fromUtf8("lineEdit_PatientActual"));
        lineEdit_PatientActual->setEnabled(false);
        lineEdit_PatientActual->setMinimumSize(QSize(0, 0));
        lineEdit_PatientActual->setMaximumSize(QSize(250, 16777215));
        lineEdit_PatientActual->setFont(font);

        horizontalLayout_4->addWidget(lineEdit_PatientActual);

        label_7 = new QLabel(historiaClinica_ui);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);
        label_7->setFont(font);

        horizontalLayout_4->addWidget(label_7);

        lineEdit_currentDni = new QLineEdit(historiaClinica_ui);
        lineEdit_currentDni->setObjectName(QString::fromUtf8("lineEdit_currentDni"));
        lineEdit_currentDni->setEnabled(false);
        sizePolicy1.setHeightForWidth(lineEdit_currentDni->sizePolicy().hasHeightForWidth());
        lineEdit_currentDni->setSizePolicy(sizePolicy1);
        lineEdit_currentDni->setMinimumSize(QSize(0, 0));
        lineEdit_currentDni->setMaximumSize(QSize(120, 16777215));
        lineEdit_currentDni->setFont(font);

        horizontalLayout_4->addWidget(lineEdit_currentDni);

        label_9 = new QLabel(historiaClinica_ui);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);
        label_9->setFont(font);

        horizontalLayout_4->addWidget(label_9);

        lineEdit_historiaClinicaCurrent = new QLineEdit(historiaClinica_ui);
        lineEdit_historiaClinicaCurrent->setObjectName(QString::fromUtf8("lineEdit_historiaClinicaCurrent"));
        lineEdit_historiaClinicaCurrent->setEnabled(false);
        lineEdit_historiaClinicaCurrent->setMinimumSize(QSize(0, 0));
        lineEdit_historiaClinicaCurrent->setMaximumSize(QSize(120, 16777215));
        lineEdit_historiaClinicaCurrent->setFont(font);

        horizontalLayout_4->addWidget(lineEdit_historiaClinicaCurrent);

        label_8 = new QLabel(historiaClinica_ui);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy1.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy1);
        label_8->setFont(font);

        horizontalLayout_4->addWidget(label_8);

        lineEdit_documentoCodeCurrent = new QLineEdit(historiaClinica_ui);
        lineEdit_documentoCodeCurrent->setObjectName(QString::fromUtf8("lineEdit_documentoCodeCurrent"));
        lineEdit_documentoCodeCurrent->setEnabled(false);
        lineEdit_documentoCodeCurrent->setMinimumSize(QSize(120, 0));
        lineEdit_documentoCodeCurrent->setMaximumSize(QSize(120, 16777215));
        lineEdit_documentoCodeCurrent->setFont(font);

        horizontalLayout_4->addWidget(lineEdit_documentoCodeCurrent);


        gridLayout->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        tableView_ListaPacientes1 = new QTableView(historiaClinica_ui);
        tableView_ListaPacientes1->setObjectName(QString::fromUtf8("tableView_ListaPacientes1"));
        tableView_ListaPacientes1->setMaximumSize(QSize(450, 16777215));
        tableView_ListaPacientes1->setFont(font);

        horizontalLayout_2->addWidget(tableView_ListaPacientes1);

        tableView_DocumentList = new QTableView(historiaClinica_ui);
        tableView_DocumentList->setObjectName(QString::fromUtf8("tableView_DocumentList"));
        tableView_DocumentList->setFont(font);

        horizontalLayout_2->addWidget(tableView_DocumentList);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        QWidget::setTabOrder(verDatos_paciente, verDocumento_historial);
        QWidget::setTabOrder(verDocumento_historial, pushButton_editarDocuento);
        QWidget::setTabOrder(pushButton_editarDocuento, pushButton_generatePDF);
        QWidget::setTabOrder(pushButton_generatePDF, pushButton_Fotos);
        QWidget::setTabOrder(pushButton_Fotos, nuevoDocumento_historial);
        QWidget::setTabOrder(nuevoDocumento_historial, lineEdit_PatientActual);

        retranslateUi(historiaClinica_ui);

        QMetaObject::connectSlotsByName(historiaClinica_ui);
    } // setupUi

    void retranslateUi(QWidget *historiaClinica_ui)
    {
        historiaClinica_ui->setWindowTitle(QApplication::translate("historiaClinica_ui", "Form", 0, QApplication::UnicodeUTF8));
        verDatos_paciente->setText(QApplication::translate("historiaClinica_ui", "&Datos", 0, QApplication::UnicodeUTF8));
        verDocumento_historial->setText(QApplication::translate("historiaClinica_ui", "Ver &Documento", 0, QApplication::UnicodeUTF8));
        pushButton_editarDocuento->setText(QApplication::translate("historiaClinica_ui", "Edita&r Documento   ", 0, QApplication::UnicodeUTF8));
        pushButton_generatePDF->setText(QApplication::translate("historiaClinica_ui", "&Generar PDF", 0, QApplication::UnicodeUTF8));
        pushButton_Fotos->setText(QApplication::translate("historiaClinica_ui", "F&otos", 0, QApplication::UnicodeUTF8));
        nuevoDocumento_historial->setText(QApplication::translate("historiaClinica_ui", "&Nuevo Documento", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("historiaClinica_ui", "Buscar:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("historiaClinica_ui", "Paciente Actual ", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("historiaClinica_ui", "Dni ", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("historiaClinica_ui", "Historia Cl\303\255nica ", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("historiaClinica_ui", "C\303\263d Doc.", 0, QApplication::UnicodeUTF8));
        lineEdit_documentoCodeCurrent->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class historiaClinica_ui: public Ui_historiaClinica_ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORIACLINICA_UI_H
