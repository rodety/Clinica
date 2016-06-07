/********************************************************************************
** Form generated from reading UI file 'mailing_ui.ui'
**
** Created: Mon 7. Jan 16:32:54 2013
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAILING_UI_H
#define UI_MAILING_UI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>
#include <QtWebKit/QWebView>

QT_BEGIN_NAMESPACE

class Ui_mailing_ui
{
public:
    QGridLayout *gridLayout;
    QWebView *webView;

    void setupUi(QWidget *mailing_ui)
    {
        if (mailing_ui->objectName().isEmpty())
            mailing_ui->setObjectName(QString::fromUtf8("mailing_ui"));
        mailing_ui->resize(771, 451);
        mailing_ui->setMinimumSize(QSize(771, 451));
        gridLayout = new QGridLayout(mailing_ui);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        webView = new QWebView(mailing_ui);
        webView->setObjectName(QString::fromUtf8("webView"));
        webView->setUrl(QUrl(QString::fromUtf8("http://linceinternet.dyndns.org/server/vidal/phpgallery2/")));

        gridLayout->addWidget(webView, 0, 0, 1, 1);


        retranslateUi(mailing_ui);

        QMetaObject::connectSlotsByName(mailing_ui);
    } // setupUi

    void retranslateUi(QWidget *mailing_ui)
    {
        mailing_ui->setWindowTitle(QApplication::translate("mailing_ui", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class mailing_ui: public Ui_mailing_ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAILING_UI_H
