/********************************************************************************
** Form generated from reading UI file 'consulta_paciente_ui.ui'
**
** Created: Sat 11. Jun 15:26:28 2016
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSULTA_PACIENTE_UI_H
#define UI_CONSULTA_PACIENTE_UI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_consulta_paciente_ui
{
public:
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_showConsulta;
    QPushButton *pushButton_editConsulta;
    QPushButton *pushButton_generarPDF;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_deleteConsulta;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_Patient;
    QLabel *label_3;
    QLineEdit *lineEdit_code;
    QSpacerItem *horizontalSpacer_2;
    QFrame *line;
    QGridLayout *gridLayout_4;
    QLabel *label;
    QTableWidget *tableWidget_SurgeryList;
    QGridLayout *gridLayout_5;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton;

    void setupUi(QWidget *consulta_paciente_ui)
    {
        if (consulta_paciente_ui->objectName().isEmpty())
            consulta_paciente_ui->setObjectName(QString::fromUtf8("consulta_paciente_ui"));
        consulta_paciente_ui->resize(550, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/folder_documents.png"), QSize(), QIcon::Normal, QIcon::Off);
        consulta_paciente_ui->setWindowIcon(icon);
        gridLayout_7 = new QGridLayout(consulta_paciente_ui);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        pushButton_showConsulta = new QPushButton(consulta_paciente_ui);
        pushButton_showConsulta->setObjectName(QString::fromUtf8("pushButton_showConsulta"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_showConsulta->sizePolicy().hasHeightForWidth());
        pushButton_showConsulta->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        pushButton_showConsulta->setFont(font);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/file_search.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_showConsulta->setIcon(icon1);
        pushButton_showConsulta->setIconSize(QSize(20, 20));

        gridLayout_3->addWidget(pushButton_showConsulta, 0, 0, 1, 1);

        pushButton_editConsulta = new QPushButton(consulta_paciente_ui);
        pushButton_editConsulta->setObjectName(QString::fromUtf8("pushButton_editConsulta"));
        sizePolicy.setHeightForWidth(pushButton_editConsulta->sizePolicy().hasHeightForWidth());
        pushButton_editConsulta->setSizePolicy(sizePolicy);
        pushButton_editConsulta->setFont(font);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_editConsulta->setIcon(icon2);
        pushButton_editConsulta->setIconSize(QSize(20, 20));

        gridLayout_3->addWidget(pushButton_editConsulta, 0, 1, 1, 1);

        pushButton_generarPDF = new QPushButton(consulta_paciente_ui);
        pushButton_generarPDF->setObjectName(QString::fromUtf8("pushButton_generarPDF"));
        sizePolicy.setHeightForWidth(pushButton_generarPDF->sizePolicy().hasHeightForWidth());
        pushButton_generarPDF->setSizePolicy(sizePolicy);
        pushButton_generarPDF->setFont(font);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/Adobe - Acrobat.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_generarPDF->setIcon(icon3);
        pushButton_generarPDF->setIconSize(QSize(20, 20));

        gridLayout_3->addWidget(pushButton_generarPDF, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(128, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 3, 1, 1);

        pushButton_deleteConsulta = new QPushButton(consulta_paciente_ui);
        pushButton_deleteConsulta->setObjectName(QString::fromUtf8("pushButton_deleteConsulta"));
        sizePolicy.setHeightForWidth(pushButton_deleteConsulta->sizePolicy().hasHeightForWidth());
        pushButton_deleteConsulta->setSizePolicy(sizePolicy);
        pushButton_deleteConsulta->setFont(font);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_deleteConsulta->setIcon(icon4);
        pushButton_deleteConsulta->setIconSize(QSize(20, 20));

        gridLayout_3->addWidget(pushButton_deleteConsulta, 0, 4, 1, 1);


        gridLayout_6->addLayout(gridLayout_3, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(consulta_paciente_ui);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        lineEdit_Patient = new QLineEdit(consulta_paciente_ui);
        lineEdit_Patient->setObjectName(QString::fromUtf8("lineEdit_Patient"));
        lineEdit_Patient->setMinimumSize(QSize(250, 0));
        lineEdit_Patient->setMaximumSize(QSize(250, 16777215));
        lineEdit_Patient->setFont(font);
        lineEdit_Patient->setReadOnly(true);

        gridLayout->addWidget(lineEdit_Patient, 0, 1, 1, 1);

        label_3 = new QLabel(consulta_paciente_ui);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        lineEdit_code = new QLineEdit(consulta_paciente_ui);
        lineEdit_code->setObjectName(QString::fromUtf8("lineEdit_code"));
        sizePolicy.setHeightForWidth(lineEdit_code->sizePolicy().hasHeightForWidth());
        lineEdit_code->setSizePolicy(sizePolicy);
        lineEdit_code->setMinimumSize(QSize(120, 0));
        lineEdit_code->setMaximumSize(QSize(120, 16777215));
        lineEdit_code->setFont(font);
        lineEdit_code->setReadOnly(true);

        gridLayout->addWidget(lineEdit_code, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(128, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_2, 1, 0, 1, 1);

        line = new QFrame(consulta_paciente_ui);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFont(font);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_6->addWidget(line, 2, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label = new QLabel(consulta_paciente_ui);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        tableWidget_SurgeryList = new QTableWidget(consulta_paciente_ui);
        if (tableWidget_SurgeryList->columnCount() < 3)
            tableWidget_SurgeryList->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_SurgeryList->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_SurgeryList->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_SurgeryList->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget_SurgeryList->setObjectName(QString::fromUtf8("tableWidget_SurgeryList"));
        tableWidget_SurgeryList->setFont(font);
        tableWidget_SurgeryList->setEditTriggers(QAbstractItemView::DoubleClicked);
        tableWidget_SurgeryList->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_SurgeryList->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_SurgeryList->setGridStyle(Qt::NoPen);
        tableWidget_SurgeryList->setSortingEnabled(true);
        tableWidget_SurgeryList->setWordWrap(false);
        tableWidget_SurgeryList->setCornerButtonEnabled(false);

        gridLayout_4->addWidget(tableWidget_SurgeryList, 1, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_4, 3, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalSpacer_4 = new QSpacerItem(448, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_4, 0, 0, 1, 1);

        pushButton = new QPushButton(consulta_paciente_ui);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font);

        gridLayout_5->addWidget(pushButton, 0, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 4, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_6, 0, 0, 1, 1);


        retranslateUi(consulta_paciente_ui);

        QMetaObject::connectSlotsByName(consulta_paciente_ui);
    } // setupUi

    void retranslateUi(QWidget *consulta_paciente_ui)
    {
        consulta_paciente_ui->setWindowTitle(QApplication::translate("consulta_paciente_ui", "Lista de Consultas", 0, QApplication::UnicodeUTF8));
        pushButton_showConsulta->setText(QApplication::translate("consulta_paciente_ui", "Ver Consulta", 0, QApplication::UnicodeUTF8));
        pushButton_editConsulta->setText(QApplication::translate("consulta_paciente_ui", "Editar Consulta", 0, QApplication::UnicodeUTF8));
        pushButton_generarPDF->setText(QApplication::translate("consulta_paciente_ui", "Generar PDF", 0, QApplication::UnicodeUTF8));
        pushButton_deleteConsulta->setText(QApplication::translate("consulta_paciente_ui", "Eliminar Consulta", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("consulta_paciente_ui", "Paciente :", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("consulta_paciente_ui", "C\303\263digo de Documento :", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("consulta_paciente_ui", "Lista de consultas :", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_SurgeryList->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("consulta_paciente_ui", "Fecha", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_SurgeryList->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("consulta_paciente_ui", "Motivo", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_SurgeryList->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("consulta_paciente_ui", "C\303\263digo", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("consulta_paciente_ui", "Salir", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class consulta_paciente_ui: public Ui_consulta_paciente_ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSULTA_PACIENTE_UI_H
