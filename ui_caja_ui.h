/********************************************************************************
** Form generated from reading UI file 'caja_ui.ui'
**
** Created: Thu 14. May 11:49:02 2015
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAJA_UI_H
#define UI_CAJA_UI_H

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
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_caja_ui
{
public:
    QGridLayout *gridLayout_6;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_4;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox_5;
    QComboBox *comboBox_6;
    QDateEdit *dateEdit;
    QDateEdit *dateEdit_5;
    QPushButton *newAlert_alerta_2;
    QPushButton *eliminar_alerta;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_9;
    QLineEdit *lineEdit_6;
    QLabel *label_10;
    QLineEdit *lineEdit_7;
    QLabel *label_11;
    QLineEdit *lineEdit_8;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_6;
    QLabel *label_5;
    QComboBox *comboBox_7;
    QComboBox *comboBox_8;
    QDateEdit *dateEdit_2;
    QDateEdit *dateEdit_6;
    QPushButton *newAlert_alerta_3;
    QPushButton *eliminar_alerta_2;
    QTableWidget *tableWidget_2;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_10;
    QLineEdit *lineEdit_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QWidget *tab_3;
    QLabel *label_28;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_7;
    QLabel *label_15;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QComboBox *comboBox_9;
    QComboBox *comboBox_10;
    QDateEdit *dateEdit_7;
    QDateEdit *dateEdit_8;
    QWidget *tab_4;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_8;
    QLabel *label_16;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QComboBox *comboBox_11;
    QComboBox *comboBox_12;
    QDateEdit *dateEdit_3;
    QDateEdit *dateEdit_9;
    QLabel *label_29;
    QWidget *tab_5;
    QLabel *label_30;
    QWidget *widget;
    QGridLayout *gridLayout_9;
    QLabel *label_23;
    QLabel *label_24;
    QDateEdit *dateEdit_4;
    QDateEdit *dateEdit_10;

    void setupUi(QWidget *caja_ui)
    {
        if (caja_ui->objectName().isEmpty())
            caja_ui->setObjectName(QString::fromUtf8("caja_ui"));
        caja_ui->resize(859, 504);
        gridLayout_6 = new QGridLayout(caja_ui);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        tabWidget = new QTabWidget(caja_ui);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_5 = new QGridLayout(tab);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_4->addWidget(label_3, 0, 0, 1, 1);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_4->addWidget(label_4, 0, 1, 1, 1);

        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_4->addWidget(label, 0, 2, 1, 1);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_4->addWidget(label_2, 0, 3, 1, 1);

        comboBox_5 = new QComboBox(tab);
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));

        gridLayout_4->addWidget(comboBox_5, 1, 0, 1, 1);

        comboBox_6 = new QComboBox(tab);
        comboBox_6->setObjectName(QString::fromUtf8("comboBox_6"));

        gridLayout_4->addWidget(comboBox_6, 1, 1, 1, 1);

        dateEdit = new QDateEdit(tab);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setCalendarPopup(true);

        gridLayout_4->addWidget(dateEdit, 1, 2, 1, 1);

        dateEdit_5 = new QDateEdit(tab);
        dateEdit_5->setObjectName(QString::fromUtf8("dateEdit_5"));
        dateEdit_5->setCalendarPopup(true);

        gridLayout_4->addWidget(dateEdit_5, 1, 3, 1, 1);

        newAlert_alerta_2 = new QPushButton(tab);
        newAlert_alerta_2->setObjectName(QString::fromUtf8("newAlert_alerta_2"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/add1-.png"), QSize(), QIcon::Normal, QIcon::Off);
        newAlert_alerta_2->setIcon(icon);
        newAlert_alerta_2->setIconSize(QSize(20, 20));

        gridLayout_4->addWidget(newAlert_alerta_2, 1, 4, 1, 1);

        eliminar_alerta = new QPushButton(tab);
        eliminar_alerta->setObjectName(QString::fromUtf8("eliminar_alerta"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(eliminar_alerta->sizePolicy().hasHeightForWidth());
        eliminar_alerta->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        eliminar_alerta->setIcon(icon1);
        eliminar_alerta->setIconSize(QSize(20, 20));

        gridLayout_4->addWidget(eliminar_alerta, 1, 5, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 0, 0, 1, 1);

        tableWidget = new QTableWidget(tab);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout_5->addWidget(tableWidget, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_9 = new QLabel(tab);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_3->addWidget(label_9);

        lineEdit_6 = new QLineEdit(tab);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        horizontalLayout_3->addWidget(lineEdit_6);

        label_10 = new QLabel(tab);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_3->addWidget(label_10);

        lineEdit_7 = new QLineEdit(tab);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        horizontalLayout_3->addWidget(lineEdit_7);

        label_11 = new QLabel(tab);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_3->addWidget(label_11);

        lineEdit_8 = new QLineEdit(tab);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));

        horizontalLayout_3->addWidget(lineEdit_8);


        gridLayout_5->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 0, 1, 1, 1);

        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 0, 2, 1, 1);

        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 0, 3, 1, 1);

        comboBox_7 = new QComboBox(tab_2);
        comboBox_7->setObjectName(QString::fromUtf8("comboBox_7"));

        gridLayout_2->addWidget(comboBox_7, 1, 0, 1, 1);

        comboBox_8 = new QComboBox(tab_2);
        comboBox_8->setObjectName(QString::fromUtf8("comboBox_8"));

        gridLayout_2->addWidget(comboBox_8, 1, 1, 1, 1);

        dateEdit_2 = new QDateEdit(tab_2);
        dateEdit_2->setObjectName(QString::fromUtf8("dateEdit_2"));
        dateEdit_2->setCalendarPopup(true);

        gridLayout_2->addWidget(dateEdit_2, 1, 2, 1, 1);

        dateEdit_6 = new QDateEdit(tab_2);
        dateEdit_6->setObjectName(QString::fromUtf8("dateEdit_6"));
        dateEdit_6->setCalendarPopup(true);

        gridLayout_2->addWidget(dateEdit_6, 1, 3, 1, 1);

        newAlert_alerta_3 = new QPushButton(tab_2);
        newAlert_alerta_3->setObjectName(QString::fromUtf8("newAlert_alerta_3"));
        newAlert_alerta_3->setIcon(icon);
        newAlert_alerta_3->setIconSize(QSize(20, 20));

        gridLayout_2->addWidget(newAlert_alerta_3, 1, 4, 1, 1);

        eliminar_alerta_2 = new QPushButton(tab_2);
        eliminar_alerta_2->setObjectName(QString::fromUtf8("eliminar_alerta_2"));
        sizePolicy.setHeightForWidth(eliminar_alerta_2->sizePolicy().hasHeightForWidth());
        eliminar_alerta_2->setSizePolicy(sizePolicy);
        eliminar_alerta_2->setIcon(icon1);
        eliminar_alerta_2->setIconSize(QSize(20, 20));

        gridLayout_2->addWidget(eliminar_alerta_2, 1, 5, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        tableWidget_2 = new QTableWidget(tab_2);
        if (tableWidget_2->columnCount() < 4)
            tableWidget_2->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem7);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));

        gridLayout_3->addWidget(tableWidget_2, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit_9 = new QLineEdit(tab_2);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));

        gridLayout->addWidget(lineEdit_9, 0, 0, 1, 1);

        lineEdit_10 = new QLineEdit(tab_2);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));

        gridLayout->addWidget(lineEdit_10, 0, 1, 1, 1);

        lineEdit_11 = new QLineEdit(tab_2);
        lineEdit_11->setObjectName(QString::fromUtf8("lineEdit_11"));

        gridLayout->addWidget(lineEdit_11, 0, 2, 1, 1);

        label_12 = new QLabel(tab_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 1, 0, 1, 1);

        label_13 = new QLabel(tab_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 1, 1, 1, 1);

        label_14 = new QLabel(tab_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout->addWidget(label_14, 1, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout, 2, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        label_28 = new QLabel(tab_3);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(100, 60, 621, 401));
        label_28->setPixmap(QPixmap(QString::fromUtf8(":/new/Activos.PNG")));
        layoutWidget_2 = new QWidget(tab_3);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 10, 817, 49));
        gridLayout_7 = new QGridLayout(layoutWidget_2);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(layoutWidget_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_7->addWidget(label_15, 0, 0, 1, 1);

        label_17 = new QLabel(layoutWidget_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_7->addWidget(label_17, 0, 1, 1, 1);

        label_18 = new QLabel(layoutWidget_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_7->addWidget(label_18, 0, 2, 1, 1);

        label_19 = new QLabel(layoutWidget_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_7->addWidget(label_19, 0, 3, 1, 1);

        comboBox_9 = new QComboBox(layoutWidget_2);
        comboBox_9->setObjectName(QString::fromUtf8("comboBox_9"));

        gridLayout_7->addWidget(comboBox_9, 1, 0, 1, 1);

        comboBox_10 = new QComboBox(layoutWidget_2);
        comboBox_10->setObjectName(QString::fromUtf8("comboBox_10"));

        gridLayout_7->addWidget(comboBox_10, 1, 1, 1, 1);

        dateEdit_7 = new QDateEdit(layoutWidget_2);
        dateEdit_7->setObjectName(QString::fromUtf8("dateEdit_7"));
        dateEdit_7->setCalendarPopup(true);

        gridLayout_7->addWidget(dateEdit_7, 1, 2, 1, 1);

        dateEdit_8 = new QDateEdit(layoutWidget_2);
        dateEdit_8->setObjectName(QString::fromUtf8("dateEdit_8"));
        dateEdit_8->setCalendarPopup(true);

        gridLayout_7->addWidget(dateEdit_8, 1, 3, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        layoutWidget = new QWidget(tab_4);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 817, 49));
        gridLayout_8 = new QGridLayout(layoutWidget);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(layoutWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_8->addWidget(label_16, 0, 0, 1, 1);

        label_20 = new QLabel(layoutWidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_8->addWidget(label_20, 0, 1, 1, 1);

        label_21 = new QLabel(layoutWidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_8->addWidget(label_21, 0, 2, 1, 1);

        label_22 = new QLabel(layoutWidget);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_8->addWidget(label_22, 0, 3, 1, 1);

        comboBox_11 = new QComboBox(layoutWidget);
        comboBox_11->setObjectName(QString::fromUtf8("comboBox_11"));

        gridLayout_8->addWidget(comboBox_11, 1, 0, 1, 1);

        comboBox_12 = new QComboBox(layoutWidget);
        comboBox_12->setObjectName(QString::fromUtf8("comboBox_12"));

        gridLayout_8->addWidget(comboBox_12, 1, 1, 1, 1);

        dateEdit_3 = new QDateEdit(layoutWidget);
        dateEdit_3->setObjectName(QString::fromUtf8("dateEdit_3"));
        dateEdit_3->setCalendarPopup(true);

        gridLayout_8->addWidget(dateEdit_3, 1, 2, 1, 1);

        dateEdit_9 = new QDateEdit(layoutWidget);
        dateEdit_9->setObjectName(QString::fromUtf8("dateEdit_9"));
        dateEdit_9->setCalendarPopup(true);

        gridLayout_8->addWidget(dateEdit_9, 1, 3, 1, 1);

        label_29 = new QLabel(tab_4);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(80, 60, 661, 401));
        label_29->setPixmap(QPixmap(QString::fromUtf8(":/new/Pasivos.PNG")));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        label_30 = new QLabel(tab_5);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(120, 70, 661, 371));
        label_30->setPixmap(QPixmap(QString::fromUtf8(":/new/Reporte.PNG")));
        widget = new QWidget(tab_5);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(60, 20, 174, 41));
        gridLayout_9 = new QGridLayout(widget);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        label_23 = new QLabel(widget);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout_9->addWidget(label_23, 0, 0, 1, 1);

        label_24 = new QLabel(widget);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_9->addWidget(label_24, 0, 1, 1, 1);

        dateEdit_4 = new QDateEdit(widget);
        dateEdit_4->setObjectName(QString::fromUtf8("dateEdit_4"));
        dateEdit_4->setCalendarPopup(true);

        gridLayout_9->addWidget(dateEdit_4, 1, 0, 1, 1);

        dateEdit_10 = new QDateEdit(widget);
        dateEdit_10->setObjectName(QString::fromUtf8("dateEdit_10"));
        dateEdit_10->setCalendarPopup(true);

        gridLayout_9->addWidget(dateEdit_10, 1, 1, 1, 1);

        tabWidget->addTab(tab_5, QString());

        gridLayout_6->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(caja_ui);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(caja_ui);
    } // setupUi

    void retranslateUi(QWidget *caja_ui)
    {
        caja_ui->setWindowTitle(QApplication::translate("caja_ui", "Form", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("caja_ui", "Categoria Ingresos", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("caja_ui", "Descripcion Ingreso", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("caja_ui", "Fecha Desde:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("caja_ui", "Hasta:", 0, QApplication::UnicodeUTF8));
        comboBox_5->clear();
        comboBox_5->insertItems(0, QStringList()
         << QApplication::translate("caja_ui", "Quirurgicos", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("caja_ui", "Quirurgicos", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("caja_ui", "Dermatologicos y Dermaesteticos", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("caja_ui", "Varices", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("caja_ui", "Corporales", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("caja_ui", "Celulitis", 0, QApplication::UnicodeUTF8)
        );
        comboBox_6->clear();
        comboBox_6->insertItems(0, QStringList()
         << QApplication::translate("caja_ui", "Cirug\303\255a Pl\303\241stica Reparadora", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("caja_ui", "Cirug\303\255a Plastica Estetica", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("caja_ui", "Aumento de Senos o Mastoplastia de Aumento", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("caja_ui", "Reducci\303\263n de Senos en Hombres \"Ginecomastia\"", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("caja_ui", "Implantes Faciales: Remodelaci\303\263n de P\303\263mulos, ", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("caja_ui", "Cirug\303\255a de Orejas u Otoplastia", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("caja_ui", "Rejuvenecimiento de P\303\241rpados o Blefaroplastia", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("caja_ui", "Estiramiento Facial o Lifting", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("caja_ui", "Estiramiento de la Frente o Lifting Frontal", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("caja_ui", "Implante de Cabello", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("caja_ui", "Liposucci\303\263n o Lipoescultura", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("caja_ui", "Remodelaci\303\263n de la Nar\303\255z o Rinoplastia", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("caja_ui", "Revisi\303\263n de Cicatrices", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("caja_ui", "Abdominoplastia y/o Dermolipectomia", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("caja_ui", "Tratamientos de V\303\241rices con L\303\241ser", 0, QApplication::UnicodeUTF8)
        );
        newAlert_alerta_2->setText(QApplication::translate("caja_ui", "&Nuevo Ingreso", 0, QApplication::UnicodeUTF8));
        eliminar_alerta->setText(QApplication::translate("caja_ui", "Eli&minar", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("caja_ui", "Fecha", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("caja_ui", "Descripcion", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("caja_ui", "Moneda", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("caja_ui", "Total Soles", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("caja_ui", "Total Soles", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("caja_ui", "Total Dolares", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("caja_ui", "Total Tarjeta", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("caja_ui", "Activos", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("caja_ui", "Categoria Egresos", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("caja_ui", "Descripcion Egreso", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("caja_ui", "Fecha Desde:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("caja_ui", "Hasta:", 0, QApplication::UnicodeUTF8));
        comboBox_7->clear();
        comboBox_7->insertItems(0, QStringList()
         << QApplication::translate("caja_ui", "Gasto Corriente", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("caja_ui", "Sueldos", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("caja_ui", "Hogar", 0, QApplication::UnicodeUTF8)
        );
        comboBox_8->clear();
        comboBox_8->insertItems(0, QStringList()
         << QApplication::translate("caja_ui", "Energia Electrica", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("caja_ui", "Internet", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("caja_ui", "Telefono", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("caja_ui", "Agua", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("caja_ui", "Jardinero", 0, QApplication::UnicodeUTF8)
        );
        newAlert_alerta_3->setText(QApplication::translate("caja_ui", "&Nuevo Ingreso", 0, QApplication::UnicodeUTF8));
        eliminar_alerta_2->setText(QApplication::translate("caja_ui", "Eli&minar", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("caja_ui", "Fecha", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("caja_ui", "Descripcion", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("caja_ui", "Moneda", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("caja_ui", "Total Soles", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("caja_ui", "Total Soles", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("caja_ui", "Total Dolares", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("caja_ui", "Total Tarjeta", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("caja_ui", "Pasivos", 0, QApplication::UnicodeUTF8));
        label_28->setText(QString());
        label_15->setText(QApplication::translate("caja_ui", "Categoria Ingresos", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("caja_ui", "Descripcion Ingreso", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("caja_ui", "Fecha Desde:", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("caja_ui", "Hasta:", 0, QApplication::UnicodeUTF8));
        comboBox_9->clear();
        comboBox_9->insertItems(0, QStringList()
         << QApplication::translate("caja_ui", "Quirurgicos", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("caja_ui", "Quirurgicos", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("caja_ui", "Dermatologicos y Dermaesteticos", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("caja_ui", "Varices", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("caja_ui", "Corporales", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("caja_ui", "Celulitis", 0, QApplication::UnicodeUTF8)
        );
        comboBox_10->clear();
        comboBox_10->insertItems(0, QStringList()
         << QApplication::translate("caja_ui", "Cirug\303\255a Pl\303\241stica Reparadora", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("caja_ui", "Cirug\303\255a Plastica Estetica", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("caja_ui", "Aumento de Senos o Mastoplastia de Aumento", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("caja_ui", "Reducci\303\263n de Senos en Hombres \"Ginecomastia\"", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("caja_ui", "Implantes Faciales: Remodelaci\303\263n de P\303\263mulos, ", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("caja_ui", "Cirug\303\255a de Orejas u Otoplastia", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("caja_ui", "Rejuvenecimiento de P\303\241rpados o Blefaroplastia", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("caja_ui", "Estiramiento Facial o Lifting", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("caja_ui", "Estiramiento de la Frente o Lifting Frontal", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("caja_ui", "Implante de Cabello", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("caja_ui", "Liposucci\303\263n o Lipoescultura", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("caja_ui", "Remodelaci\303\263n de la Nar\303\255z o Rinoplastia", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("caja_ui", "Revisi\303\263n de Cicatrices", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("caja_ui", "Abdominoplastia y/o Dermolipectomia", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("caja_ui", "Tratamientos de V\303\241rices con L\303\241ser", 0, QApplication::UnicodeUTF8)
        );
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("caja_ui", "Reporte Activos", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("caja_ui", "Categoria Egresos", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("caja_ui", "Descripcion Egreso", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("caja_ui", "Fecha Desde:", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("caja_ui", "Hasta:", 0, QApplication::UnicodeUTF8));
        comboBox_11->clear();
        comboBox_11->insertItems(0, QStringList()
         << QApplication::translate("caja_ui", "Gasto Corriente", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("caja_ui", "Sueldos", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("caja_ui", "Hogar", 0, QApplication::UnicodeUTF8)
        );
        comboBox_12->clear();
        comboBox_12->insertItems(0, QStringList()
         << QApplication::translate("caja_ui", "Energia Electrica", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("caja_ui", "Internet", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("caja_ui", "Telefono", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("caja_ui", "Agua", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("caja_ui", "Jardinero", 0, QApplication::UnicodeUTF8)
        );
        label_29->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("caja_ui", "Reporte Pasivos", 0, QApplication::UnicodeUTF8));
        label_30->setText(QString());
        label_23->setText(QApplication::translate("caja_ui", "Fecha Desde:", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("caja_ui", "Hasta:", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("caja_ui", "Reporte General", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class caja_ui: public Ui_caja_ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAJA_UI_H
