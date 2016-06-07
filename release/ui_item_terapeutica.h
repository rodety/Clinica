/********************************************************************************
** Form generated from reading UI file 'item_terapeutica.ui'
**
** Created: Wed 27. May 12:29:15 2015
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEM_TERAPEUTICA_H
#define UI_ITEM_TERAPEUTICA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTimeEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_item_terapeutica
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QDateEdit *dateEdit_Fecha_inicio;
    QLabel *label_3;
    QTimeEdit *timeEdit_Hora_inicio;
    QLabel *label_5;
    QDateEdit *dateEdit_Fecha_fin;
    QLabel *label_6;
    QTimeEdit *timeEdit_Hora_fin;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Aceptar;
    QPushButton *pushButton_Cancelar;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *item_terapeutica)
    {
        if (item_terapeutica->objectName().isEmpty())
            item_terapeutica->setObjectName(QString::fromUtf8("item_terapeutica"));
        item_terapeutica->resize(352, 123);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/distributor-report.png"), QSize(), QIcon::Normal, QIcon::Off);
        item_terapeutica->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(item_terapeutica);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(item_terapeutica);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        dateEdit_Fecha_inicio = new QDateEdit(item_terapeutica);
        dateEdit_Fecha_inicio->setObjectName(QString::fromUtf8("dateEdit_Fecha_inicio"));
        dateEdit_Fecha_inicio->setCalendarPopup(true);

        gridLayout->addWidget(dateEdit_Fecha_inicio, 0, 1, 1, 1);

        label_3 = new QLabel(item_terapeutica);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        timeEdit_Hora_inicio = new QTimeEdit(item_terapeutica);
        timeEdit_Hora_inicio->setObjectName(QString::fromUtf8("timeEdit_Hora_inicio"));
        timeEdit_Hora_inicio->setCalendarPopup(false);

        gridLayout->addWidget(timeEdit_Hora_inicio, 0, 3, 1, 1);

        label_5 = new QLabel(item_terapeutica);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        dateEdit_Fecha_fin = new QDateEdit(item_terapeutica);
        dateEdit_Fecha_fin->setObjectName(QString::fromUtf8("dateEdit_Fecha_fin"));
        dateEdit_Fecha_fin->setCalendarPopup(true);

        gridLayout->addWidget(dateEdit_Fecha_fin, 1, 1, 1, 1);

        label_6 = new QLabel(item_terapeutica);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 1, 2, 1, 1);

        timeEdit_Hora_fin = new QTimeEdit(item_terapeutica);
        timeEdit_Hora_fin->setObjectName(QString::fromUtf8("timeEdit_Hora_fin"));
        timeEdit_Hora_fin->setCalendarPopup(false);

        gridLayout->addWidget(timeEdit_Hora_fin, 1, 3, 1, 1);

        label_4 = new QLabel(item_terapeutica);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        lineEdit = new QLineEdit(item_terapeutica);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 2, 1, 1, 3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_Aceptar = new QPushButton(item_terapeutica);
        pushButton_Aceptar->setObjectName(QString::fromUtf8("pushButton_Aceptar"));

        horizontalLayout->addWidget(pushButton_Aceptar);

        pushButton_Cancelar = new QPushButton(item_terapeutica);
        pushButton_Cancelar->setObjectName(QString::fromUtf8("pushButton_Cancelar"));

        horizontalLayout->addWidget(pushButton_Cancelar);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 4);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        QWidget::setTabOrder(dateEdit_Fecha_inicio, timeEdit_Hora_inicio);
        QWidget::setTabOrder(timeEdit_Hora_inicio, dateEdit_Fecha_fin);
        QWidget::setTabOrder(dateEdit_Fecha_fin, timeEdit_Hora_fin);
        QWidget::setTabOrder(timeEdit_Hora_fin, lineEdit);
        QWidget::setTabOrder(lineEdit, pushButton_Aceptar);
        QWidget::setTabOrder(pushButton_Aceptar, pushButton_Cancelar);

        retranslateUi(item_terapeutica);

        QMetaObject::connectSlotsByName(item_terapeutica);
    } // setupUi

    void retranslateUi(QWidget *item_terapeutica)
    {
        item_terapeutica->setWindowTitle(QApplication::translate("item_terapeutica", "AGREGAR TERAPEUTICA", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("item_terapeutica", "Fecha de inicio    ", 0, QApplication::UnicodeUTF8));
        dateEdit_Fecha_inicio->setDisplayFormat(QApplication::translate("item_terapeutica", "yyyy/MM/dd", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("item_terapeutica", "Hora de inicio", 0, QApplication::UnicodeUTF8));
        timeEdit_Hora_inicio->setDisplayFormat(QApplication::translate("item_terapeutica", "hh:mm:ss", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("item_terapeutica", "Fecha de t\303\251rmino", 0, QApplication::UnicodeUTF8));
        dateEdit_Fecha_fin->setDisplayFormat(QApplication::translate("item_terapeutica", "yyyy/MM/dd", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("item_terapeutica", "Hora de t\303\251rmino", 0, QApplication::UnicodeUTF8));
        timeEdit_Hora_fin->setDisplayFormat(QApplication::translate("item_terapeutica", "hh:mm:ss", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("item_terapeutica", "TERAPEUTICA", 0, QApplication::UnicodeUTF8));
        pushButton_Aceptar->setText(QApplication::translate("item_terapeutica", "Aceptar", 0, QApplication::UnicodeUTF8));
        pushButton_Cancelar->setText(QApplication::translate("item_terapeutica", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class item_terapeutica: public Ui_item_terapeutica {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEM_TERAPEUTICA_H
