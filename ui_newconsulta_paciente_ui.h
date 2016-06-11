/********************************************************************************
** Form generated from reading UI file 'newconsulta_paciente_ui.ui'
**
** Created: Sat 11. Jun 15:26:28 2016
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWCONSULTA_PACIENTE_UI_H
#define UI_NEWCONSULTA_PACIENTE_UI_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_newconsulta_paciente_ui
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QDateEdit *dateEdit;
    QSpacerItem *horizontalSpacer_5;
    QDateEdit *dateEdit_creation;
    QLabel *label_2;
    QLineEdit *lineEdit_Patient;
    QLabel *label;
    QTextEdit *textEdit_Reason;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Acept;
    QPushButton *pushButton_Save;
    QPushButton *pushButton_Cancel;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *newconsulta_paciente_ui)
    {
        if (newconsulta_paciente_ui->objectName().isEmpty())
            newconsulta_paciente_ui->setObjectName(QString::fromUtf8("newconsulta_paciente_ui"));
        newconsulta_paciente_ui->resize(420, 185);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/1329798428_PatientData.png"), QSize(), QIcon::Normal, QIcon::Off);
        newconsulta_paciente_ui->setWindowIcon(icon);
        gridLayout_3 = new QGridLayout(newconsulta_paciente_ui);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_3 = new QLabel(newconsulta_paciente_ui);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        label_3->setFont(font);

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        dateEdit = new QDateEdit(newconsulta_paciente_ui);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        sizePolicy.setHeightForWidth(dateEdit->sizePolicy().hasHeightForWidth());
        dateEdit->setSizePolicy(sizePolicy);
        dateEdit->setFont(font);
        dateEdit->setDate(QDate(2000, 1, 3));
        dateEdit->setCalendarPopup(true);

        gridLayout_2->addWidget(dateEdit, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(218, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 0, 2, 1, 1);

        dateEdit_creation = new QDateEdit(newconsulta_paciente_ui);
        dateEdit_creation->setObjectName(QString::fromUtf8("dateEdit_creation"));
        sizePolicy.setHeightForWidth(dateEdit_creation->sizePolicy().hasHeightForWidth());
        dateEdit_creation->setSizePolicy(sizePolicy);
        dateEdit_creation->setFont(font);
        dateEdit_creation->setCalendarPopup(true);

        gridLayout_2->addWidget(dateEdit_creation, 0, 3, 1, 1);

        label_2 = new QLabel(newconsulta_paciente_ui);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setFont(font);

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_Patient = new QLineEdit(newconsulta_paciente_ui);
        lineEdit_Patient->setObjectName(QString::fromUtf8("lineEdit_Patient"));
        lineEdit_Patient->setFont(font);

        gridLayout_2->addWidget(lineEdit_Patient, 1, 1, 1, 3);

        label = new QLabel(newconsulta_paciente_ui);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setFont(font);

        gridLayout_2->addWidget(label, 2, 0, 1, 1);

        textEdit_Reason = new QTextEdit(newconsulta_paciente_ui);
        textEdit_Reason->setObjectName(QString::fromUtf8("textEdit_Reason"));
        textEdit_Reason->setFont(font);

        gridLayout_2->addWidget(textEdit_Reason, 2, 1, 1, 3);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        pushButton_Acept = new QPushButton(newconsulta_paciente_ui);
        pushButton_Acept->setObjectName(QString::fromUtf8("pushButton_Acept"));
        pushButton_Acept->setFont(font);

        gridLayout->addWidget(pushButton_Acept, 0, 1, 1, 1);

        pushButton_Save = new QPushButton(newconsulta_paciente_ui);
        pushButton_Save->setObjectName(QString::fromUtf8("pushButton_Save"));
        pushButton_Save->setFont(font);

        gridLayout->addWidget(pushButton_Save, 0, 2, 1, 1);

        pushButton_Cancel = new QPushButton(newconsulta_paciente_ui);
        pushButton_Cancel->setObjectName(QString::fromUtf8("pushButton_Cancel"));
        pushButton_Cancel->setFont(font);

        gridLayout->addWidget(pushButton_Cancel, 0, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 4, 1, 1);


        gridLayout_3->addLayout(gridLayout, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(5, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer, 1, 0, 1, 1);

        QWidget::setTabOrder(dateEdit, dateEdit_creation);
        QWidget::setTabOrder(dateEdit_creation, lineEdit_Patient);
        QWidget::setTabOrder(lineEdit_Patient, textEdit_Reason);
        QWidget::setTabOrder(textEdit_Reason, pushButton_Acept);
        QWidget::setTabOrder(pushButton_Acept, pushButton_Save);
        QWidget::setTabOrder(pushButton_Save, pushButton_Cancel);

        retranslateUi(newconsulta_paciente_ui);

        QMetaObject::connectSlotsByName(newconsulta_paciente_ui);
    } // setupUi

    void retranslateUi(QWidget *newconsulta_paciente_ui)
    {
        newconsulta_paciente_ui->setWindowTitle(QApplication::translate("newconsulta_paciente_ui", "Consulta", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("newconsulta_paciente_ui", "Fecha :", 0, QApplication::UnicodeUTF8));
        dateEdit->setDisplayFormat(QApplication::translate("newconsulta_paciente_ui", "yyyy/MM/dd", 0, QApplication::UnicodeUTF8));
        dateEdit_creation->setDisplayFormat(QApplication::translate("newconsulta_paciente_ui", "yyyy/MM/dd", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("newconsulta_paciente_ui", "Paciente :", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("newconsulta_paciente_ui", "Motivo :", 0, QApplication::UnicodeUTF8));
        pushButton_Acept->setText(QApplication::translate("newconsulta_paciente_ui", "Aceptar", 0, QApplication::UnicodeUTF8));
        pushButton_Save->setText(QApplication::translate("newconsulta_paciente_ui", "Guardar", 0, QApplication::UnicodeUTF8));
        pushButton_Cancel->setText(QApplication::translate("newconsulta_paciente_ui", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class newconsulta_paciente_ui: public Ui_newconsulta_paciente_ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWCONSULTA_PACIENTE_UI_H
