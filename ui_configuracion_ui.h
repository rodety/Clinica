/********************************************************************************
** Form generated from reading UI file 'configuracion_ui.ui'
**
** Created: Sat 11. Jun 15:26:28 2016
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURACION_UI_H
#define UI_CONFIGURACION_UI_H

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

class Ui_configuracion_ui
{
public:
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QPushButton *pushButton_VerDatos;
    QPushButton *pushButton_Editar;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_newPersonal;
    QFrame *line_2;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_Nombre;
    QLabel *label_4;
    QLineEdit *lineEdit_dni_show;
    QLabel *label_5;
    QLineEdit *lineEdit_Cargo;
    QLineEdit *lineEdit_Dni;
    QSpacerItem *horizontalSpacer_2;
    QTableWidget *tableWidget_trabajadores;

    void setupUi(QWidget *configuracion_ui)
    {
        if (configuracion_ui->objectName().isEmpty())
            configuracion_ui->setObjectName(QString::fromUtf8("configuracion_ui"));
        configuracion_ui->resize(850, 450);
        gridLayout_4 = new QGridLayout(configuracion_ui);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_VerDatos = new QPushButton(configuracion_ui);
        pushButton_VerDatos->setObjectName(QString::fromUtf8("pushButton_VerDatos"));
        QFont font;
        font.setPointSize(12);
        pushButton_VerDatos->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/old-edit-find.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_VerDatos->setIcon(icon);
        pushButton_VerDatos->setIconSize(QSize(20, 20));

        gridLayout->addWidget(pushButton_VerDatos, 0, 0, 1, 1);

        pushButton_Editar = new QPushButton(configuracion_ui);
        pushButton_Editar->setObjectName(QString::fromUtf8("pushButton_Editar"));
        pushButton_Editar->setFont(font);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/1329798431_Application.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Editar->setIcon(icon1);
        pushButton_Editar->setIconSize(QSize(20, 20));

        gridLayout->addWidget(pushButton_Editar, 0, 1, 1, 1);

        pushButton_3 = new QPushButton(configuracion_ui);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setFont(font);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/Remove-Male-User.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        pushButton_3->setIconSize(QSize(20, 20));

        gridLayout->addWidget(pushButton_3, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(148, 37, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 3, 1, 1);

        pushButton_newPersonal = new QPushButton(configuracion_ui);
        pushButton_newPersonal->setObjectName(QString::fromUtf8("pushButton_newPersonal"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_newPersonal->sizePolicy().hasHeightForWidth());
        pushButton_newPersonal->setSizePolicy(sizePolicy);
        pushButton_newPersonal->setFont(font);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/Add-Male-User.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_newPersonal->setIcon(icon3);
        pushButton_newPersonal->setIconSize(QSize(20, 20));

        gridLayout->addWidget(pushButton_newPersonal, 0, 4, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

        line_2 = new QFrame(configuracion_ui);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFont(font);
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_2, 1, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_3 = new QLabel(configuracion_ui);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setFont(font);

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        lineEdit_Nombre = new QLineEdit(configuracion_ui);
        lineEdit_Nombre->setObjectName(QString::fromUtf8("lineEdit_Nombre"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEdit_Nombre->sizePolicy().hasHeightForWidth());
        lineEdit_Nombre->setSizePolicy(sizePolicy2);
        lineEdit_Nombre->setMinimumSize(QSize(250, 0));
        lineEdit_Nombre->setMaximumSize(QSize(350, 16777215));
        lineEdit_Nombre->setFont(font);
        lineEdit_Nombre->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_Nombre, 0, 1, 1, 1);

        label_4 = new QLabel(configuracion_ui);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_4, 0, 2, 1, 1);

        lineEdit_dni_show = new QLineEdit(configuracion_ui);
        lineEdit_dni_show->setObjectName(QString::fromUtf8("lineEdit_dni_show"));
        sizePolicy.setHeightForWidth(lineEdit_dni_show->sizePolicy().hasHeightForWidth());
        lineEdit_dni_show->setSizePolicy(sizePolicy);
        lineEdit_dni_show->setMinimumSize(QSize(120, 0));
        lineEdit_dni_show->setMaximumSize(QSize(120, 16777215));
        lineEdit_dni_show->setFont(font);
        lineEdit_dni_show->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_dni_show, 0, 3, 1, 1);

        label_5 = new QLabel(configuracion_ui);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_5, 0, 4, 1, 1);

        lineEdit_Cargo = new QLineEdit(configuracion_ui);
        lineEdit_Cargo->setObjectName(QString::fromUtf8("lineEdit_Cargo"));
        sizePolicy.setHeightForWidth(lineEdit_Cargo->sizePolicy().hasHeightForWidth());
        lineEdit_Cargo->setSizePolicy(sizePolicy);
        lineEdit_Cargo->setMinimumSize(QSize(120, 0));
        lineEdit_Cargo->setMaximumSize(QSize(120, 16777215));
        lineEdit_Cargo->setFont(font);
        lineEdit_Cargo->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_Cargo, 0, 5, 1, 1);

        lineEdit_Dni = new QLineEdit(configuracion_ui);
        lineEdit_Dni->setObjectName(QString::fromUtf8("lineEdit_Dni"));
        sizePolicy.setHeightForWidth(lineEdit_Dni->sizePolicy().hasHeightForWidth());
        lineEdit_Dni->setSizePolicy(sizePolicy);
        lineEdit_Dni->setFont(font);

        gridLayout_2->addWidget(lineEdit_Dni, 0, 6, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 7, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 2, 0, 1, 1);

        tableWidget_trabajadores = new QTableWidget(configuracion_ui);
        if (tableWidget_trabajadores->columnCount() < 4)
            tableWidget_trabajadores->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_trabajadores->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_trabajadores->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_trabajadores->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_trabajadores->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget_trabajadores->setObjectName(QString::fromUtf8("tableWidget_trabajadores"));
        tableWidget_trabajadores->setEnabled(true);
        tableWidget_trabajadores->setFont(font);
        tableWidget_trabajadores->setAcceptDrops(false);
        tableWidget_trabajadores->setEditTriggers(QAbstractItemView::DoubleClicked);
        tableWidget_trabajadores->setDragDropOverwriteMode(false);
        tableWidget_trabajadores->setAlternatingRowColors(true);
        tableWidget_trabajadores->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_trabajadores->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_trabajadores->setShowGrid(false);
        tableWidget_trabajadores->setGridStyle(Qt::NoPen);
        tableWidget_trabajadores->setSortingEnabled(true);
        tableWidget_trabajadores->setWordWrap(false);
        tableWidget_trabajadores->setCornerButtonEnabled(false);
        tableWidget_trabajadores->horizontalHeader()->setMinimumSectionSize(0);

        gridLayout_3->addWidget(tableWidget_trabajadores, 3, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);


        retranslateUi(configuracion_ui);

        QMetaObject::connectSlotsByName(configuracion_ui);
    } // setupUi

    void retranslateUi(QWidget *configuracion_ui)
    {
        configuracion_ui->setWindowTitle(QApplication::translate("configuracion_ui", "Form", 0, QApplication::UnicodeUTF8));
        pushButton_VerDatos->setText(QApplication::translate("configuracion_ui", "&Ver Datos", 0, QApplication::UnicodeUTF8));
        pushButton_Editar->setText(QApplication::translate("configuracion_ui", "E&ditar", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("configuracion_ui", "Elimina&r", 0, QApplication::UnicodeUTF8));
        pushButton_newPersonal->setText(QApplication::translate("configuracion_ui", "&Nuevo Personal", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("configuracion_ui", "Nombre", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("configuracion_ui", "Dni", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("configuracion_ui", "Cargo", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_trabajadores->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("configuracion_ui", "Apellidos", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_trabajadores->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("configuracion_ui", "Nombres", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_trabajadores->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("configuracion_ui", "Dni", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_trabajadores->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("configuracion_ui", "Cargo", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class configuracion_ui: public Ui_configuracion_ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURACION_UI_H
