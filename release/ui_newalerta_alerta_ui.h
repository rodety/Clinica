/********************************************************************************
** Form generated from reading UI file 'newalerta_alerta_ui.ui'
**
** Created: Wed 27. May 12:29:14 2015
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWALERTA_ALERTA_UI_H
#define UI_NEWALERTA_ALERTA_UI_H

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
#include <QtGui/QTimeEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_newalerta_alerta_ui
{
public:
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout;
    QLabel *label;
    QDateEdit *dateEdit;
    QLabel *label_3;
    QTimeEdit *timeEdit;
    QSpacerItem *horizontalSpacer;
    QFrame *line;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_Acept;
    QPushButton *pushButton_Save;
    QPushButton *pushButton_Cancel;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *newalerta_alerta_ui)
    {
        if (newalerta_alerta_ui->objectName().isEmpty())
            newalerta_alerta_ui->setObjectName(QString::fromUtf8("newalerta_alerta_ui"));
        newalerta_alerta_ui->resize(420, 166);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/1329798431_Application.png"), QSize(), QIcon::Normal, QIcon::Off);
        newalerta_alerta_ui->setWindowIcon(icon);
        gridLayout_5 = new QGridLayout(newalerta_alerta_ui);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(newalerta_alerta_ui);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        dateEdit = new QDateEdit(newalerta_alerta_ui);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setCalendarPopup(true);

        gridLayout->addWidget(dateEdit, 0, 1, 1, 1);

        label_3 = new QLabel(newalerta_alerta_ui);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        timeEdit = new QTimeEdit(newalerta_alerta_ui);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setMaximumDateTime(QDateTime(QDate(2000, 1, 1), QTime(23, 59, 59)));
        timeEdit->setMaximumTime(QTime(23, 59, 59));
        timeEdit->setCurrentSection(QDateTimeEdit::HourSection);
        timeEdit->setCalendarPopup(false);

        gridLayout->addWidget(timeEdit, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(274, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 4, 1, 1);


        gridLayout_4->addLayout(gridLayout, 0, 0, 1, 1);

        line = new QFrame(newalerta_alerta_ui);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line, 1, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(newalerta_alerta_ui);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        lineEdit = new QLineEdit(newalerta_alerta_ui);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout_2->addWidget(lineEdit, 1, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 2, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        pushButton_Acept = new QPushButton(newalerta_alerta_ui);
        pushButton_Acept->setObjectName(QString::fromUtf8("pushButton_Acept"));

        gridLayout_3->addWidget(pushButton_Acept, 1, 1, 1, 1);

        pushButton_Save = new QPushButton(newalerta_alerta_ui);
        pushButton_Save->setObjectName(QString::fromUtf8("pushButton_Save"));

        gridLayout_3->addWidget(pushButton_Save, 1, 2, 1, 1);

        pushButton_Cancel = new QPushButton(newalerta_alerta_ui);
        pushButton_Cancel->setObjectName(QString::fromUtf8("pushButton_Cancel"));

        gridLayout_3->addWidget(pushButton_Cancel, 1, 3, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_5, 1, 4, 1, 1);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer, 0, 2, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 3, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 0, 0, 1, 1);

        QWidget::setTabOrder(dateEdit, timeEdit);
        QWidget::setTabOrder(timeEdit, lineEdit);
        QWidget::setTabOrder(lineEdit, pushButton_Acept);
        QWidget::setTabOrder(pushButton_Acept, pushButton_Save);
        QWidget::setTabOrder(pushButton_Save, pushButton_Cancel);

        retranslateUi(newalerta_alerta_ui);

        QMetaObject::connectSlotsByName(newalerta_alerta_ui);
    } // setupUi

    void retranslateUi(QWidget *newalerta_alerta_ui)
    {
        newalerta_alerta_ui->setWindowTitle(QApplication::translate("newalerta_alerta_ui", "Alerta", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("newalerta_alerta_ui", "Fecha :", 0, QApplication::UnicodeUTF8));
        dateEdit->setDisplayFormat(QApplication::translate("newalerta_alerta_ui", "yyyy/MM/dd", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("newalerta_alerta_ui", "Hora :", 0, QApplication::UnicodeUTF8));
        timeEdit->setDisplayFormat(QApplication::translate("newalerta_alerta_ui", "hh:mm:ss", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("newalerta_alerta_ui", "Nota :", 0, QApplication::UnicodeUTF8));
        pushButton_Acept->setText(QApplication::translate("newalerta_alerta_ui", "Aceptar", 0, QApplication::UnicodeUTF8));
        pushButton_Save->setText(QApplication::translate("newalerta_alerta_ui", "Guardar", 0, QApplication::UnicodeUTF8));
        pushButton_Cancel->setText(QApplication::translate("newalerta_alerta_ui", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class newalerta_alerta_ui: public Ui_newalerta_alerta_ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWALERTA_ALERTA_UI_H
