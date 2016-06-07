/********************************************************************************
** Form generated from reading UI file 'historiaclinica_ui.ui'
**
** Created: Wed 27. May 12:29:15 2015
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORIACLINICA_UI_H
#define UI_HISTORIACLINICA_UI_H

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
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_historiaClinica_ui
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox_search;
    QLineEdit *lineEdit_historialSearch;
    QPushButton *pushButton_Search;
    QFrame *line_2;
    QLabel *label_5;
    QTableWidget *tableWidget_result;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *verDatos_paciente;
    QPushButton *verDocumento_historial;
    QPushButton *pushButton_editarDocuento;
    QPushButton *pushButton_generatePDF;
    QPushButton *pushButton_Fotos;
    QPushButton *nuevoDocumento_historial;
    QHBoxLayout *horizontalLayout_3;
    QFrame *line_4;
    QLabel *label;
    QLineEdit *lineEdit_PatientActual;
    QLabel *label_7;
    QLineEdit *lineEdit_currentDni;
    QLabel *label_9;
    QLineEdit *lineEdit_historiaClinicaCurrent;
    QLabel *label_8;
    QLineEdit *lineEdit_documentoCodeCurrent;
    QTableWidget *tableWidget_DocumentList;

    void setupUi(QWidget *historiaClinica_ui)
    {
        if (historiaClinica_ui->objectName().isEmpty())
            historiaClinica_ui->setObjectName(QString::fromUtf8("historiaClinica_ui"));
        historiaClinica_ui->resize(956, 285);
        gridLayout = new QGridLayout(historiaClinica_ui);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        comboBox_search = new QComboBox(historiaClinica_ui);
        comboBox_search->setObjectName(QString::fromUtf8("comboBox_search"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox_search->sizePolicy().hasHeightForWidth());
        comboBox_search->setSizePolicy(sizePolicy);
        comboBox_search->setMinimumSize(QSize(0, 0));
        comboBox_search->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(comboBox_search);

        lineEdit_historialSearch = new QLineEdit(historiaClinica_ui);
        lineEdit_historialSearch->setObjectName(QString::fromUtf8("lineEdit_historialSearch"));
        sizePolicy.setHeightForWidth(lineEdit_historialSearch->sizePolicy().hasHeightForWidth());
        lineEdit_historialSearch->setSizePolicy(sizePolicy);
        lineEdit_historialSearch->setMinimumSize(QSize(0, 0));

        horizontalLayout->addWidget(lineEdit_historialSearch);

        pushButton_Search = new QPushButton(historiaClinica_ui);
        pushButton_Search->setObjectName(QString::fromUtf8("pushButton_Search"));
        sizePolicy.setHeightForWidth(pushButton_Search->sizePolicy().hasHeightForWidth());
        pushButton_Search->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/zoom.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Search->setIcon(icon);
        pushButton_Search->setIconSize(QSize(16, 16));
        pushButton_Search->setFlat(true);

        horizontalLayout->addWidget(pushButton_Search);


        verticalLayout->addLayout(horizontalLayout);

        line_2 = new QFrame(historiaClinica_ui);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(line_2->sizePolicy().hasHeightForWidth());
        line_2->setSizePolicy(sizePolicy1);
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        label_5 = new QLabel(historiaClinica_ui);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(label_5);

        tableWidget_result = new QTableWidget(historiaClinica_ui);
        if (tableWidget_result->columnCount() < 2)
            tableWidget_result->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_result->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_result->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget_result->setObjectName(QString::fromUtf8("tableWidget_result"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tableWidget_result->sizePolicy().hasHeightForWidth());
        tableWidget_result->setSizePolicy(sizePolicy2);
        tableWidget_result->setMaximumSize(QSize(351, 16777215));

        verticalLayout->addWidget(tableWidget_result);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verDatos_paciente = new QPushButton(historiaClinica_ui);
        verDatos_paciente->setObjectName(QString::fromUtf8("verDatos_paciente"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/preferences-contact-list.png"), QSize(), QIcon::Normal, QIcon::Off);
        verDatos_paciente->setIcon(icon1);
        verDatos_paciente->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(verDatos_paciente);

        verDocumento_historial = new QPushButton(historiaClinica_ui);
        verDocumento_historial->setObjectName(QString::fromUtf8("verDocumento_historial"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/file_search.png"), QSize(), QIcon::Normal, QIcon::Off);
        verDocumento_historial->setIcon(icon2);
        verDocumento_historial->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(verDocumento_historial);

        pushButton_editarDocuento = new QPushButton(historiaClinica_ui);
        pushButton_editarDocuento->setObjectName(QString::fromUtf8("pushButton_editarDocuento"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/file_edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_editarDocuento->setIcon(icon3);
        pushButton_editarDocuento->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(pushButton_editarDocuento);

        pushButton_generatePDF = new QPushButton(historiaClinica_ui);
        pushButton_generatePDF->setObjectName(QString::fromUtf8("pushButton_generatePDF"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton_generatePDF->sizePolicy().hasHeightForWidth());
        pushButton_generatePDF->setSizePolicy(sizePolicy3);
        pushButton_generatePDF->setMaximumSize(QSize(16777215, 28));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/Adobe - Acrobat.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_generatePDF->setIcon(icon4);
        pushButton_generatePDF->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(pushButton_generatePDF);

        pushButton_Fotos = new QPushButton(historiaClinica_ui);
        pushButton_Fotos->setObjectName(QString::fromUtf8("pushButton_Fotos"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/HP-Pictures-Folder-Dock-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Fotos->setIcon(icon5);
        pushButton_Fotos->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(pushButton_Fotos);

        nuevoDocumento_historial = new QPushButton(historiaClinica_ui);
        nuevoDocumento_historial->setObjectName(QString::fromUtf8("nuevoDocumento_historial"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/file_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        nuevoDocumento_historial->setIcon(icon6);
        nuevoDocumento_historial->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(nuevoDocumento_historial);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        line_4 = new QFrame(historiaClinica_ui);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(line_4);

        label = new QLabel(historiaClinica_ui);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label);

        lineEdit_PatientActual = new QLineEdit(historiaClinica_ui);
        lineEdit_PatientActual->setObjectName(QString::fromUtf8("lineEdit_PatientActual"));
        lineEdit_PatientActual->setMinimumSize(QSize(0, 0));
        lineEdit_PatientActual->setMaximumSize(QSize(250, 16777215));

        horizontalLayout_3->addWidget(lineEdit_PatientActual);

        label_7 = new QLabel(historiaClinica_ui);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label_7);

        lineEdit_currentDni = new QLineEdit(historiaClinica_ui);
        lineEdit_currentDni->setObjectName(QString::fromUtf8("lineEdit_currentDni"));
        sizePolicy.setHeightForWidth(lineEdit_currentDni->sizePolicy().hasHeightForWidth());
        lineEdit_currentDni->setSizePolicy(sizePolicy);
        lineEdit_currentDni->setMinimumSize(QSize(0, 0));
        lineEdit_currentDni->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_3->addWidget(lineEdit_currentDni);

        label_9 = new QLabel(historiaClinica_ui);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label_9);

        lineEdit_historiaClinicaCurrent = new QLineEdit(historiaClinica_ui);
        lineEdit_historiaClinicaCurrent->setObjectName(QString::fromUtf8("lineEdit_historiaClinicaCurrent"));
        lineEdit_historiaClinicaCurrent->setMinimumSize(QSize(0, 0));
        lineEdit_historiaClinicaCurrent->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_3->addWidget(lineEdit_historiaClinicaCurrent);

        label_8 = new QLabel(historiaClinica_ui);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label_8);

        lineEdit_documentoCodeCurrent = new QLineEdit(historiaClinica_ui);
        lineEdit_documentoCodeCurrent->setObjectName(QString::fromUtf8("lineEdit_documentoCodeCurrent"));
        lineEdit_documentoCodeCurrent->setMinimumSize(QSize(120, 0));
        lineEdit_documentoCodeCurrent->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_3->addWidget(lineEdit_documentoCodeCurrent);


        verticalLayout_2->addLayout(horizontalLayout_3);

        tableWidget_DocumentList = new QTableWidget(historiaClinica_ui);
        if (tableWidget_DocumentList->columnCount() < 3)
            tableWidget_DocumentList->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_DocumentList->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_DocumentList->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_DocumentList->setHorizontalHeaderItem(2, __qtablewidgetitem4);
        tableWidget_DocumentList->setObjectName(QString::fromUtf8("tableWidget_DocumentList"));

        verticalLayout_2->addWidget(tableWidget_DocumentList);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

        QWidget::setTabOrder(lineEdit_historialSearch, pushButton_Search);
        QWidget::setTabOrder(pushButton_Search, tableWidget_result);
        QWidget::setTabOrder(tableWidget_result, verDatos_paciente);
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
        comboBox_search->clear();
        comboBox_search->insertItems(0, QStringList()
         << QApplication::translate("historiaClinica_ui", "Historia Cl\303\255nica", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("historiaClinica_ui", "Nombre", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("historiaClinica_ui", "Dni", 0, QApplication::UnicodeUTF8)
        );
        pushButton_Search->setText(QString());
        label_5->setText(QApplication::translate("historiaClinica_ui", "Resultados ", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_result->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("historiaClinica_ui", "Dni", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_result->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("historiaClinica_ui", "Nombre", 0, QApplication::UnicodeUTF8));
        verDatos_paciente->setText(QApplication::translate("historiaClinica_ui", "&Datos", 0, QApplication::UnicodeUTF8));
        verDocumento_historial->setText(QApplication::translate("historiaClinica_ui", "Ver &Documento", 0, QApplication::UnicodeUTF8));
        pushButton_editarDocuento->setText(QApplication::translate("historiaClinica_ui", "Edita&r Documento   ", 0, QApplication::UnicodeUTF8));
        pushButton_generatePDF->setText(QApplication::translate("historiaClinica_ui", "&Generar PDF", 0, QApplication::UnicodeUTF8));
        pushButton_Fotos->setText(QApplication::translate("historiaClinica_ui", "F&otos", 0, QApplication::UnicodeUTF8));
        nuevoDocumento_historial->setText(QApplication::translate("historiaClinica_ui", "&Nuevo Documento", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("historiaClinica_ui", "Paciente Actual ", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("historiaClinica_ui", "Dni ", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("historiaClinica_ui", "Historia Cl\303\255nica ", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("historiaClinica_ui", "C\303\263digo de Documento", 0, QApplication::UnicodeUTF8));
        lineEdit_documentoCodeCurrent->setText(QString());
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_DocumentList->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("historiaClinica_ui", "Fecha de Creaci\303\263n", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_DocumentList->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("historiaClinica_ui", "Tipo de Documento", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_DocumentList->horizontalHeaderItem(2);
        ___qtablewidgetitem4->setText(QApplication::translate("historiaClinica_ui", "C\303\263digo de Documento", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class historiaClinica_ui: public Ui_historiaClinica_ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORIACLINICA_UI_H
