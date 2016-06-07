/********************************************************************************
** Form generated from reading UI file 'usuarios_ui.ui'
**
** Created: Mon 7. Jan 16:32:54 2013
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USUARIOS_UI_H
#define UI_USUARIOS_UI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
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

class Ui_usuarios_ui
{
public:
    QGridLayout *gridLayout_15;
    QGridLayout *gridLayout_14;
    QGridLayout *gridLayout_13;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_12;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QLineEdit *lineEdit_userCode;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QComboBox *comboBox_agenda;
    QLabel *label_6;
    QComboBox *comboBox_paciente;
    QLabel *label_7;
    QLabel *label_10;
    QComboBox *comboBox_usuarios;
    QLabel *label_11;
    QComboBox *comboBox_mailing;
    QLabel *label_13;
    QComboBox *comboBox_facebook;
    QLabel *label_12;
    QComboBox *comboBox_alertas;
    QLabel *label_9;
    QComboBox *comboBox_personal;
    QComboBox *comboBox_historia_clinica;
    QComboBox *comboBox_tratamientos;
    QLabel *label_8;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout_11;
    QGridLayout *gridLayout_3;
    QLabel *label_14;
    QGridLayout *gridLayout_10;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_9;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_4;
    QFrame *line;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_5;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_6;
    QLabel *label_2;
    QLineEdit *lineEdit_currentSesion;
    QLabel *label;
    QLineEdit *lineEdit_currentUserSelectec;
    QSpacerItem *horizontalSpacer_5;
    QGridLayout *gridLayout_4;
    QLabel *label_3;
    QTableWidget *tableWidget_list_users;

    void setupUi(QWidget *usuarios_ui)
    {
        if (usuarios_ui->objectName().isEmpty())
            usuarios_ui->setObjectName(QString::fromUtf8("usuarios_ui"));
        usuarios_ui->resize(850, 504);
        QFont font;
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        usuarios_ui->setFont(font);
        usuarios_ui->setMouseTracking(false);
        gridLayout_15 = new QGridLayout(usuarios_ui);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        gridLayout_14 = new QGridLayout();
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        gridLayout_13 = new QGridLayout();
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        horizontalSpacer_2 = new QSpacerItem(351, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_13->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        gridLayout_12 = new QGridLayout();
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_4 = new QLabel(usuarios_ui);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        lineEdit_userCode = new QLineEdit(usuarios_ui);
        lineEdit_userCode->setObjectName(QString::fromUtf8("lineEdit_userCode"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_userCode->sizePolicy().hasHeightForWidth());
        lineEdit_userCode->setSizePolicy(sizePolicy1);
        lineEdit_userCode->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_userCode, 1, 0, 1, 1);


        gridLayout_12->addLayout(gridLayout_2, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_5 = new QLabel(usuarios_ui);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        comboBox_agenda = new QComboBox(usuarios_ui);
        comboBox_agenda->setObjectName(QString::fromUtf8("comboBox_agenda"));
        sizePolicy.setHeightForWidth(comboBox_agenda->sizePolicy().hasHeightForWidth());
        comboBox_agenda->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboBox_agenda, 0, 1, 1, 1);

        label_6 = new QLabel(usuarios_ui);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        comboBox_paciente = new QComboBox(usuarios_ui);
        comboBox_paciente->setObjectName(QString::fromUtf8("comboBox_paciente"));
        sizePolicy.setHeightForWidth(comboBox_paciente->sizePolicy().hasHeightForWidth());
        comboBox_paciente->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboBox_paciente, 1, 1, 1, 1);

        label_7 = new QLabel(usuarios_ui);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_7, 2, 0, 1, 1);

        label_10 = new QLabel(usuarios_ui);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_10, 4, 0, 1, 1);

        comboBox_usuarios = new QComboBox(usuarios_ui);
        comboBox_usuarios->setObjectName(QString::fromUtf8("comboBox_usuarios"));
        sizePolicy.setHeightForWidth(comboBox_usuarios->sizePolicy().hasHeightForWidth());
        comboBox_usuarios->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboBox_usuarios, 4, 1, 1, 1);

        label_11 = new QLabel(usuarios_ui);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_11, 5, 0, 1, 1);

        comboBox_mailing = new QComboBox(usuarios_ui);
        comboBox_mailing->setObjectName(QString::fromUtf8("comboBox_mailing"));
        sizePolicy.setHeightForWidth(comboBox_mailing->sizePolicy().hasHeightForWidth());
        comboBox_mailing->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboBox_mailing, 5, 1, 1, 1);

        label_13 = new QLabel(usuarios_ui);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        sizePolicy.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_13, 6, 0, 1, 1);

        comboBox_facebook = new QComboBox(usuarios_ui);
        comboBox_facebook->setObjectName(QString::fromUtf8("comboBox_facebook"));
        sizePolicy.setHeightForWidth(comboBox_facebook->sizePolicy().hasHeightForWidth());
        comboBox_facebook->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboBox_facebook, 6, 1, 1, 1);

        label_12 = new QLabel(usuarios_ui);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_12, 7, 0, 1, 1);

        comboBox_alertas = new QComboBox(usuarios_ui);
        comboBox_alertas->setObjectName(QString::fromUtf8("comboBox_alertas"));
        sizePolicy.setHeightForWidth(comboBox_alertas->sizePolicy().hasHeightForWidth());
        comboBox_alertas->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboBox_alertas, 7, 1, 1, 1);

        label_9 = new QLabel(usuarios_ui);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_9, 8, 0, 1, 1);

        comboBox_personal = new QComboBox(usuarios_ui);
        comboBox_personal->setObjectName(QString::fromUtf8("comboBox_personal"));
        sizePolicy.setHeightForWidth(comboBox_personal->sizePolicy().hasHeightForWidth());
        comboBox_personal->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboBox_personal, 8, 1, 1, 1);

        comboBox_historia_clinica = new QComboBox(usuarios_ui);
        comboBox_historia_clinica->setObjectName(QString::fromUtf8("comboBox_historia_clinica"));
        sizePolicy.setHeightForWidth(comboBox_historia_clinica->sizePolicy().hasHeightForWidth());
        comboBox_historia_clinica->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboBox_historia_clinica, 2, 1, 1, 1);

        comboBox_tratamientos = new QComboBox(usuarios_ui);
        comboBox_tratamientos->setObjectName(QString::fromUtf8("comboBox_tratamientos"));
        sizePolicy.setHeightForWidth(comboBox_tratamientos->sizePolicy().hasHeightForWidth());
        comboBox_tratamientos->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboBox_tratamientos, 3, 1, 1, 1);

        label_8 = new QLabel(usuarios_ui);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_8, 3, 0, 1, 1);


        gridLayout_12->addLayout(gridLayout, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_12->addItem(verticalSpacer_2, 2, 0, 1, 1);

        gridLayout_11 = new QGridLayout();
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_14 = new QLabel(usuarios_ui);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        sizePolicy.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(label_14, 0, 0, 1, 1);


        gridLayout_11->addLayout(gridLayout_3, 0, 0, 1, 1);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        label_15 = new QLabel(usuarios_ui);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_10->addWidget(label_15, 0, 0, 1, 1);

        label_16 = new QLabel(usuarios_ui);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_10->addWidget(label_16, 1, 0, 1, 1);

        label_17 = new QLabel(usuarios_ui);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_10->addWidget(label_17, 2, 0, 1, 1);


        gridLayout_11->addLayout(gridLayout_10, 1, 0, 1, 1);


        gridLayout_12->addLayout(gridLayout_11, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_12->addItem(verticalSpacer, 4, 0, 1, 1);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        horizontalSpacer_3 = new QSpacerItem(250, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        pushButton_4 = new QPushButton(usuarios_ui);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/checkbox_checked.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon);
        pushButton_4->setIconSize(QSize(20, 20));
        pushButton_4->setFlat(true);

        gridLayout_9->addWidget(pushButton_4, 0, 1, 1, 1);


        gridLayout_12->addLayout(gridLayout_9, 5, 0, 1, 1);


        gridLayout_13->addLayout(gridLayout_12, 1, 0, 1, 1);


        gridLayout_14->addLayout(gridLayout_13, 0, 0, 1, 1);

        line = new QFrame(usuarios_ui);
        line->setObjectName(QString::fromUtf8("line"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy2);
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_14->addWidget(line, 0, 1, 1, 1);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        pushButton_2 = new QPushButton(usuarios_ui);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/edit-user.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(20, 20));

        gridLayout_5->addWidget(pushButton_2, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(338, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer, 0, 3, 1, 1);

        pushButton_3 = new QPushButton(usuarios_ui);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/delete-user.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        pushButton_3->setIconSize(QSize(20, 20));

        gridLayout_5->addWidget(pushButton_3, 0, 4, 1, 1);

        pushButton = new QPushButton(usuarios_ui);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/add-user.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon3);
        pushButton->setIconSize(QSize(20, 20));

        gridLayout_5->addWidget(pushButton, 0, 2, 1, 1);


        gridLayout_8->addLayout(gridLayout_5, 0, 0, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_2 = new QLabel(usuarios_ui);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy3);

        gridLayout_6->addWidget(label_2, 0, 0, 1, 1);

        lineEdit_currentSesion = new QLineEdit(usuarios_ui);
        lineEdit_currentSesion->setObjectName(QString::fromUtf8("lineEdit_currentSesion"));
        sizePolicy.setHeightForWidth(lineEdit_currentSesion->sizePolicy().hasHeightForWidth());
        lineEdit_currentSesion->setSizePolicy(sizePolicy);
        lineEdit_currentSesion->setMinimumSize(QSize(300, 0));
        lineEdit_currentSesion->setMaximumSize(QSize(300, 16777215));
        lineEdit_currentSesion->setReadOnly(true);

        gridLayout_6->addWidget(lineEdit_currentSesion, 0, 1, 1, 1);

        label = new QLabel(usuarios_ui);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);

        gridLayout_6->addWidget(label, 1, 0, 1, 1);

        lineEdit_currentUserSelectec = new QLineEdit(usuarios_ui);
        lineEdit_currentUserSelectec->setObjectName(QString::fromUtf8("lineEdit_currentUserSelectec"));
        sizePolicy.setHeightForWidth(lineEdit_currentUserSelectec->sizePolicy().hasHeightForWidth());
        lineEdit_currentUserSelectec->setSizePolicy(sizePolicy);
        lineEdit_currentUserSelectec->setReadOnly(true);

        gridLayout_6->addWidget(lineEdit_currentUserSelectec, 1, 1, 1, 1);


        gridLayout_7->addLayout(gridLayout_6, 0, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(258, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_5, 0, 1, 1, 1);


        gridLayout_8->addLayout(gridLayout_7, 1, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_3 = new QLabel(usuarios_ui);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(label_3, 0, 0, 1, 1);

        tableWidget_list_users = new QTableWidget(usuarios_ui);
        if (tableWidget_list_users->columnCount() < 3)
            tableWidget_list_users->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_list_users->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_list_users->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_list_users->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget_list_users->setObjectName(QString::fromUtf8("tableWidget_list_users"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(tableWidget_list_users->sizePolicy().hasHeightForWidth());
        tableWidget_list_users->setSizePolicy(sizePolicy4);
        tableWidget_list_users->setEditTriggers(QAbstractItemView::DoubleClicked);
        tableWidget_list_users->setAlternatingRowColors(true);
        tableWidget_list_users->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_list_users->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_list_users->setShowGrid(false);
        tableWidget_list_users->setGridStyle(Qt::NoPen);
        tableWidget_list_users->setSortingEnabled(true);
        tableWidget_list_users->setWordWrap(false);
        tableWidget_list_users->setCornerButtonEnabled(false);

        gridLayout_4->addWidget(tableWidget_list_users, 1, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout_4, 2, 0, 1, 1);


        gridLayout_14->addLayout(gridLayout_8, 0, 2, 1, 1);


        gridLayout_15->addLayout(gridLayout_14, 0, 0, 1, 1);

        line->raise();
        pushButton_4->raise();
        tableWidget_list_users->raise();
        QWidget::setTabOrder(pushButton_2, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_3);
        QWidget::setTabOrder(pushButton_3, lineEdit_currentSesion);
        QWidget::setTabOrder(lineEdit_currentSesion, lineEdit_currentUserSelectec);
        QWidget::setTabOrder(lineEdit_currentUserSelectec, lineEdit_userCode);
        QWidget::setTabOrder(lineEdit_userCode, comboBox_agenda);
        QWidget::setTabOrder(comboBox_agenda, comboBox_paciente);
        QWidget::setTabOrder(comboBox_paciente, comboBox_historia_clinica);
        QWidget::setTabOrder(comboBox_historia_clinica, comboBox_tratamientos);
        QWidget::setTabOrder(comboBox_tratamientos, comboBox_usuarios);
        QWidget::setTabOrder(comboBox_usuarios, comboBox_mailing);
        QWidget::setTabOrder(comboBox_mailing, comboBox_facebook);
        QWidget::setTabOrder(comboBox_facebook, comboBox_alertas);
        QWidget::setTabOrder(comboBox_alertas, comboBox_personal);

        retranslateUi(usuarios_ui);

        comboBox_agenda->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(usuarios_ui);
    } // setupUi

    void retranslateUi(QWidget *usuarios_ui)
    {
        usuarios_ui->setWindowTitle(QApplication::translate("usuarios_ui", "Form", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("usuarios_ui", "             PERMISOS", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("usuarios_ui", "1. Agenda ", 0, QApplication::UnicodeUTF8));
        comboBox_agenda->clear();
        comboBox_agenda->insertItems(0, QStringList()
         << QApplication::translate("usuarios_ui", "Total", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("usuarios_ui", "Parcial", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("usuarios_ui", "Ninguno", 0, QApplication::UnicodeUTF8)
        );
        label_6->setText(QApplication::translate("usuarios_ui", "2. Paciente ", 0, QApplication::UnicodeUTF8));
        comboBox_paciente->clear();
        comboBox_paciente->insertItems(0, QStringList()
         << QApplication::translate("usuarios_ui", "Total", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("usuarios_ui", "Parcial", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("usuarios_ui", "Ninguno", 0, QApplication::UnicodeUTF8)
        );
        label_7->setText(QApplication::translate("usuarios_ui", "3. Historia Cl\303\255nica ", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("usuarios_ui", "5. Usuarios ", 0, QApplication::UnicodeUTF8));
        comboBox_usuarios->clear();
        comboBox_usuarios->insertItems(0, QStringList()
         << QApplication::translate("usuarios_ui", "Total", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("usuarios_ui", "Parcial", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("usuarios_ui", "Ninguno", 0, QApplication::UnicodeUTF8)
        );
        label_11->setText(QApplication::translate("usuarios_ui", "6. Mailing:", 0, QApplication::UnicodeUTF8));
        comboBox_mailing->clear();
        comboBox_mailing->insertItems(0, QStringList()
         << QApplication::translate("usuarios_ui", "Total", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("usuarios_ui", "Parcial", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("usuarios_ui", "Ninguno", 0, QApplication::UnicodeUTF8)
        );
        label_13->setText(QApplication::translate("usuarios_ui", "7. Facebok ", 0, QApplication::UnicodeUTF8));
        comboBox_facebook->clear();
        comboBox_facebook->insertItems(0, QStringList()
         << QApplication::translate("usuarios_ui", "Total", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("usuarios_ui", "Parcial", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("usuarios_ui", "Ninguno", 0, QApplication::UnicodeUTF8)
        );
        label_12->setText(QApplication::translate("usuarios_ui", "8. Alertas ", 0, QApplication::UnicodeUTF8));
        comboBox_alertas->clear();
        comboBox_alertas->insertItems(0, QStringList()
         << QApplication::translate("usuarios_ui", "Total", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("usuarios_ui", "Parcial", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("usuarios_ui", "Ninguno", 0, QApplication::UnicodeUTF8)
        );
        label_9->setText(QApplication::translate("usuarios_ui", "9. Personal", 0, QApplication::UnicodeUTF8));
        comboBox_personal->clear();
        comboBox_personal->insertItems(0, QStringList()
         << QApplication::translate("usuarios_ui", "Total", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("usuarios_ui", "Parcial", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("usuarios_ui", "Ninguno", 0, QApplication::UnicodeUTF8)
        );
        comboBox_historia_clinica->clear();
        comboBox_historia_clinica->insertItems(0, QStringList()
         << QApplication::translate("usuarios_ui", "Total", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("usuarios_ui", "Parcial", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("usuarios_ui", "Ninguno", 0, QApplication::UnicodeUTF8)
        );
        comboBox_tratamientos->clear();
        comboBox_tratamientos->insertItems(0, QStringList()
         << QApplication::translate("usuarios_ui", "Total", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("usuarios_ui", "Parcial", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("usuarios_ui", "Ninguno", 0, QApplication::UnicodeUTF8)
        );
        label_8->setText(QApplication::translate("usuarios_ui", "4. Tratamientos ", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("usuarios_ui", "Tipos de Permisos:", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("usuarios_ui", "Total       : Acceso completo al m\303\263dulo con edici\303\263n", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("usuarios_ui", "Parcial     : Acceso al m\303\263dulo sin edici\303\263n", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("usuarios_ui", "Ninguno  : Sin acceso al m\303\263dulo", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("usuarios_ui", "Guardar", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("usuarios_ui", "E&ditar Usuario", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("usuarios_ui", "Elimina&r Usuario", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("usuarios_ui", "&Nuevo Usuario", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("usuarios_ui", "Sesi\303\263n Actual ", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("usuarios_ui", "Usuario Seleccionado ", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("usuarios_ui", "Lista de Usuarios :", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_list_users->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("usuarios_ui", "Nick de Usuario", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_list_users->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("usuarios_ui", "Nombre ", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_list_users->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("usuarios_ui", "C\303\263digo de Usuario", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class usuarios_ui: public Ui_usuarios_ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USUARIOS_UI_H
