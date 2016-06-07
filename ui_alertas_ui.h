/********************************************************************************
** Form generated from reading UI file 'alertas_ui.ui'
**
** Created: Thu 14. May 11:49:01 2015
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALERTAS_UI_H
#define UI_ALERTAS_UI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
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

class Ui_alertas_ui
{
public:
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QPushButton *verAlerta;
    QPushButton *editar_alerta;
    QPushButton *eliminar_alerta;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *newAlert_alerta;
    QFrame *line;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QDateEdit *dateEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_code;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_showAll;
    QPushButton *pushButton_Alert_changeColor;
    QTableWidget *tableWidget_AlertList;

    void setupUi(QWidget *alertas_ui)
    {
        if (alertas_ui->objectName().isEmpty())
            alertas_ui->setObjectName(QString::fromUtf8("alertas_ui"));
        alertas_ui->resize(850, 450);
        gridLayout_4 = new QGridLayout(alertas_ui);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verAlerta = new QPushButton(alertas_ui);
        verAlerta->setObjectName(QString::fromUtf8("verAlerta"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/old-edit-find.png"), QSize(), QIcon::Normal, QIcon::Off);
        verAlerta->setIcon(icon);
        verAlerta->setIconSize(QSize(20, 20));

        gridLayout->addWidget(verAlerta, 0, 0, 1, 1);

        editar_alerta = new QPushButton(alertas_ui);
        editar_alerta->setObjectName(QString::fromUtf8("editar_alerta"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(editar_alerta->sizePolicy().hasHeightForWidth());
        editar_alerta->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        editar_alerta->setIcon(icon1);
        editar_alerta->setIconSize(QSize(20, 20));

        gridLayout->addWidget(editar_alerta, 0, 1, 1, 1);

        eliminar_alerta = new QPushButton(alertas_ui);
        eliminar_alerta->setObjectName(QString::fromUtf8("eliminar_alerta"));
        sizePolicy.setHeightForWidth(eliminar_alerta->sizePolicy().hasHeightForWidth());
        eliminar_alerta->setSizePolicy(sizePolicy);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        eliminar_alerta->setIcon(icon2);
        eliminar_alerta->setIconSize(QSize(20, 20));

        gridLayout->addWidget(eliminar_alerta, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(208, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        newAlert_alerta = new QPushButton(alertas_ui);
        newAlert_alerta->setObjectName(QString::fromUtf8("newAlert_alerta"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/add1-.png"), QSize(), QIcon::Normal, QIcon::Off);
        newAlert_alerta->setIcon(icon3);
        newAlert_alerta->setIconSize(QSize(20, 20));

        gridLayout->addWidget(newAlert_alerta, 0, 4, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

        line = new QFrame(alertas_ui);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line, 1, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(alertas_ui);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        dateEdit = new QDateEdit(alertas_ui);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setEnabled(true);
        sizePolicy.setHeightForWidth(dateEdit->sizePolicy().hasHeightForWidth());
        dateEdit->setSizePolicy(sizePolicy);
        dateEdit->setLayoutDirection(Qt::LeftToRight);
        dateEdit->setWrapping(false);
        dateEdit->setCalendarPopup(true);
        dateEdit->setTimeSpec(Qt::LocalTime);

        gridLayout_2->addWidget(dateEdit, 0, 1, 1, 1);

        label_3 = new QLabel(alertas_ui);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_3, 0, 2, 1, 1);

        lineEdit_code = new QLineEdit(alertas_ui);
        lineEdit_code->setObjectName(QString::fromUtf8("lineEdit_code"));
        sizePolicy.setHeightForWidth(lineEdit_code->sizePolicy().hasHeightForWidth());
        lineEdit_code->setSizePolicy(sizePolicy);
        lineEdit_code->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_code, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(728, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 4, 1, 1);

        pushButton_showAll = new QPushButton(alertas_ui);
        pushButton_showAll->setObjectName(QString::fromUtf8("pushButton_showAll"));
        sizePolicy.setHeightForWidth(pushButton_showAll->sizePolicy().hasHeightForWidth());
        pushButton_showAll->setSizePolicy(sizePolicy);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/zoom.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_showAll->setIcon(icon4);
        pushButton_showAll->setIconSize(QSize(16, 16));
        pushButton_showAll->setFlat(true);

        gridLayout_2->addWidget(pushButton_showAll, 0, 5, 1, 1);

        pushButton_Alert_changeColor = new QPushButton(alertas_ui);
        pushButton_Alert_changeColor->setObjectName(QString::fromUtf8("pushButton_Alert_changeColor"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/color_swatch.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Alert_changeColor->setIcon(icon5);
        pushButton_Alert_changeColor->setIconSize(QSize(16, 16));
        pushButton_Alert_changeColor->setFlat(true);

        gridLayout_2->addWidget(pushButton_Alert_changeColor, 0, 6, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 2, 0, 1, 1);

        tableWidget_AlertList = new QTableWidget(alertas_ui);
        if (tableWidget_AlertList->columnCount() < 4)
            tableWidget_AlertList->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_AlertList->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_AlertList->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_AlertList->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_AlertList->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget_AlertList->setObjectName(QString::fromUtf8("tableWidget_AlertList"));
        QFont font;
        font.setStrikeOut(false);
        tableWidget_AlertList->setFont(font);
        tableWidget_AlertList->setEditTriggers(QAbstractItemView::DoubleClicked);
        tableWidget_AlertList->setDragDropOverwriteMode(false);
        tableWidget_AlertList->setAlternatingRowColors(true);
        tableWidget_AlertList->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_AlertList->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_AlertList->setShowGrid(false);
        tableWidget_AlertList->setGridStyle(Qt::NoPen);
        tableWidget_AlertList->setSortingEnabled(true);
        tableWidget_AlertList->setWordWrap(false);
        tableWidget_AlertList->setCornerButtonEnabled(false);

        gridLayout_3->addWidget(tableWidget_AlertList, 3, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);


        retranslateUi(alertas_ui);

        QMetaObject::connectSlotsByName(alertas_ui);
    } // setupUi

    void retranslateUi(QWidget *alertas_ui)
    {
        alertas_ui->setWindowTitle(QApplication::translate("alertas_ui", "Form", 0, QApplication::UnicodeUTF8));
        verAlerta->setText(QApplication::translate("alertas_ui", "&Ver Alerta", 0, QApplication::UnicodeUTF8));
        editar_alerta->setText(QApplication::translate("alertas_ui", "Edita&r Alerta", 0, QApplication::UnicodeUTF8));
        eliminar_alerta->setText(QApplication::translate("alertas_ui", "Eli&minar Alerta", 0, QApplication::UnicodeUTF8));
        newAlert_alerta->setText(QApplication::translate("alertas_ui", "&Nueva Alerta", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("alertas_ui", "Fecha :", 0, QApplication::UnicodeUTF8));
        dateEdit->setDisplayFormat(QApplication::translate("alertas_ui", "yyyy/MM/dd", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("alertas_ui", "C\303\263digo :", 0, QApplication::UnicodeUTF8));
        pushButton_showAll->setText(QApplication::translate("alertas_ui", "Ver T&odas", 0, QApplication::UnicodeUTF8));
        pushButton_Alert_changeColor->setText(QApplication::translate("alertas_ui", "Color", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_AlertList->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("alertas_ui", "Fecha", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_AlertList->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("alertas_ui", "Hora", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_AlertList->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("alertas_ui", "Descripcion ", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_AlertList->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("alertas_ui", "Codigo", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class alertas_ui: public Ui_alertas_ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALERTAS_UI_H
