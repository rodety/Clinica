/********************************************************************************
** Form generated from reading UI file 'agenda_ui.ui'
**
** Created: Mon 12. Nov 12:09:40 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGENDA_UI_H
#define UI_AGENDA_UI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
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
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QDateEdit *dateEdit_Alerta;
    QFrame *line_3;
    QDateEdit *dateEdit_Alerta_Personales;
    QTableWidget *tableWidget_Alert_Personales;
    QPushButton *pushButton_Alert_Personales_remove;
    QPushButton *pushButton_Alert_Personales_add;
    QPushButton *pushButton_Alert_Personales_edit;
    QPushButton *pushButton_show_SelectAlert;
    QLabel *label_2;
    QPushButton *pushButton_show_SelectAlert_Personales_4;
    QLabel *label_3;
    QPushButton *pushButton_AlertaGeneral_changeColor;
    QPushButton *pushButton_Alerta_General_show;
    QPushButton *pushButton_Alert_Personal_changeColor;
    QPushButton *pushButton_Alert_Personal_show;
    QTableWidget *tableWidget_Alert;
    QFrame *line_2;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_showTask;
    QPushButton *pushButton_showAll;
    QPushButton *pushButton_editTask;
    QPushButton *pushButton_deleteTask;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_newTask;
    QFrame *line;
    QGridLayout *gridLayout_6;
    QLabel *label_4;
    QComboBox *comboBox_Names;
    QComboBox *comboBox_dni;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *lineEdit_codigo;
    QGridLayout *gridLayout_5;
    QLabel *label_5;
    QDateEdit *dateEdit_Agenda;
    QSpacerItem *horizontalSpacer_5;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_show_Agenda;
    QPushButton *pushButton_agenda_changeColor;
    QPushButton *pushButton_update_Agenda;
    QGridLayout *gridLayout_4;
    QFrame *line_4;
    QTableWidget *tablaView_Agend;

    void setupUi(QWidget *agenda_ui)
    {
        if (agenda_ui->objectName().isEmpty())
            agenda_ui->setObjectName(QString::fromUtf8("agenda_ui"));
        agenda_ui->resize(1250, 650);
        agenda_ui->setSizeIncrement(QSize(19, 18));
        gridLayout_7 = new QGridLayout(agenda_ui);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_2 = new QSpacerItem(351, 13, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 0, 1, 9);

        dateEdit_Alerta = new QDateEdit(agenda_ui);
        dateEdit_Alerta->setObjectName(QString::fromUtf8("dateEdit_Alerta"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dateEdit_Alerta->sizePolicy().hasHeightForWidth());
        dateEdit_Alerta->setSizePolicy(sizePolicy);
        dateEdit_Alerta->setCurrentSection(QDateTimeEdit::YearSection);
        dateEdit_Alerta->setCalendarPopup(true);

        gridLayout->addWidget(dateEdit_Alerta, 1, 5, 1, 1);

        line_3 = new QFrame(agenda_ui);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 3, 0, 1, 9);

        dateEdit_Alerta_Personales = new QDateEdit(agenda_ui);
        dateEdit_Alerta_Personales->setObjectName(QString::fromUtf8("dateEdit_Alerta_Personales"));
        sizePolicy.setHeightForWidth(dateEdit_Alerta_Personales->sizePolicy().hasHeightForWidth());
        dateEdit_Alerta_Personales->setSizePolicy(sizePolicy);
        dateEdit_Alerta_Personales->setCurrentSection(QDateTimeEdit::YearSection);
        dateEdit_Alerta_Personales->setCalendarPopup(true);

        gridLayout->addWidget(dateEdit_Alerta_Personales, 4, 5, 1, 1);

        tableWidget_Alert_Personales = new QTableWidget(agenda_ui);
        if (tableWidget_Alert_Personales->columnCount() < 3)
            tableWidget_Alert_Personales->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_Alert_Personales->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_Alert_Personales->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_Alert_Personales->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget_Alert_Personales->setObjectName(QString::fromUtf8("tableWidget_Alert_Personales"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tableWidget_Alert_Personales->sizePolicy().hasHeightForWidth());
        tableWidget_Alert_Personales->setSizePolicy(sizePolicy1);
        tableWidget_Alert_Personales->setWordWrap(true);

        gridLayout->addWidget(tableWidget_Alert_Personales, 5, 0, 1, 9);

        pushButton_Alert_Personales_remove = new QPushButton(agenda_ui);
        pushButton_Alert_Personales_remove->setObjectName(QString::fromUtf8("pushButton_Alert_Personales_remove"));
        sizePolicy.setHeightForWidth(pushButton_Alert_Personales_remove->sizePolicy().hasHeightForWidth());
        pushButton_Alert_Personales_remove->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/trash.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Alert_Personales_remove->setIcon(icon);
        pushButton_Alert_Personales_remove->setIconSize(QSize(20, 20));
        pushButton_Alert_Personales_remove->setFlat(true);

        gridLayout->addWidget(pushButton_Alert_Personales_remove, 6, 0, 1, 1);

        pushButton_Alert_Personales_add = new QPushButton(agenda_ui);
        pushButton_Alert_Personales_add->setObjectName(QString::fromUtf8("pushButton_Alert_Personales_add"));
        sizePolicy.setHeightForWidth(pushButton_Alert_Personales_add->sizePolicy().hasHeightForWidth());
        pushButton_Alert_Personales_add->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/round_plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Alert_Personales_add->setIcon(icon1);
        pushButton_Alert_Personales_add->setIconSize(QSize(20, 20));
        pushButton_Alert_Personales_add->setFlat(true);

        gridLayout->addWidget(pushButton_Alert_Personales_add, 6, 8, 1, 1);

        pushButton_Alert_Personales_edit = new QPushButton(agenda_ui);
        pushButton_Alert_Personales_edit->setObjectName(QString::fromUtf8("pushButton_Alert_Personales_edit"));
        sizePolicy.setHeightForWidth(pushButton_Alert_Personales_edit->sizePolicy().hasHeightForWidth());
        pushButton_Alert_Personales_edit->setSizePolicy(sizePolicy);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/doc_edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Alert_Personales_edit->setIcon(icon2);
        pushButton_Alert_Personales_edit->setIconSize(QSize(20, 20));
        pushButton_Alert_Personales_edit->setFlat(true);

        gridLayout->addWidget(pushButton_Alert_Personales_edit, 6, 7, 1, 1);

        pushButton_show_SelectAlert = new QPushButton(agenda_ui);
        pushButton_show_SelectAlert->setObjectName(QString::fromUtf8("pushButton_show_SelectAlert"));
        sizePolicy.setHeightForWidth(pushButton_show_SelectAlert->sizePolicy().hasHeightForWidth());
        pushButton_show_SelectAlert->setSizePolicy(sizePolicy);
        pushButton_show_SelectAlert->setCursor(QCursor(Qt::ArrowCursor));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/playback_reload.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_show_SelectAlert->setIcon(icon3);
        pushButton_show_SelectAlert->setFlat(true);

        gridLayout->addWidget(pushButton_show_SelectAlert, 1, 0, 1, 1);

        label_2 = new QLabel(agenda_ui);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        pushButton_show_SelectAlert_Personales_4 = new QPushButton(agenda_ui);
        pushButton_show_SelectAlert_Personales_4->setObjectName(QString::fromUtf8("pushButton_show_SelectAlert_Personales_4"));
        sizePolicy.setHeightForWidth(pushButton_show_SelectAlert_Personales_4->sizePolicy().hasHeightForWidth());
        pushButton_show_SelectAlert_Personales_4->setSizePolicy(sizePolicy);
        pushButton_show_SelectAlert_Personales_4->setIcon(icon3);
        pushButton_show_SelectAlert_Personales_4->setFlat(true);

        gridLayout->addWidget(pushButton_show_SelectAlert_Personales_4, 4, 0, 1, 1);

        label_3 = new QLabel(agenda_ui);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_3, 4, 1, 1, 1);

        pushButton_AlertaGeneral_changeColor = new QPushButton(agenda_ui);
        pushButton_AlertaGeneral_changeColor->setObjectName(QString::fromUtf8("pushButton_AlertaGeneral_changeColor"));
        pushButton_AlertaGeneral_changeColor->setEnabled(true);
        sizePolicy.setHeightForWidth(pushButton_AlertaGeneral_changeColor->sizePolicy().hasHeightForWidth());
        pushButton_AlertaGeneral_changeColor->setSizePolicy(sizePolicy);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/color_swatch.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_AlertaGeneral_changeColor->setIcon(icon4);
        pushButton_AlertaGeneral_changeColor->setIconSize(QSize(20, 20));
        pushButton_AlertaGeneral_changeColor->setAutoDefault(false);
        pushButton_AlertaGeneral_changeColor->setDefault(false);
        pushButton_AlertaGeneral_changeColor->setFlat(true);

        gridLayout->addWidget(pushButton_AlertaGeneral_changeColor, 1, 8, 1, 1);

        pushButton_Alerta_General_show = new QPushButton(agenda_ui);
        pushButton_Alerta_General_show->setObjectName(QString::fromUtf8("pushButton_Alerta_General_show"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/zoom.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Alerta_General_show->setIcon(icon5);
        pushButton_Alerta_General_show->setIconSize(QSize(20, 20));
        pushButton_Alerta_General_show->setFlat(true);

        gridLayout->addWidget(pushButton_Alerta_General_show, 1, 7, 1, 1);

        pushButton_Alert_Personal_changeColor = new QPushButton(agenda_ui);
        pushButton_Alert_Personal_changeColor->setObjectName(QString::fromUtf8("pushButton_Alert_Personal_changeColor"));
        sizePolicy.setHeightForWidth(pushButton_Alert_Personal_changeColor->sizePolicy().hasHeightForWidth());
        pushButton_Alert_Personal_changeColor->setSizePolicy(sizePolicy);
        pushButton_Alert_Personal_changeColor->setIcon(icon4);
        pushButton_Alert_Personal_changeColor->setIconSize(QSize(20, 20));
        pushButton_Alert_Personal_changeColor->setFlat(true);

        gridLayout->addWidget(pushButton_Alert_Personal_changeColor, 4, 8, 1, 1);

        pushButton_Alert_Personal_show = new QPushButton(agenda_ui);
        pushButton_Alert_Personal_show->setObjectName(QString::fromUtf8("pushButton_Alert_Personal_show"));
        pushButton_Alert_Personal_show->setIcon(icon5);
        pushButton_Alert_Personal_show->setIconSize(QSize(20, 20));
        pushButton_Alert_Personal_show->setFlat(true);

        gridLayout->addWidget(pushButton_Alert_Personal_show, 4, 7, 1, 1);

        tableWidget_Alert = new QTableWidget(agenda_ui);
        if (tableWidget_Alert->columnCount() < 3)
            tableWidget_Alert->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_Alert->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_Alert->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_Alert->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        tableWidget_Alert->setObjectName(QString::fromUtf8("tableWidget_Alert"));
        sizePolicy1.setHeightForWidth(tableWidget_Alert->sizePolicy().hasHeightForWidth());
        tableWidget_Alert->setSizePolicy(sizePolicy1);
        tableWidget_Alert->setWordWrap(true);

        gridLayout->addWidget(tableWidget_Alert, 2, 0, 1, 9);


        gridLayout_7->addLayout(gridLayout, 0, 0, 5, 1);

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

        gridLayout_7->addWidget(line_2, 0, 1, 5, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        pushButton_showTask = new QPushButton(agenda_ui);
        pushButton_showTask->setObjectName(QString::fromUtf8("pushButton_showTask"));
        sizePolicy.setHeightForWidth(pushButton_showTask->sizePolicy().hasHeightForWidth());
        pushButton_showTask->setSizePolicy(sizePolicy);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/file_search.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_showTask->setIcon(icon6);
        pushButton_showTask->setIconSize(QSize(32, 32));
        pushButton_showTask->setCheckable(false);
        pushButton_showTask->setAutoRepeat(true);
        pushButton_showTask->setAutoDefault(false);
        pushButton_showTask->setDefault(false);
        pushButton_showTask->setFlat(false);

        gridLayout_3->addWidget(pushButton_showTask, 0, 0, 1, 1);

        pushButton_showAll = new QPushButton(agenda_ui);
        pushButton_showAll->setObjectName(QString::fromUtf8("pushButton_showAll"));
        sizePolicy.setHeightForWidth(pushButton_showAll->sizePolicy().hasHeightForWidth());
        pushButton_showAll->setSizePolicy(sizePolicy);
#ifndef QT_NO_ACCESSIBILITY
        pushButton_showAll->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pushButton_showAll->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/new/old-edit-find.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_showAll->setIcon(icon7);
        pushButton_showAll->setIconSize(QSize(32, 32));
        pushButton_showAll->setShortcut(QString::fromUtf8("Ctrl+O"));
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
        sizePolicy.setHeightForWidth(pushButton_editTask->sizePolicy().hasHeightForWidth());
        pushButton_editTask->setSizePolicy(sizePolicy);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/new/application.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_editTask->setIcon(icon8);
        pushButton_editTask->setIconSize(QSize(32, 32));
        pushButton_editTask->setAutoExclusive(true);

        gridLayout_3->addWidget(pushButton_editTask, 0, 2, 1, 1);

        pushButton_deleteTask = new QPushButton(agenda_ui);
        pushButton_deleteTask->setObjectName(QString::fromUtf8("pushButton_deleteTask"));
        sizePolicy.setHeightForWidth(pushButton_deleteTask->sizePolicy().hasHeightForWidth());
        pushButton_deleteTask->setSizePolicy(sizePolicy);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/new/file_delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_deleteTask->setIcon(icon9);
        pushButton_deleteTask->setIconSize(QSize(32, 32));

        gridLayout_3->addWidget(pushButton_deleteTask, 0, 3, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(318, 37, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 0, 4, 1, 1);

        pushButton_newTask = new QPushButton(agenda_ui);
        pushButton_newTask->setObjectName(QString::fromUtf8("pushButton_newTask"));
        sizePolicy.setHeightForWidth(pushButton_newTask->sizePolicy().hasHeightForWidth());
        pushButton_newTask->setSizePolicy(sizePolicy);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/new/file_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_newTask->setIcon(icon10);
        pushButton_newTask->setIconSize(QSize(32, 32));

        gridLayout_3->addWidget(pushButton_newTask, 0, 5, 1, 1);


        gridLayout_7->addLayout(gridLayout_3, 0, 2, 1, 1);

        line = new QFrame(agenda_ui);
        line->setObjectName(QString::fromUtf8("line"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy3);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_7->addWidget(line, 1, 2, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_4 = new QLabel(agenda_ui);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        gridLayout_6->addWidget(label_4, 0, 0, 1, 1);

        comboBox_Names = new QComboBox(agenda_ui);
        comboBox_Names->setObjectName(QString::fromUtf8("comboBox_Names"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(comboBox_Names->sizePolicy().hasHeightForWidth());
        comboBox_Names->setSizePolicy(sizePolicy4);

        gridLayout_6->addWidget(comboBox_Names, 0, 1, 1, 1);

        comboBox_dni = new QComboBox(agenda_ui);
        comboBox_dni->setObjectName(QString::fromUtf8("comboBox_dni"));
        sizePolicy.setHeightForWidth(comboBox_dni->sizePolicy().hasHeightForWidth());
        comboBox_dni->setSizePolicy(sizePolicy);

        gridLayout_6->addWidget(comboBox_dni, 0, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(198, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_3, 0, 3, 1, 1);

        lineEdit_codigo = new QLineEdit(agenda_ui);
        lineEdit_codigo->setObjectName(QString::fromUtf8("lineEdit_codigo"));
        sizePolicy.setHeightForWidth(lineEdit_codigo->sizePolicy().hasHeightForWidth());
        lineEdit_codigo->setSizePolicy(sizePolicy);

        gridLayout_6->addWidget(lineEdit_codigo, 0, 4, 1, 1);


        gridLayout_7->addLayout(gridLayout_6, 2, 2, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_5 = new QLabel(agenda_ui);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(label_5, 0, 1, 1, 1);

        dateEdit_Agenda = new QDateEdit(agenda_ui);
        dateEdit_Agenda->setObjectName(QString::fromUtf8("dateEdit_Agenda"));
        dateEdit_Agenda->setCurrentSection(QDateTimeEdit::YearSection);
        dateEdit_Agenda->setCalendarPopup(true);

        gridLayout_5->addWidget(dateEdit_Agenda, 0, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(418, 37, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_5, 0, 4, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton_show_Agenda = new QPushButton(agenda_ui);
        pushButton_show_Agenda->setObjectName(QString::fromUtf8("pushButton_show_Agenda"));
        pushButton_show_Agenda->setIcon(icon5);
        pushButton_show_Agenda->setIconSize(QSize(20, 20));
        pushButton_show_Agenda->setFlat(true);

        gridLayout_2->addWidget(pushButton_show_Agenda, 0, 2, 1, 1);

        pushButton_agenda_changeColor = new QPushButton(agenda_ui);
        pushButton_agenda_changeColor->setObjectName(QString::fromUtf8("pushButton_agenda_changeColor"));
        pushButton_agenda_changeColor->setEnabled(true);
        sizePolicy.setHeightForWidth(pushButton_agenda_changeColor->sizePolicy().hasHeightForWidth());
        pushButton_agenda_changeColor->setSizePolicy(sizePolicy);
        pushButton_agenda_changeColor->setIcon(icon4);
        pushButton_agenda_changeColor->setIconSize(QSize(20, 20));
        pushButton_agenda_changeColor->setAutoDefault(false);
        pushButton_agenda_changeColor->setDefault(false);
        pushButton_agenda_changeColor->setFlat(true);

        gridLayout_2->addWidget(pushButton_agenda_changeColor, 0, 3, 1, 1);


        gridLayout_5->addLayout(gridLayout_2, 0, 5, 1, 1);

        pushButton_update_Agenda = new QPushButton(agenda_ui);
        pushButton_update_Agenda->setObjectName(QString::fromUtf8("pushButton_update_Agenda"));
        sizePolicy.setHeightForWidth(pushButton_update_Agenda->sizePolicy().hasHeightForWidth());
        pushButton_update_Agenda->setSizePolicy(sizePolicy);
        pushButton_update_Agenda->setAutoFillBackground(false);
        pushButton_update_Agenda->setIcon(icon3);
        pushButton_update_Agenda->setIconSize(QSize(16, 16));
        pushButton_update_Agenda->setCheckable(false);
        pushButton_update_Agenda->setAutoRepeat(false);
        pushButton_update_Agenda->setAutoExclusive(false);
        pushButton_update_Agenda->setAutoDefault(false);
        pushButton_update_Agenda->setDefault(false);
        pushButton_update_Agenda->setFlat(true);

        gridLayout_5->addWidget(pushButton_update_Agenda, 0, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_5, 3, 2, 1, 1);

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
        tablaView_Agend->setFrameShape(QFrame::StyledPanel);
        tablaView_Agend->setFrameShadow(QFrame::Plain);
        tablaView_Agend->setMidLineWidth(1);
        tablaView_Agend->setSortingEnabled(true);

        gridLayout_4->addWidget(tablaView_Agend, 1, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_4, 4, 2, 1, 1);

        QWidget::setTabOrder(pushButton_show_SelectAlert, dateEdit_Alerta);
        QWidget::setTabOrder(dateEdit_Alerta, pushButton_Alerta_General_show);
        QWidget::setTabOrder(pushButton_Alerta_General_show, pushButton_AlertaGeneral_changeColor);
        QWidget::setTabOrder(pushButton_AlertaGeneral_changeColor, tableWidget_Alert);
        QWidget::setTabOrder(tableWidget_Alert, pushButton_show_SelectAlert_Personales_4);
        QWidget::setTabOrder(pushButton_show_SelectAlert_Personales_4, dateEdit_Alerta_Personales);
        QWidget::setTabOrder(dateEdit_Alerta_Personales, pushButton_Alert_Personal_show);
        QWidget::setTabOrder(pushButton_Alert_Personal_show, pushButton_Alert_Personal_changeColor);
        QWidget::setTabOrder(pushButton_Alert_Personal_changeColor, tableWidget_Alert_Personales);
        QWidget::setTabOrder(tableWidget_Alert_Personales, pushButton_Alert_Personales_remove);
        QWidget::setTabOrder(pushButton_Alert_Personales_remove, pushButton_Alert_Personales_edit);
        QWidget::setTabOrder(pushButton_Alert_Personales_edit, pushButton_Alert_Personales_add);
        QWidget::setTabOrder(pushButton_Alert_Personales_add, pushButton_showTask);
        QWidget::setTabOrder(pushButton_showTask, pushButton_showAll);
        QWidget::setTabOrder(pushButton_showAll, pushButton_editTask);
        QWidget::setTabOrder(pushButton_editTask, pushButton_deleteTask);
        QWidget::setTabOrder(pushButton_deleteTask, pushButton_newTask);
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
        dateEdit_Alerta->setDisplayFormat(QApplication::translate("agenda_ui", "yyyy/MM/dd", 0, QApplication::UnicodeUTF8));
        dateEdit_Alerta_Personales->setDisplayFormat(QApplication::translate("agenda_ui", "yyyy/MM/dd", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_Alert_Personales->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("agenda_ui", "Hora", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_Alert_Personales->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("agenda_ui", "Descripcion", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_Alert_Personales->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("agenda_ui", "Codigo", 0, QApplication::UnicodeUTF8));
        pushButton_Alert_Personales_remove->setText(QString());
        pushButton_Alert_Personales_add->setText(QString());
        pushButton_Alert_Personales_edit->setText(QString());
        pushButton_show_SelectAlert->setText(QString());
        label_2->setText(QApplication::translate("agenda_ui", "Alertas Generales :", 0, QApplication::UnicodeUTF8));
        pushButton_show_SelectAlert_Personales_4->setText(QString());
        label_3->setText(QApplication::translate("agenda_ui", "Alertas Personales :", 0, QApplication::UnicodeUTF8));
        pushButton_AlertaGeneral_changeColor->setText(QString());
        pushButton_Alerta_General_show->setText(QString());
        pushButton_Alert_Personal_changeColor->setText(QString());
        pushButton_Alert_Personal_show->setText(QString());
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_Alert->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("agenda_ui", "Hora", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_Alert->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("agenda_ui", "Descripcion", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_Alert->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("agenda_ui", "Codigo", 0, QApplication::UnicodeUTF8));
        pushButton_showTask->setText(QApplication::translate("agenda_ui", "Ver T&area", 0, QApplication::UnicodeUTF8));
        pushButton_showTask->setShortcut(QApplication::translate("agenda_ui", "Ctrl+A", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        pushButton_showAll->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        pushButton_showAll->setText(QApplication::translate("agenda_ui", "Ver T&odas", 0, QApplication::UnicodeUTF8));
        pushButton_editTask->setText(QApplication::translate("agenda_ui", "&Editar Tarea", 0, QApplication::UnicodeUTF8));
        pushButton_editTask->setShortcut(QApplication::translate("agenda_ui", "Ctrl+E", 0, QApplication::UnicodeUTF8));
        pushButton_deleteTask->setText(QApplication::translate("agenda_ui", "El&iminar Tarea", 0, QApplication::UnicodeUTF8));
        pushButton_deleteTask->setShortcut(QApplication::translate("agenda_ui", "Ctrl+I", 0, QApplication::UnicodeUTF8));
        pushButton_newTask->setText(QApplication::translate("agenda_ui", "Nueva Tarea", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("agenda_ui", "Nombre :", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("agenda_ui", "Agenda :", 0, QApplication::UnicodeUTF8));
        dateEdit_Agenda->setDisplayFormat(QApplication::translate("agenda_ui", "yyyy/MM/dd", 0, QApplication::UnicodeUTF8));
        pushButton_show_Agenda->setText(QString());
        pushButton_agenda_changeColor->setText(QString());
        pushButton_update_Agenda->setText(QString());
        QTableWidgetItem *___qtablewidgetitem6 = tablaView_Agend->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("agenda_ui", "Fecha", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = tablaView_Agend->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("agenda_ui", "Hora", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = tablaView_Agend->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QApplication::translate("agenda_ui", "Nombre", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = tablaView_Agend->horizontalHeaderItem(3);
        ___qtablewidgetitem9->setText(QApplication::translate("agenda_ui", "Descripcion", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = tablaView_Agend->horizontalHeaderItem(4);
        ___qtablewidgetitem10->setText(QApplication::translate("agenda_ui", "Ficha", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem11 = tablaView_Agend->horizontalHeaderItem(5);
        ___qtablewidgetitem11->setText(QApplication::translate("agenda_ui", "Codigo", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem12 = tablaView_Agend->horizontalHeaderItem(6);
        ___qtablewidgetitem12->setText(QApplication::translate("agenda_ui", "Telefono", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class agenda_ui: public Ui_agenda_ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGENDA_UI_H
