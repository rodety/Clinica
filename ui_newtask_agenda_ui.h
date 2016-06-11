/********************************************************************************
** Form generated from reading UI file 'newtask_agenda_ui.ui'
**
** Created: Sat 11. Jun 15:26:28 2016
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWTASK_AGENDA_UI_H
#define UI_NEWTASK_AGENDA_UI_H

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
#include <QtGui/QTableView>
#include <QtGui/QTimeEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_newTask_agenda_ui
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDateEdit *dateEdit;
    QLabel *label_5;
    QTimeEdit *timeEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_Name;
    QTableView *tableView;
    QGridLayout *gridLayout;
    QLabel *label_7;
    QLineEdit *lineEdit_Telefono;
    QLabel *label_3;
    QLineEdit *lineEdit_Descripcion;
    QLabel *label_6;
    QLineEdit *lineEdit_Historia;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Acept;
    QPushButton *pushButton_Save;
    QPushButton *pushButton_Cancel;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *newTask_agenda_ui)
    {
        if (newTask_agenda_ui->objectName().isEmpty())
            newTask_agenda_ui->setObjectName(QString::fromUtf8("newTask_agenda_ui"));
        newTask_agenda_ui->resize(698, 538);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/sign-up.png"), QSize(), QIcon::Normal, QIcon::Off);
        newTask_agenda_ui->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(newTask_agenda_ui);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(newTask_agenda_ui);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        dateEdit = new QDateEdit(newTask_agenda_ui);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setFont(font);
        dateEdit->setCalendarPopup(true);

        horizontalLayout->addWidget(dateEdit);

        label_5 = new QLabel(newTask_agenda_ui);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        horizontalLayout->addWidget(label_5);

        timeEdit = new QTimeEdit(newTask_agenda_ui);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setFont(font);
        timeEdit->setCalendarPopup(true);

        horizontalLayout->addWidget(timeEdit);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(newTask_agenda_ui);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        lineEdit_Name = new QLineEdit(newTask_agenda_ui);
        lineEdit_Name->setObjectName(QString::fromUtf8("lineEdit_Name"));
        lineEdit_Name->setFont(font);

        horizontalLayout_2->addWidget(lineEdit_Name);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        tableView = new QTableView(newTask_agenda_ui);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setFont(font);

        gridLayout_2->addWidget(tableView, 2, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_7 = new QLabel(newTask_agenda_ui);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        gridLayout->addWidget(label_7, 0, 0, 1, 1);

        lineEdit_Telefono = new QLineEdit(newTask_agenda_ui);
        lineEdit_Telefono->setObjectName(QString::fromUtf8("lineEdit_Telefono"));
        lineEdit_Telefono->setFont(font);

        gridLayout->addWidget(lineEdit_Telefono, 0, 1, 1, 1);

        label_3 = new QLabel(newTask_agenda_ui);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        lineEdit_Descripcion = new QLineEdit(newTask_agenda_ui);
        lineEdit_Descripcion->setObjectName(QString::fromUtf8("lineEdit_Descripcion"));
        lineEdit_Descripcion->setFont(font);

        gridLayout->addWidget(lineEdit_Descripcion, 1, 1, 1, 1);

        label_6 = new QLabel(newTask_agenda_ui);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        lineEdit_Historia = new QLineEdit(newTask_agenda_ui);
        lineEdit_Historia->setObjectName(QString::fromUtf8("lineEdit_Historia"));
        lineEdit_Historia->setFont(font);

        gridLayout->addWidget(lineEdit_Historia, 2, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 3, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        pushButton_Acept = new QPushButton(newTask_agenda_ui);
        pushButton_Acept->setObjectName(QString::fromUtf8("pushButton_Acept"));
        pushButton_Acept->setFont(font);

        horizontalLayout_5->addWidget(pushButton_Acept);

        pushButton_Save = new QPushButton(newTask_agenda_ui);
        pushButton_Save->setObjectName(QString::fromUtf8("pushButton_Save"));
        pushButton_Save->setFont(font);

        horizontalLayout_5->addWidget(pushButton_Save);

        pushButton_Cancel = new QPushButton(newTask_agenda_ui);
        pushButton_Cancel->setObjectName(QString::fromUtf8("pushButton_Cancel"));
        pushButton_Cancel->setFont(font);

        horizontalLayout_5->addWidget(pushButton_Cancel);

        horizontalSpacer_4 = new QSpacerItem(13, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        gridLayout_2->addLayout(horizontalLayout_5, 4, 0, 1, 1);

        QWidget::setTabOrder(dateEdit, timeEdit);
        QWidget::setTabOrder(timeEdit, lineEdit_Name);
        QWidget::setTabOrder(lineEdit_Name, tableView);
        QWidget::setTabOrder(tableView, lineEdit_Telefono);
        QWidget::setTabOrder(lineEdit_Telefono, lineEdit_Descripcion);
        QWidget::setTabOrder(lineEdit_Descripcion, pushButton_Acept);
        QWidget::setTabOrder(pushButton_Acept, pushButton_Save);
        QWidget::setTabOrder(pushButton_Save, pushButton_Cancel);

        retranslateUi(newTask_agenda_ui);

        QMetaObject::connectSlotsByName(newTask_agenda_ui);
    } // setupUi

    void retranslateUi(QWidget *newTask_agenda_ui)
    {
        newTask_agenda_ui->setWindowTitle(QApplication::translate("newTask_agenda_ui", "Nueva Tarea", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("newTask_agenda_ui", "Fecha:", 0, QApplication::UnicodeUTF8));
        dateEdit->setDisplayFormat(QApplication::translate("newTask_agenda_ui", "yyyy/MM/dd", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("newTask_agenda_ui", "Hora:", 0, QApplication::UnicodeUTF8));
        timeEdit->setDisplayFormat(QApplication::translate("newTask_agenda_ui", "hh:mm:ss", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("newTask_agenda_ui", "Nombre:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("newTask_agenda_ui", "Tel\303\251fono / Celular: ", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("newTask_agenda_ui", "Descripci\303\263n:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("newTask_agenda_ui", "Historia Clinica:", 0, QApplication::UnicodeUTF8));
        pushButton_Acept->setText(QApplication::translate("newTask_agenda_ui", "Aceptar", 0, QApplication::UnicodeUTF8));
        pushButton_Save->setText(QApplication::translate("newTask_agenda_ui", "Guardar", 0, QApplication::UnicodeUTF8));
        pushButton_Cancel->setText(QApplication::translate("newTask_agenda_ui", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class newTask_agenda_ui: public Ui_newTask_agenda_ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWTASK_AGENDA_UI_H
