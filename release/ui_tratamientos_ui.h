/********************************************************************************
** Form generated from reading UI file 'tratamientos_ui.ui'
**
** Created: Wed 27. May 12:29:14 2015
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRATAMIENTOS_UI_H
#define UI_TRATAMIENTOS_UI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tratamientos_ui
{
public:

    void setupUi(QWidget *tratamientos_ui)
    {
        if (tratamientos_ui->objectName().isEmpty())
            tratamientos_ui->setObjectName(QString::fromUtf8("tratamientos_ui"));
        tratamientos_ui->resize(400, 300);

        retranslateUi(tratamientos_ui);

        QMetaObject::connectSlotsByName(tratamientos_ui);
    } // setupUi

    void retranslateUi(QWidget *tratamientos_ui)
    {
        tratamientos_ui->setWindowTitle(QApplication::translate("tratamientos_ui", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tratamientos_ui: public Ui_tratamientos_ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRATAMIENTOS_UI_H
