/********************************************************************************
** Form generated from reading UI file 'fotos_ui.ui'
**
** Created: Wed 27. May 12:29:15 2015
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOTOS_UI_H
#define UI_FOTOS_UI_H

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

class Ui_fotos_ui
{
public:
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout;
    QPushButton *pushButton_uploadPicture;
    QPushButton *pushButton_downloadPicture;
    QPushButton *pushButton_showPictures;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_goFilePicture;
    QFrame *line;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *lineEdit_patientName;
    QLabel *label_3;
    QLineEdit *lineEdit_historiaClinicaCode;
    QLabel *label_4;
    QLineEdit *lineEdit_documentCode;
    QSpacerItem *horizontalSpacer_3;
    QFrame *line_2;
    QGridLayout *gridLayout_4;
    QLabel *label_2;
    QTableWidget *tableWidget_reporteOperatorio;
    QGridLayout *gridLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_5;

    void setupUi(QWidget *fotos_ui)
    {
        if (fotos_ui->objectName().isEmpty())
            fotos_ui->setObjectName(QString::fromUtf8("fotos_ui"));
        fotos_ui->resize(577, 582);
        gridLayout_7 = new QGridLayout(fotos_ui);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_uploadPicture = new QPushButton(fotos_ui);
        pushButton_uploadPicture->setObjectName(QString::fromUtf8("pushButton_uploadPicture"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/add1-.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_uploadPicture->setIcon(icon);
        pushButton_uploadPicture->setIconSize(QSize(20, 20));

        gridLayout->addWidget(pushButton_uploadPicture, 0, 0, 1, 1);

        pushButton_downloadPicture = new QPushButton(fotos_ui);
        pushButton_downloadPicture->setObjectName(QString::fromUtf8("pushButton_downloadPicture"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/system-software-update.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_downloadPicture->setIcon(icon1);
        pushButton_downloadPicture->setIconSize(QSize(20, 20));

        gridLayout->addWidget(pushButton_downloadPicture, 0, 1, 1, 1);

        pushButton_showPictures = new QPushButton(fotos_ui);
        pushButton_showPictures->setObjectName(QString::fromUtf8("pushButton_showPictures"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/preview.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_showPictures->setIcon(icon2);
        pushButton_showPictures->setIconSize(QSize(20, 20));

        gridLayout->addWidget(pushButton_showPictures, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(78, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 3, 1, 1);

        pushButton_goFilePicture = new QPushButton(fotos_ui);
        pushButton_goFilePicture->setObjectName(QString::fromUtf8("pushButton_goFilePicture"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/Web.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_goFilePicture->setIcon(icon3);
        pushButton_goFilePicture->setIconSize(QSize(20, 20));

        gridLayout->addWidget(pushButton_goFilePicture, 0, 4, 1, 1);


        gridLayout_6->addLayout(gridLayout, 0, 0, 1, 1);

        line = new QFrame(fotos_ui);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_6->addWidget(line, 1, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(fotos_ui);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        lineEdit_patientName = new QLineEdit(fotos_ui);
        lineEdit_patientName->setObjectName(QString::fromUtf8("lineEdit_patientName"));
        lineEdit_patientName->setMinimumSize(QSize(250, 0));
        lineEdit_patientName->setMaximumSize(QSize(250, 16777215));
        lineEdit_patientName->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_patientName, 0, 1, 1, 1);

        label_3 = new QLabel(fotos_ui);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        lineEdit_historiaClinicaCode = new QLineEdit(fotos_ui);
        lineEdit_historiaClinicaCode->setObjectName(QString::fromUtf8("lineEdit_historiaClinicaCode"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_historiaClinicaCode->sizePolicy().hasHeightForWidth());
        lineEdit_historiaClinicaCode->setSizePolicy(sizePolicy);
        lineEdit_historiaClinicaCode->setMinimumSize(QSize(120, 0));
        lineEdit_historiaClinicaCode->setMaximumSize(QSize(120, 16777215));
        lineEdit_historiaClinicaCode->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_historiaClinicaCode, 1, 1, 1, 1);

        label_4 = new QLabel(fotos_ui);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 2, 0, 1, 1);

        lineEdit_documentCode = new QLineEdit(fotos_ui);
        lineEdit_documentCode->setObjectName(QString::fromUtf8("lineEdit_documentCode"));
        sizePolicy.setHeightForWidth(lineEdit_documentCode->sizePolicy().hasHeightForWidth());
        lineEdit_documentCode->setSizePolicy(sizePolicy);
        lineEdit_documentCode->setMinimumSize(QSize(120, 0));
        lineEdit_documentCode->setMaximumSize(QSize(120, 16777215));
        lineEdit_documentCode->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_documentCode, 2, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(88, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 0, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_3, 2, 0, 1, 1);

        line_2 = new QFrame(fotos_ui);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_6->addWidget(line_2, 3, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_2 = new QLabel(fotos_ui);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_4->addWidget(label_2, 0, 0, 1, 1);

        tableWidget_reporteOperatorio = new QTableWidget(fotos_ui);
        if (tableWidget_reporteOperatorio->columnCount() < 3)
            tableWidget_reporteOperatorio->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_reporteOperatorio->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_reporteOperatorio->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_reporteOperatorio->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget_reporteOperatorio->setObjectName(QString::fromUtf8("tableWidget_reporteOperatorio"));
        tableWidget_reporteOperatorio->setAlternatingRowColors(true);
        tableWidget_reporteOperatorio->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_reporteOperatorio->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_reporteOperatorio->setShowGrid(false);
        tableWidget_reporteOperatorio->setGridStyle(Qt::NoPen);
        tableWidget_reporteOperatorio->setSortingEnabled(true);
        tableWidget_reporteOperatorio->setWordWrap(false);
        tableWidget_reporteOperatorio->setCornerButtonEnabled(false);

        gridLayout_4->addWidget(tableWidget_reporteOperatorio, 1, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_4, 4, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalSpacer_2 = new QSpacerItem(378, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        pushButton_5 = new QPushButton(fotos_ui);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout_5->addWidget(pushButton_5, 0, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 5, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_6, 0, 0, 1, 1);


        retranslateUi(fotos_ui);

        QMetaObject::connectSlotsByName(fotos_ui);
    } // setupUi

    void retranslateUi(QWidget *fotos_ui)
    {
        fotos_ui->setWindowTitle(QApplication::translate("fotos_ui", "Form", 0, QApplication::UnicodeUTF8));
        pushButton_uploadPicture->setText(QApplication::translate("fotos_ui", "A\303\261adir Fotos", 0, QApplication::UnicodeUTF8));
        pushButton_downloadPicture->setText(QApplication::translate("fotos_ui", "Descargar Fotos", 0, QApplication::UnicodeUTF8));
        pushButton_showPictures->setText(QApplication::translate("fotos_ui", "Ver Fotos", 0, QApplication::UnicodeUTF8));
        pushButton_goFilePicture->setText(QApplication::translate("fotos_ui", "Ir Carpeta", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("fotos_ui", "Paciente :", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("fotos_ui", "Historia Cl\303\255nica :", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("fotos_ui", "C\303\263digo Documento :", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("fotos_ui", "Lista de Reportes Operatorios:", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_reporteOperatorio->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("fotos_ui", "Fecha", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_reporteOperatorio->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("fotos_ui", "Comentario", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_reporteOperatorio->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("fotos_ui", "C\303\263digo de Documento", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("fotos_ui", "Salir", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class fotos_ui: public Ui_fotos_ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOTOS_UI_H
