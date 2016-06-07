/********************************************************************************
** Form generated from reading UI file 'ayuda_ui.ui'
**
** Created: Mon 7. Jan 16:32:54 2013
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AYUDA_UI_H
#define UI_AYUDA_UI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ayuda_ui
{
public:

    void setupUi(QWidget *ayuda_ui)
    {
        if (ayuda_ui->objectName().isEmpty())
            ayuda_ui->setObjectName(QString::fromUtf8("ayuda_ui"));
        ayuda_ui->resize(400, 300);

        retranslateUi(ayuda_ui);

        QMetaObject::connectSlotsByName(ayuda_ui);
    } // setupUi

    void retranslateUi(QWidget *ayuda_ui)
    {
        ayuda_ui->setWindowTitle(QApplication::translate("ayuda_ui", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ayuda_ui: public Ui_ayuda_ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AYUDA_UI_H
