/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed 27. May 12:29:14 2015
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAgenda;
    QAction *actionPaciente;
    QAction *actionHistoriaClinica;
    QAction *actionUsuarios;
    QAction *actionMailing;
    QAction *actionAlertas;
    QAction *actionFacebook;
    QAction *actionPersonal;
    QAction *actionTratamientos;
    QAction *actionCaja;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1024, 115);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(0, 0));
        MainWindow->setSizeIncrement(QSize(10, 12));
        MainWindow->setBaseSize(QSize(16, 20));
        QFont font;
        font.setPointSize(8);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        font.setStyleStrategy(QFont::PreferAntialias);
        MainWindow->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/1329798553_doctor.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setDockNestingEnabled(true);
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        actionAgenda = new QAction(MainWindow);
        actionAgenda->setObjectName(QString::fromUtf8("actionAgenda"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/1354339085_ebooks.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAgenda->setIcon(icon1);
        actionAgenda->setAutoRepeat(true);
        actionAgenda->setVisible(true);
        actionPaciente = new QAction(MainWindow);
        actionPaciente->setObjectName(QString::fromUtf8("actionPaciente"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/1354339048_people-b.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaciente->setIcon(icon2);
        actionPaciente->setMenuRole(QAction::TextHeuristicRole);
        actionHistoriaClinica = new QAction(MainWindow);
        actionHistoriaClinica->setObjectName(QString::fromUtf8("actionHistoriaClinica"));
        actionHistoriaClinica->setEnabled(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/1354339039_checklist_pencil-b.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHistoriaClinica->setIcon(icon3);
        actionUsuarios = new QAction(MainWindow);
        actionUsuarios->setObjectName(QString::fromUtf8("actionUsuarios"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/1354339027_people_stacked-b.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUsuarios->setIcon(icon4);
        actionMailing = new QAction(MainWindow);
        actionMailing->setObjectName(QString::fromUtf8("actionMailing"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/1354339053_globe-b.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMailing->setIcon(icon5);
        actionAlertas = new QAction(MainWindow);
        actionAlertas->setObjectName(QString::fromUtf8("actionAlertas"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/1354339097_localbusiness-y.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAlertas->setIcon(icon6);
        actionFacebook = new QAction(MainWindow);
        actionFacebook->setObjectName(QString::fromUtf8("actionFacebook"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/new/facebook (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFacebook->setIcon(icon7);
        actionPersonal = new QAction(MainWindow);
        actionPersonal->setObjectName(QString::fromUtf8("actionPersonal"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/new/1354339051_profiles-o.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPersonal->setIcon(icon8);
        actionTratamientos = new QAction(MainWindow);
        actionTratamientos->setObjectName(QString::fromUtf8("actionTratamientos"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/new/Stethoscope_Black.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTratamientos->setIcon(icon9);
        actionCaja = new QAction(MainWindow);
        actionCaja->setObjectName(QString::fromUtf8("actionCaja"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/new/moneda-verde-dinero-en-efectivo-en-dolares-icono-5593-128.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCaja->setIcon(icon10);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setMaximumSize(QSize(1022, 220));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1024, 20));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setAutoFillBackground(false);
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setEnabled(true);
        toolBar->setMouseTracking(true);
        toolBar->setAllowedAreas(Qt::AllToolBarAreas);
        toolBar->setIconSize(QSize(40, 40));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolBar->setFloatable(true);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionAgenda);
        toolBar->addSeparator();
        toolBar->addAction(actionPaciente);
        toolBar->addSeparator();
        toolBar->addAction(actionHistoriaClinica);
        toolBar->addSeparator();
        toolBar->addAction(actionUsuarios);
        toolBar->addSeparator();
        toolBar->addAction(actionAlertas);
        toolBar->addSeparator();
        toolBar->addAction(actionPersonal);
        toolBar->addSeparator();
        toolBar->addAction(actionCaja);
        toolBar->addSeparator();
        toolBar->addAction(actionMailing);
        toolBar->addSeparator();
        toolBar->addAction(actionFacebook);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "ClinicM", 0, QApplication::UnicodeUTF8));
        actionAgenda->setText(QApplication::translate("MainWindow", "Agenda", 0, QApplication::UnicodeUTF8));
        actionAgenda->setIconText(QApplication::translate("MainWindow", "&Agenda", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAgenda->setToolTip(QApplication::translate("MainWindow", "Agenda", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionAgenda->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", 0, QApplication::UnicodeUTF8));
        actionPaciente->setText(QApplication::translate("MainWindow", "Paciente", 0, QApplication::UnicodeUTF8));
        actionPaciente->setIconText(QApplication::translate("MainWindow", "&Paciente", 0, QApplication::UnicodeUTF8));
        actionPaciente->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", 0, QApplication::UnicodeUTF8));
        actionHistoriaClinica->setText(QApplication::translate("MainWindow", "Historia Cl\303\255nica", 0, QApplication::UnicodeUTF8));
        actionHistoriaClinica->setIconText(QApplication::translate("MainWindow", "&Historia Clinica", 0, QApplication::UnicodeUTF8));
        actionHistoriaClinica->setShortcut(QApplication::translate("MainWindow", "Ctrl+H", 0, QApplication::UnicodeUTF8));
        actionUsuarios->setText(QApplication::translate("MainWindow", "Usuarios", 0, QApplication::UnicodeUTF8));
        actionUsuarios->setIconText(QApplication::translate("MainWindow", "&Usuarios", 0, QApplication::UnicodeUTF8));
        actionUsuarios->setShortcut(QApplication::translate("MainWindow", "Ctrl+U", 0, QApplication::UnicodeUTF8));
        actionMailing->setText(QApplication::translate("MainWindow", "Mailing", 0, QApplication::UnicodeUTF8));
        actionMailing->setIconText(QApplication::translate("MainWindow", "P\303\241gina &Web", 0, QApplication::UnicodeUTF8));
        actionMailing->setShortcut(QApplication::translate("MainWindow", "Ctrl+M", 0, QApplication::UnicodeUTF8));
        actionAlertas->setText(QApplication::translate("MainWindow", "Alertas", 0, QApplication::UnicodeUTF8));
        actionAlertas->setIconText(QApplication::translate("MainWindow", "Al&ertas", 0, QApplication::UnicodeUTF8));
        actionAlertas->setShortcut(QApplication::translate("MainWindow", "Ctrl+E", 0, QApplication::UnicodeUTF8));
        actionFacebook->setText(QApplication::translate("MainWindow", "acebook", 0, QApplication::UnicodeUTF8));
        actionFacebook->setIconText(QApplication::translate("MainWindow", "&Facebook", 0, QApplication::UnicodeUTF8));
        actionFacebook->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", 0, QApplication::UnicodeUTF8));
        actionPersonal->setText(QApplication::translate("MainWindow", "Personal", 0, QApplication::UnicodeUTF8));
        actionPersonal->setIconText(QApplication::translate("MainWindow", "Per&sonal", 0, QApplication::UnicodeUTF8));
        actionPersonal->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        actionTratamientos->setText(QApplication::translate("MainWindow", "Tratamientos", 0, QApplication::UnicodeUTF8));
        actionTratamientos->setIconText(QApplication::translate("MainWindow", "&Tratamientos", 0, QApplication::UnicodeUTF8));
        actionTratamientos->setShortcut(QApplication::translate("MainWindow", "Ctrl+T", 0, QApplication::UnicodeUTF8));
        actionCaja->setText(QApplication::translate("MainWindow", "Caja", 0, QApplication::UnicodeUTF8));
        actionCaja->setShortcut(QApplication::translate("MainWindow", "Ctrl+D", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
