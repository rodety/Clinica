/********************************************************************************
** Form generated from reading UI file 'facebook_ui.ui'
**
** Created: Wed 27. May 12:29:14 2015
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACEBOOK_UI_H
#define UI_FACEBOOK_UI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>
#include <QtWebKit/QWebView>

QT_BEGIN_NAMESPACE

class Ui_facebook_ui
{
public:
    QGridLayout *gridLayout;
    QWebView *webView;

    void setupUi(QWidget *facebook_ui)
    {
        if (facebook_ui->objectName().isEmpty())
            facebook_ui->setObjectName(QString::fromUtf8("facebook_ui"));
        facebook_ui->resize(732, 489);
        gridLayout = new QGridLayout(facebook_ui);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        webView = new QWebView(facebook_ui);
        webView->setObjectName(QString::fromUtf8("webView"));
        webView->setUrl(QUrl("https://www.facebook.com/"));

        gridLayout->addWidget(webView, 0, 0, 1, 1);


        retranslateUi(facebook_ui);

        QMetaObject::connectSlotsByName(facebook_ui);
    } // setupUi

    void retranslateUi(QWidget *facebook_ui)
    {
        facebook_ui->setWindowTitle(QApplication::translate("facebook_ui", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class facebook_ui: public Ui_facebook_ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACEBOOK_UI_H
