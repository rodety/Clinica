/********************************************************************************
** Form generated from reading UI file 'agenda_ui.ui'
**
** Created: Mon 1. Jun 16:24:59 2015
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGENDA_UI_H
#define UI_AGENDA_UI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCalendarWidget>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
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

class Ui_agenda_ui
{
public:
    QGridLayout *gridLayout_11;
    QGridLayout *gridLayout_10;
    QGridLayout *gridLayout_9;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_6;
    QTableWidget *tableWidget_Alert;
    QGridLayout *gridLayout_7;
    QPushButton *pushButton_show_SelectAlert_Personales_4;
    QLabel *label_3;
    QDateEdit *dateEdit_Alerta_Personales;
    QPushButton *pushButton_Alert_Personal_show;
    QPushButton *pushButton_Alert_Personal_changeColor;
    QTableWidget *tableWidget_Alert_Personales;
    QGridLayout *gridLayout_8;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Alert_Personales_edit;
    QPushButton *pushButton_Alert_Personales_add;
    QPushButton *pushButton_Alert_Personales_remove;
    QGridLayout *gridLayout;
    QPushButton *pushButton_show_SelectAlert;
    QLabel *label_2;
    QDateEdit *dateEdit_Alerta;
    QPushButton *pushButton_Alerta_General_show;
    QPushButton *pushButton_AlertaGeneral_changeColor;
    QCalendarWidget *calendarWidget;
    QFrame *line_3;
    QFrame *line_2;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_showTask;
    QPushButton *pushButton_showAll;
    QPushButton *pushButton_editTask;
    QPushButton *pushButton_deleteTask;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_newTask;
    QPushButton *pushButton_printList;
    QFrame *line;
    QGridLayout *gridLayout_2;
    QComboBox *comboBox_Names;
    QComboBox *comboBox_dni;
    QDateEdit *dateEdit_Agenda;
    QLineEdit *lineEdit_codigo;
    QPushButton *pushButton_show_Agenda;
    QPushButton *pushButton_agenda_changeColor;
    QPushButton *pushButton_update_Agenda;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_5;
    QGridLayout *gridLayout_4;
    QFrame *line_4;
    QTableWidget *tablaView_Agend;

    void setupUi(QWidget *agenda_ui)
    {
        if (agenda_ui->objectName().isEmpty())
            agenda_ui->setObjectName(QString::fromUtf8("agenda_ui"));
        agenda_ui->resize(1250, 650);
        agenda_ui->setSizeIncrement(QSize(19, 18));
        gridLayout_11 = new QGridLayout(agenda_ui);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        horizontalSpacer_2 = new QSpacerItem(351, 7, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        tableWidget_Alert = new QTableWidget(agenda_ui);
        if (tableWidget_Alert->columnCount() < 3)
            tableWidget_Alert->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_Alert->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        tableWidget_Alert->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_Alert->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget_Alert->setObjectName(QString::fromUtf8("tableWidget_Alert"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget_Alert->sizePolicy().hasHeightForWidth());
        tableWidget_Alert->setSizePolicy(sizePolicy);
        tableWidget_Alert->setMinimumSize(QSize(0, 0));
        tableWidget_Alert->setMaximumSize(QSize(351, 16777215));
        tableWidget_Alert->setWordWrap(true);

        gridLayout_6->addWidget(tableWidget_Alert, 1, 0, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        pushButton_show_SelectAlert_Personales_4 = new QPushButton(agenda_ui);
        pushButton_show_SelectAlert_Personales_4->setObjectName(QString::fromUtf8("pushButton_show_SelectAlert_Personales_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_show_SelectAlert_Personales_4->sizePolicy().hasHeightForWidth());
        pushButton_show_SelectAlert_Personales_4->setSizePolicy(sizePolicy1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/playback_reload.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_show_SelectAlert_Personales_4->setIcon(icon);
        pushButton_show_SelectAlert_Personales_4->setFlat(true);

        gridLayout_7->addWidget(pushButton_show_SelectAlert_Personales_4, 0, 0, 1, 1);

        label_3 = new QLabel(agenda_ui);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        gridLayout_7->addWidget(label_3, 0, 1, 1, 1);

        dateEdit_Alerta_Personales = new QDateEdit(agenda_ui);
        dateEdit_Alerta_Personales->setObjectName(QString::fromUtf8("dateEdit_Alerta_Personales"));
        sizePolicy1.setHeightForWidth(dateEdit_Alerta_Personales->sizePolicy().hasHeightForWidth());
        dateEdit_Alerta_Personales->setSizePolicy(sizePolicy1);
        dateEdit_Alerta_Personales->setCurrentSection(QDateTimeEdit::YearSection);
        dateEdit_Alerta_Personales->setCalendarPopup(true);

        gridLayout_7->addWidget(dateEdit_Alerta_Personales, 0, 2, 1, 1);

        pushButton_Alert_Personal_show = new QPushButton(agenda_ui);
        pushButton_Alert_Personal_show->setObjectName(QString::fromUtf8("pushButton_Alert_Personal_show"));
        sizePolicy1.setHeightForWidth(pushButton_Alert_Personal_show->sizePolicy().hasHeightForWidth());
        pushButton_Alert_Personal_show->setSizePolicy(sizePolicy1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/zoom.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Alert_Personal_show->setIcon(icon1);
        pushButton_Alert_Personal_show->setIconSize(QSize(16, 16));
        pushButton_Alert_Personal_show->setFlat(true);

        gridLayout_7->addWidget(pushButton_Alert_Personal_show, 0, 3, 1, 1);

        pushButton_Alert_Personal_changeColor = new QPushButton(agenda_ui);
        pushButton_Alert_Personal_changeColor->setObjectName(QString::fromUtf8("pushButton_Alert_Personal_changeColor"));
        sizePolicy1.setHeightForWidth(pushButton_Alert_Personal_changeColor->sizePolicy().hasHeightForWidth());
        pushButton_Alert_Personal_changeColor->setSizePolicy(sizePolicy1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/color_swatch.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Alert_Personal_changeColor->setIcon(icon2);
        pushButton_Alert_Personal_changeColor->setIconSize(QSize(16, 16));
        pushButton_Alert_Personal_changeColor->setFlat(true);

        gridLayout_7->addWidget(pushButton_Alert_Personal_changeColor, 0, 4, 1, 1);


        gridLayout_6->addLayout(gridLayout_7, 2, 0, 1, 1);

        tableWidget_Alert_Personales = new QTableWidget(agenda_ui);
        if (tableWidget_Alert_Personales->columnCount() < 3)
            tableWidget_Alert_Personales->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_Alert_Personales->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_Alert_Personales->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_Alert_Personales->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        tableWidget_Alert_Personales->setObjectName(QString::fromUtf8("tableWidget_Alert_Personales"));
        sizePolicy.setHeightForWidth(tableWidget_Alert_Personales->sizePolicy().hasHeightForWidth());
        tableWidget_Alert_Personales->setSizePolicy(sizePolicy);
        tableWidget_Alert_Personales->setMinimumSize(QSize(0, 0));
        tableWidget_Alert_Personales->setMaximumSize(QSize(351, 16777215));
        tableWidget_Alert_Personales->setWordWrap(true);

        gridLayout_6->addWidget(tableWidget_Alert_Personales, 3, 0, 1, 1);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        horizontalSpacer = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer, 0, 1, 1, 1);

        pushButton_Alert_Personales_edit = new QPushButton(agenda_ui);
        pushButton_Alert_Personales_edit->setObjectName(QString::fromUtf8("pushButton_Alert_Personales_edit"));
        sizePolicy1.setHeightForWidth(pushButton_Alert_Personales_edit->sizePolicy().hasHeightForWidth());
        pushButton_Alert_Personales_edit->setSizePolicy(sizePolicy1);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/doc_edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Alert_Personales_edit->setIcon(icon3);
        pushButton_Alert_Personales_edit->setIconSize(QSize(16, 16));
        pushButton_Alert_Personales_edit->setFlat(true);

        gridLayout_8->addWidget(pushButton_Alert_Personales_edit, 0, 3, 1, 1);

        pushButton_Alert_Personales_add = new QPushButton(agenda_ui);
        pushButton_Alert_Personales_add->setObjectName(QString::fromUtf8("pushButton_Alert_Personales_add"));
        sizePolicy1.setHeightForWidth(pushButton_Alert_Personales_add->sizePolicy().hasHeightForWidth());
        pushButton_Alert_Personales_add->setSizePolicy(sizePolicy1);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/round_plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Alert_Personales_add->setIcon(icon4);
        pushButton_Alert_Personales_add->setIconSize(QSize(16, 16));
        pushButton_Alert_Personales_add->setFlat(true);

        gridLayout_8->addWidget(pushButton_Alert_Personales_add, 0, 2, 1, 1);

        pushButton_Alert_Personales_remove = new QPushButton(agenda_ui);
        pushButton_Alert_Personales_remove->setObjectName(QString::fromUtf8("pushButton_Alert_Personales_remove"));
        sizePolicy1.setHeightForWidth(pushButton_Alert_Personales_remove->sizePolicy().hasHeightForWidth());
        pushButton_Alert_Personales_remove->setSizePolicy(sizePolicy1);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/trash.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Alert_Personales_remove->setIcon(icon5);
        pushButton_Alert_Personales_remove->setIconSize(QSize(16, 16));
        pushButton_Alert_Personales_remove->setFlat(true);

        gridLayout_8->addWidget(pushButton_Alert_Personales_remove, 0, 4, 1, 1);


        gridLayout_6->addLayout(gridLayout_8, 4, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_show_SelectAlert = new QPushButton(agenda_ui);
        pushButton_show_SelectAlert->setObjectName(QString::fromUtf8("pushButton_show_SelectAlert"));
        sizePolicy1.setHeightForWidth(pushButton_show_SelectAlert->sizePolicy().hasHeightForWidth());
        pushButton_show_SelectAlert->setSizePolicy(sizePolicy1);
        pushButton_show_SelectAlert->setCursor(QCursor(Qt::ArrowCursor));
        pushButton_show_SelectAlert->setIcon(icon);
        pushButton_show_SelectAlert->setFlat(true);

        gridLayout->addWidget(pushButton_show_SelectAlert, 2, 0, 1, 1);

        label_2 = new QLabel(agenda_ui);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_2, 2, 1, 1, 1);

        dateEdit_Alerta = new QDateEdit(agenda_ui);
        dateEdit_Alerta->setObjectName(QString::fromUtf8("dateEdit_Alerta"));
        sizePolicy1.setHeightForWidth(dateEdit_Alerta->sizePolicy().hasHeightForWidth());
        dateEdit_Alerta->setSizePolicy(sizePolicy1);
        dateEdit_Alerta->setCurrentSection(QDateTimeEdit::YearSection);
        dateEdit_Alerta->setCalendarPopup(true);

        gridLayout->addWidget(dateEdit_Alerta, 2, 2, 1, 1);

        pushButton_Alerta_General_show = new QPushButton(agenda_ui);
        pushButton_Alerta_General_show->setObjectName(QString::fromUtf8("pushButton_Alerta_General_show"));
        sizePolicy1.setHeightForWidth(pushButton_Alerta_General_show->sizePolicy().hasHeightForWidth());
        pushButton_Alerta_General_show->setSizePolicy(sizePolicy1);
        pushButton_Alerta_General_show->setIcon(icon1);
        pushButton_Alerta_General_show->setIconSize(QSize(16, 16));
        pushButton_Alerta_General_show->setFlat(true);

        gridLayout->addWidget(pushButton_Alerta_General_show, 2, 3, 1, 1);

        pushButton_AlertaGeneral_changeColor = new QPushButton(agenda_ui);
        pushButton_AlertaGeneral_changeColor->setObjectName(QString::fromUtf8("pushButton_AlertaGeneral_changeColor"));
        pushButton_AlertaGeneral_changeColor->setEnabled(true);
        sizePolicy1.setHeightForWidth(pushButton_AlertaGeneral_changeColor->sizePolicy().hasHeightForWidth());
        pushButton_AlertaGeneral_changeColor->setSizePolicy(sizePolicy1);
        pushButton_AlertaGeneral_changeColor->setIcon(icon2);
        pushButton_AlertaGeneral_changeColor->setIconSize(QSize(16, 16));
        pushButton_AlertaGeneral_changeColor->setAutoDefault(false);
        pushButton_AlertaGeneral_changeColor->setDefault(false);
        pushButton_AlertaGeneral_changeColor->setFlat(true);

        gridLayout->addWidget(pushButton_AlertaGeneral_changeColor, 2, 4, 1, 1);

        calendarWidget = new QCalendarWidget(agenda_ui);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));

        gridLayout->addWidget(calendarWidget, 0, 0, 1, 5);

        line_3 = new QFrame(agenda_ui);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 1, 0, 1, 5);


        gridLayout_6->addLayout(gridLayout, 0, 0, 1, 1);


        gridLayout_9->addLayout(gridLayout_6, 1, 0, 1, 1);


        gridLayout_10->addLayout(gridLayout_9, 0, 0, 1, 1);

        line_2 = new QFrame(agenda_ui);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(line_2->sizePolicy().hasHeightForWidth());
        line_2->setSizePolicy(sizePolicy2);
        line_2->setFrameShadow(QFrame::Sunken);
        line_2->setLineWidth(1);
        line_2->setFrameShape(QFrame::VLine);

        gridLayout_10->addWidget(line_2, 0, 1, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        pushButton_showTask = new QPushButton(agenda_ui);
        pushButton_showTask->setObjectName(QString::fromUtf8("pushButton_showTask"));
        sizePolicy1.setHeightForWidth(pushButton_showTask->sizePolicy().hasHeightForWidth());
        pushButton_showTask->setSizePolicy(sizePolicy1);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/file_search.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_showTask->setIcon(icon6);
        pushButton_showTask->setIconSize(QSize(20, 20));
        pushButton_showTask->setCheckable(false);
        pushButton_showTask->setAutoRepeat(true);
        pushButton_showTask->setAutoDefault(false);
        pushButton_showTask->setDefault(false);
        pushButton_showTask->setFlat(false);

        gridLayout_3->addWidget(pushButton_showTask, 0, 0, 1, 1);

        pushButton_showAll = new QPushButton(agenda_ui);
        pushButton_showAll->setObjectName(QString::fromUtf8("pushButton_showAll"));
        sizePolicy1.setHeightForWidth(pushButton_showAll->sizePolicy().hasHeightForWidth());
        pushButton_showAll->setSizePolicy(sizePolicy1);
#ifndef QT_NO_ACCESSIBILITY
        pushButton_showAll->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pushButton_showAll->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/new/old-edit-find.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_showAll->setIcon(icon7);
        pushButton_showAll->setIconSize(QSize(20, 20));
        pushButton_showAll->setShortcut(QString::fromUtf8("Alt+O"));
        pushButton_showAll->setCheckable(false);
        pushButton_showAll->setChecked(false);
        pushButton_showAll->setAutoRepeat(false);
        pushButton_showAll->setAutoExclusive(false);
        pushButton_showAll->setAutoDefault(false);
        pushButton_showAll->setDefault(false);
        pushButton_showAll->setFlat(false);

        gridLayout_3->addWidget(pushButton_showAll, 0, 1, 1, 1);

        pushButton_editTask = new QPushButton(agenda_ui);
        pushButton_editTask->setObjectName(QString::fromUtf8("pushButton_editTask"));
        sizePolicy1.setHeightForWidth(pushButton_editTask->sizePolicy().hasHeightForWidth());
        pushButton_editTask->setSizePolicy(sizePolicy1);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/new/application.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_editTask->setIcon(icon8);
        pushButton_editTask->setIconSize(QSize(20, 20));
        pushButton_editTask->setAutoExclusive(true);

        gridLayout_3->addWidget(pushButton_editTask, 0, 2, 1, 1);

        pushButton_deleteTask = new QPushButton(agenda_ui);
        pushButton_deleteTask->setObjectName(QString::fromUtf8("pushButton_deleteTask"));
        sizePolicy1.setHeightForWidth(pushButton_deleteTask->sizePolicy().hasHeightForWidth());
        pushButton_deleteTask->setSizePolicy(sizePolicy1);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/new/file_delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_deleteTask->setIcon(icon9);
        pushButton_deleteTask->setIconSize(QSize(20, 20));

        gridLayout_3->addWidget(pushButton_deleteTask, 0, 4, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(1500, 37, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 0, 6, 1, 1);

        pushButton_newTask = new QPushButton(agenda_ui);
        pushButton_newTask->setObjectName(QString::fromUtf8("pushButton_newTask"));
        sizePolicy1.setHeightForWidth(pushButton_newTask->sizePolicy().hasHeightForWidth());
        pushButton_newTask->setSizePolicy(sizePolicy1);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/new/file_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_newTask->setIcon(icon10);
        pushButton_newTask->setIconSize(QSize(20, 20));

        gridLayout_3->addWidget(pushButton_newTask, 0, 7, 1, 1);

        pushButton_printList = new QPushButton(agenda_ui);
        pushButton_printList->setObjectName(QString::fromUtf8("pushButton_printList"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/new/printer.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_printList->setIcon(icon11);

        gridLayout_3->addWidget(pushButton_printList, 0, 5, 1, 1);


        gridLayout_5->addLayout(gridLayout_3, 0, 0, 1, 1);

        line = new QFrame(agenda_ui);
        line->setObjectName(QString::fromUtf8("line"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy3);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line, 1, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        comboBox_Names = new QComboBox(agenda_ui);
        comboBox_Names->setObjectName(QString::fromUtf8("comboBox_Names"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(comboBox_Names->sizePolicy().hasHeightForWidth());
        comboBox_Names->setSizePolicy(sizePolicy4);
        comboBox_Names->setMinimumSize(QSize(250, 0));
        comboBox_Names->setMaximumSize(QSize(350, 16777215));
        QFont font;
        font.setPointSize(12);
        comboBox_Names->setFont(font);

        gridLayout_2->addWidget(comboBox_Names, 0, 1, 1, 1);

        comboBox_dni = new QComboBox(agenda_ui);
        comboBox_dni->setObjectName(QString::fromUtf8("comboBox_dni"));
        sizePolicy1.setHeightForWidth(comboBox_dni->sizePolicy().hasHeightForWidth());
        comboBox_dni->setSizePolicy(sizePolicy1);
        comboBox_dni->setMinimumSize(QSize(10, 0));
        comboBox_dni->setMaximumSize(QSize(10, 16777215));

        gridLayout_2->addWidget(comboBox_dni, 0, 2, 1, 1);

        dateEdit_Agenda = new QDateEdit(agenda_ui);
        dateEdit_Agenda->setObjectName(QString::fromUtf8("dateEdit_Agenda"));
        QFont font1;
        font1.setPointSize(14);
        dateEdit_Agenda->setFont(font1);
        dateEdit_Agenda->setCurrentSection(QDateTimeEdit::YearSection);
        dateEdit_Agenda->setCalendarPopup(true);

        gridLayout_2->addWidget(dateEdit_Agenda, 0, 3, 1, 1);

        lineEdit_codigo = new QLineEdit(agenda_ui);
        lineEdit_codigo->setObjectName(QString::fromUtf8("lineEdit_codigo"));
        lineEdit_codigo->setEnabled(false);
        sizePolicy1.setHeightForWidth(lineEdit_codigo->sizePolicy().hasHeightForWidth());
        lineEdit_codigo->setSizePolicy(sizePolicy1);
        lineEdit_codigo->setMaximumSize(QSize(10, 16777215));

        gridLayout_2->addWidget(lineEdit_codigo, 0, 4, 1, 1);

        pushButton_show_Agenda = new QPushButton(agenda_ui);
        pushButton_show_Agenda->setObjectName(QString::fromUtf8("pushButton_show_Agenda"));
        pushButton_show_Agenda->setIcon(icon1);
        pushButton_show_Agenda->setIconSize(QSize(20, 20));
        pushButton_show_Agenda->setFlat(true);

        gridLayout_2->addWidget(pushButton_show_Agenda, 0, 6, 1, 1);

        pushButton_agenda_changeColor = new QPushButton(agenda_ui);
        pushButton_agenda_changeColor->setObjectName(QString::fromUtf8("pushButton_agenda_changeColor"));
        pushButton_agenda_changeColor->setEnabled(true);
        sizePolicy1.setHeightForWidth(pushButton_agenda_changeColor->sizePolicy().hasHeightForWidth());
        pushButton_agenda_changeColor->setSizePolicy(sizePolicy1);
        pushButton_agenda_changeColor->setIcon(icon2);
        pushButton_agenda_changeColor->setIconSize(QSize(20, 20));
        pushButton_agenda_changeColor->setAutoDefault(false);
        pushButton_agenda_changeColor->setDefault(false);
        pushButton_agenda_changeColor->setFlat(true);

        gridLayout_2->addWidget(pushButton_agenda_changeColor, 0, 7, 1, 1);

        pushButton_update_Agenda = new QPushButton(agenda_ui);
        pushButton_update_Agenda->setObjectName(QString::fromUtf8("pushButton_update_Agenda"));
        sizePolicy1.setHeightForWidth(pushButton_update_Agenda->sizePolicy().hasHeightForWidth());
        pushButton_update_Agenda->setSizePolicy(sizePolicy1);
        pushButton_update_Agenda->setAutoFillBackground(false);
        pushButton_update_Agenda->setIcon(icon);
        pushButton_update_Agenda->setIconSize(QSize(16, 16));
        pushButton_update_Agenda->setCheckable(false);
        pushButton_update_Agenda->setAutoRepeat(false);
        pushButton_update_Agenda->setAutoExclusive(false);
        pushButton_update_Agenda->setAutoDefault(false);
        pushButton_update_Agenda->setDefault(false);
        pushButton_update_Agenda->setFlat(true);

        gridLayout_2->addWidget(pushButton_update_Agenda, 0, 8, 1, 1);

        label_4 = new QLabel(agenda_ui);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(48, 37, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 0, 5, 1, 1);


        gridLayout_5->addLayout(gridLayout_2, 2, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        line_4 = new QFrame(agenda_ui);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        sizePolicy4.setHeightForWidth(line_4->sizePolicy().hasHeightForWidth());
        line_4->setSizePolicy(sizePolicy4);
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line_4, 0, 0, 1, 1);

        tablaView_Agend = new QTableWidget(agenda_ui);
        if (tablaView_Agend->columnCount() < 7)
            tablaView_Agend->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tablaView_Agend->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tablaView_Agend->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tablaView_Agend->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tablaView_Agend->setHorizontalHeaderItem(3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tablaView_Agend->setHorizontalHeaderItem(4, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tablaView_Agend->setHorizontalHeaderItem(5, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tablaView_Agend->setHorizontalHeaderItem(6, __qtablewidgetitem12);
        tablaView_Agend->setObjectName(QString::fromUtf8("tablaView_Agend"));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        tablaView_Agend->setFont(font2);
        tablaView_Agend->setFrameShape(QFrame::StyledPanel);
        tablaView_Agend->setFrameShadow(QFrame::Plain);
        tablaView_Agend->setMidLineWidth(1);
        tablaView_Agend->setSortingEnabled(true);

        gridLayout_4->addWidget(tablaView_Agend, 1, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 3, 0, 1, 1);


        gridLayout_10->addLayout(gridLayout_5, 0, 2, 1, 1);


        gridLayout_11->addLayout(gridLayout_10, 0, 0, 1, 1);

        QWidget::setTabOrder(pushButton_show_SelectAlert, dateEdit_Alerta);
        QWidget::setTabOrder(dateEdit_Alerta, pushButton_Alerta_General_show);
        QWidget::setTabOrder(pushButton_Alerta_General_show, pushButton_AlertaGeneral_changeColor);
        QWidget::setTabOrder(pushButton_AlertaGeneral_changeColor, tableWidget_Alert);
        QWidget::setTabOrder(tableWidget_Alert, pushButton_show_SelectAlert_Personales_4);
        QWidget::setTabOrder(pushButton_show_SelectAlert_Personales_4, dateEdit_Alerta_Personales);
        QWidget::setTabOrder(dateEdit_Alerta_Personales, pushButton_Alert_Personal_show);
        QWidget::setTabOrder(pushButton_Alert_Personal_show, pushButton_Alert_Personal_changeColor);
        QWidget::setTabOrder(pushButton_Alert_Personal_changeColor, tableWidget_Alert_Personales);
        QWidget::setTabOrder(tableWidget_Alert_Personales, pushButton_Alert_Personales_edit);
        QWidget::setTabOrder(pushButton_Alert_Personales_edit, pushButton_showTask);
        QWidget::setTabOrder(pushButton_showTask, pushButton_showAll);
        QWidget::setTabOrder(pushButton_showAll, pushButton_editTask);
        QWidget::setTabOrder(pushButton_editTask, pushButton_newTask);
        QWidget::setTabOrder(pushButton_newTask, comboBox_Names);
        QWidget::setTabOrder(comboBox_Names, comboBox_dni);
        QWidget::setTabOrder(comboBox_dni, lineEdit_codigo);
        QWidget::setTabOrder(lineEdit_codigo, pushButton_update_Agenda);
        QWidget::setTabOrder(pushButton_update_Agenda, dateEdit_Agenda);
        QWidget::setTabOrder(dateEdit_Agenda, pushButton_show_Agenda);
        QWidget::setTabOrder(pushButton_show_Agenda, pushButton_agenda_changeColor);
        QWidget::setTabOrder(pushButton_agenda_changeColor, tablaView_Agend);

        retranslateUi(agenda_ui);

        QMetaObject::connectSlotsByName(agenda_ui);
    } // setupUi

    void retranslateUi(QWidget *agenda_ui)
    {
        agenda_ui->setWindowTitle(QApplication::translate("agenda_ui", "Form", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_Alert->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("agenda_ui", "Hora", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_Alert->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("agenda_ui", "Descripcion", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_Alert->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("agenda_ui", "Codigo", 0, QApplication::UnicodeUTF8));
        pushButton_show_SelectAlert_Personales_4->setText(QString());
        label_3->setText(QApplication::translate("agenda_ui", "Alertas Personales ", 0, QApplication::UnicodeUTF8));
        dateEdit_Alerta_Personales->setDisplayFormat(QApplication::translate("agenda_ui", "yyyy/MM/dd", 0, QApplication::UnicodeUTF8));
        pushButton_Alert_Personal_show->setText(QString());
        pushButton_Alert_Personal_changeColor->setText(QString());
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_Alert_Personales->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("agenda_ui", "Hora", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_Alert_Personales->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("agenda_ui", "Descripcion", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_Alert_Personales->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("agenda_ui", "Codigo", 0, QApplication::UnicodeUTF8));
        pushButton_Alert_Personales_edit->setText(QApplication::translate("agenda_ui", "Editar", 0, QApplication::UnicodeUTF8));
        pushButton_Alert_Personales_add->setText(QApplication::translate("agenda_ui", "Nueva", 0, QApplication::UnicodeUTF8));
        pushButton_Alert_Personales_remove->setText(QApplication::translate("agenda_ui", "Borrar", 0, QApplication::UnicodeUTF8));
        pushButton_show_SelectAlert->setText(QString());
        label_2->setText(QApplication::translate("agenda_ui", "Alertas Generales ", 0, QApplication::UnicodeUTF8));
        dateEdit_Alerta->setDisplayFormat(QApplication::translate("agenda_ui", "yyyy/MM/dd", 0, QApplication::UnicodeUTF8));
        pushButton_Alerta_General_show->setText(QString());
        pushButton_AlertaGeneral_changeColor->setText(QString());
        pushButton_showTask->setText(QApplication::translate("agenda_ui", "&Ver Tarea", 0, QApplication::UnicodeUTF8));
        pushButton_showTask->setShortcut(QApplication::translate("agenda_ui", "Alt+V", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        pushButton_showAll->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        pushButton_showAll->setText(QApplication::translate("agenda_ui", "Ver T&odas", 0, QApplication::UnicodeUTF8));
        pushButton_editTask->setText(QApplication::translate("agenda_ui", "E&ditar Tarea", 0, QApplication::UnicodeUTF8));
        pushButton_editTask->setShortcut(QApplication::translate("agenda_ui", "Alt+D", 0, QApplication::UnicodeUTF8));
        pushButton_deleteTask->setText(QApplication::translate("agenda_ui", "El&iminar Tarea", 0, QApplication::UnicodeUTF8));
        pushButton_deleteTask->setShortcut(QApplication::translate("agenda_ui", "Alt+I", 0, QApplication::UnicodeUTF8));
        pushButton_newTask->setText(QApplication::translate("agenda_ui", "&Nueva Tarea", 0, QApplication::UnicodeUTF8));
        pushButton_newTask->setShortcut(QApplication::translate("agenda_ui", "Alt+N", 0, QApplication::UnicodeUTF8));
        pushButton_printList->setText(QApplication::translate("agenda_ui", "Imprimir", 0, QApplication::UnicodeUTF8));
        dateEdit_Agenda->setDisplayFormat(QApplication::translate("agenda_ui", "yyyy/MM/dd", 0, QApplication::UnicodeUTF8));
        pushButton_show_Agenda->setText(QApplication::translate("agenda_ui", "&Buscar", 0, QApplication::UnicodeUTF8));
        pushButton_show_Agenda->setShortcut(QApplication::translate("agenda_ui", "Alt+B", 0, QApplication::UnicodeUTF8));
        pushButton_agenda_changeColor->setText(QApplication::translate("agenda_ui", "Color", 0, QApplication::UnicodeUTF8));
        pushButton_update_Agenda->setText(QApplication::translate("agenda_ui", "A&ctualizar", 0, QApplication::UnicodeUTF8));
        pushButton_update_Agenda->setShortcut(QApplication::translate("agenda_ui", "Alt+C", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("agenda_ui", "Nombre :", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tablaView_Agend->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("agenda_ui", "Fecha", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = tablaView_Agend->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("agenda_ui", "Hora", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = tablaView_Agend->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QApplication::translate("agenda_ui", "Nombre", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = tablaView_Agend->horizontalHeaderItem(3);
        ___qtablewidgetitem9->setText(QApplication::translate("agenda_ui", "Descripci\303\263n", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = tablaView_Agend->horizontalHeaderItem(4);
        ___qtablewidgetitem10->setText(QApplication::translate("agenda_ui", "Ficha", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem11 = tablaView_Agend->horizontalHeaderItem(5);
        ___qtablewidgetitem11->setText(QApplication::translate("agenda_ui", "C\303\263digo", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem12 = tablaView_Agend->horizontalHeaderItem(6);
        ___qtablewidgetitem12->setText(QApplication::translate("agenda_ui", "Tel\303\251fono", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class agenda_ui: public Ui_agenda_ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGENDA_UI_H
