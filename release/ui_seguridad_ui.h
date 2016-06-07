/********************************************************************************
** Form generated from reading UI file 'seguridad_ui.ui'
**
** Created: Wed 27. May 12:29:14 2015
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEGURIDAD_UI_H
#define UI_SEGURIDAD_UI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_seguridad_ui
{
public:

    void setupUi(QWidget *seguridad_ui)
    {
        if (seguridad_ui->objectName().isEmpty())
            seguridad_ui->setObjectName(QString::fromUtf8("seguridad_ui"));
        seguridad_ui->resize(1300, 600);

        retranslateUi(seguridad_ui);

        QMetaObject::connectSlotsByName(seguridad_ui);
    } // setupUi

    void retranslateUi(QWidget *seguridad_ui)
    {
        seguridad_ui->setWindowTitle(QApplication::translate("seguridad_ui", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class seguridad_ui: public Ui_seguridad_ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEGURIDAD_UI_H
