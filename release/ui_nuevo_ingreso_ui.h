/********************************************************************************
** Form generated from reading UI file 'nuevo_ingreso_ui.ui'
**
** Created: Wed 27. May 12:29:15 2015
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NUEVO_INGRESO_UI_H
#define UI_NUEVO_INGRESO_UI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_nuevo_ingreso_ui
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QDateEdit *dateEdit;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QComboBox *comboBox;
    QPushButton *pushButton_2;
    QLabel *label_7;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_9;
    QPushButton *pushButton_3;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_9;
    QLineEdit *lineEdit_6;
    QLabel *label_11;
    QLineEdit *lineEdit_7;
    QLabel *label_12;
    QLineEdit *lineEdit_8;

    void setupUi(QWidget *nuevo_ingreso_ui)
    {
        if (nuevo_ingreso_ui->objectName().isEmpty())
            nuevo_ingreso_ui->setObjectName(QString::fromUtf8("nuevo_ingreso_ui"));
        nuevo_ingreso_ui->resize(622, 375);
        gridLayout_2 = new QGridLayout(nuevo_ingreso_ui);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(nuevo_ingreso_ui);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        dateEdit = new QDateEdit(nuevo_ingreso_ui);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        gridLayout->addWidget(dateEdit, 0, 1, 1, 1);

        label_3 = new QLabel(nuevo_ingreso_ui);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 1, 1, 1);

        label_4 = new QLabel(nuevo_ingreso_ui);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 2, 1, 1);

        label_6 = new QLabel(nuevo_ingreso_ui);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 2, 3, 1, 1);

        label_5 = new QLabel(nuevo_ingreso_ui);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        lineEdit_3 = new QLineEdit(nuevo_ingreso_ui);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 3, 1, 1, 1);

        lineEdit_4 = new QLineEdit(nuevo_ingreso_ui);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        gridLayout->addWidget(lineEdit_4, 3, 2, 1, 1);

        comboBox = new QComboBox(nuevo_ingreso_ui);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 3, 3, 1, 1);

        pushButton_2 = new QPushButton(nuevo_ingreso_ui);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 3, 5, 1, 1);

        label_7 = new QLabel(nuevo_ingreso_ui);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 4, 0, 1, 1);

        lineEdit_5 = new QLineEdit(nuevo_ingreso_ui);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        gridLayout->addWidget(lineEdit_5, 4, 1, 1, 1);

        lineEdit_9 = new QLineEdit(nuevo_ingreso_ui);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));

        gridLayout->addWidget(lineEdit_9, 4, 2, 1, 1);

        pushButton_3 = new QPushButton(nuevo_ingreso_ui);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 4, 5, 1, 1);

        label_2 = new QLabel(nuevo_ingreso_ui);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit = new QLineEdit(nuevo_ingreso_ui);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 1, 1, 1);

        pushButton = new QPushButton(nuevo_ingreso_ui);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 1, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

        gridLayout->addLayout(horizontalLayout, 4, 3, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        tableWidget = new QTableWidget(nuevo_ingreso_ui);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout_2->addWidget(tableWidget, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_9 = new QLabel(nuevo_ingreso_ui);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_3->addWidget(label_9);

        lineEdit_6 = new QLineEdit(nuevo_ingreso_ui);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        horizontalLayout_3->addWidget(lineEdit_6);

        label_11 = new QLabel(nuevo_ingreso_ui);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_3->addWidget(label_11);

        lineEdit_7 = new QLineEdit(nuevo_ingreso_ui);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        horizontalLayout_3->addWidget(lineEdit_7);

        label_12 = new QLabel(nuevo_ingreso_ui);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_3->addWidget(label_12);

        lineEdit_8 = new QLineEdit(nuevo_ingreso_ui);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));

        horizontalLayout_3->addWidget(lineEdit_8);


        gridLayout_2->addLayout(horizontalLayout_3, 2, 0, 1, 1);


        retranslateUi(nuevo_ingreso_ui);

        QMetaObject::connectSlotsByName(nuevo_ingreso_ui);
    } // setupUi

    void retranslateUi(QWidget *nuevo_ingreso_ui)
    {
        nuevo_ingreso_ui->setWindowTitle(QApplication::translate("nuevo_ingreso_ui", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("nuevo_ingreso_ui", "Fecha", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("nuevo_ingreso_ui", "Motivo de ingreso", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("nuevo_ingreso_ui", "Monto", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("nuevo_ingreso_ui", "Ingreso", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("nuevo_ingreso_ui", "Ingreso", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("nuevo_ingreso_ui", "Ingresar", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("nuevo_ingreso_ui", "Egreso", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("nuevo_ingreso_ui", "Ingresar", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("nuevo_ingreso_ui", "Cliente", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("nuevo_ingreso_ui", "Busca", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("nuevo_ingreso_ui", "Cod.", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("nuevo_ingreso_ui", "Fecha", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("nuevo_ingreso_ui", "Descripcion", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("nuevo_ingreso_ui", "Moneda", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("nuevo_ingreso_ui", "Ingreso", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("nuevo_ingreso_ui", "Egreso", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("nuevo_ingreso_ui", "Total Soles", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("nuevo_ingreso_ui", "Total Dolares", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("nuevo_ingreso_ui", "Total Tarjeta", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class nuevo_ingreso_ui: public Ui_nuevo_ingreso_ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUEVO_INGRESO_UI_H
