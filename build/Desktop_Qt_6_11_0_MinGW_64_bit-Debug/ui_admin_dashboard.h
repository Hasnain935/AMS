/********************************************************************************
** Form generated from reading UI file 'admin_dashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_DASHBOARD_H
#define UI_ADMIN_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin_dashboard
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QPushButton *pushButton_5;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_13;
    QLabel *label_12;
    QLabel *label_14;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_20;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_22;
    QLabel *label_24;
    QLabel *label_23;
    QLabel *label_18;
    QLabel *label_8;
    QLabel *label;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_15;
    QPushButton *totalstd;
    QLabel *label_19;
    QPushButton *presentbutton;
    QLabel *label_16;
    QPushButton *absentbutton;
    QLabel *label_17;
    QLabel *label_21;
    QPushButton *savechanges;
    QTableWidget *tableWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *admin_dashboard)
    {
        if (admin_dashboard->objectName().isEmpty())
            admin_dashboard->setObjectName("admin_dashboard");
        admin_dashboard->resize(1254, 704);
        centralwidget = new QWidget(admin_dashboard);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setMaximumSize(QSize(200, 16777215));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(0,53,77);"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(202, 202, 202);"));

        verticalLayout->addWidget(label_2);

        pushButton_5 = new QPushButton(frame);
        pushButton_5->setObjectName("pushButton_5");
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        pushButton_5->setFont(font1);
        pushButton_5->setStyleSheet(QString::fromUtf8("color: rgb(197, 197, 197);\n"
"background-color: rgb(0,53,77);"));

        verticalLayout->addWidget(pushButton_5);

        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(197, 197, 197);"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(197, 197, 197);"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(197, 197, 197);"));

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(frame);
        label_6->setObjectName("label_6");
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(197, 197, 197);"));

        verticalLayout->addWidget(label_6);

        label_9 = new QLabel(frame);
        label_9->setObjectName("label_9");

        verticalLayout->addWidget(label_9);

        label_10 = new QLabel(frame);
        label_10->setObjectName("label_10");

        verticalLayout->addWidget(label_10);

        label_11 = new QLabel(frame);
        label_11->setObjectName("label_11");

        verticalLayout->addWidget(label_11);

        label_13 = new QLabel(frame);
        label_13->setObjectName("label_13");

        verticalLayout->addWidget(label_13);

        label_12 = new QLabel(frame);
        label_12->setObjectName("label_12");

        verticalLayout->addWidget(label_12);

        label_14 = new QLabel(frame);
        label_14->setObjectName("label_14");

        verticalLayout->addWidget(label_14);


        horizontalLayout->addWidget(frame);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        QFont font2;
        font2.setBold(true);
        frame_2->setFont(font2);
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_20 = new QLabel(frame_2);
        label_20->setObjectName("label_20");
        QFont font3;
        font3.setPointSize(32);
        font3.setBold(true);
        label_20->setFont(font3);

        verticalLayout_2->addWidget(label_20);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_22 = new QLabel(frame_2);
        label_22->setObjectName("label_22");
        label_22->setFont(font);

        horizontalLayout_3->addWidget(label_22);

        label_24 = new QLabel(frame_2);
        label_24->setObjectName("label_24");
        label_24->setFont(font);
        label_24->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_3->addWidget(label_24);

        label_23 = new QLabel(frame_2);
        label_23->setObjectName("label_23");
        label_23->setFont(font);

        horizontalLayout_3->addWidget(label_23);

        label_18 = new QLabel(frame_2);
        label_18->setObjectName("label_18");
        label_18->setFont(font);
        label_18->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_3->addWidget(label_18);

        label_8 = new QLabel(frame_2);
        label_8->setObjectName("label_8");
        label_8->setFont(font);

        horizontalLayout_3->addWidget(label_8);

        label = new QLabel(frame_2);
        label->setObjectName("label");
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_3->addWidget(label);

        label_7 = new QLabel(frame_2);
        label_7->setObjectName("label_7");
        label_7->setFont(font);

        horizontalLayout_3->addWidget(label_7);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_15 = new QLabel(frame_2);
        label_15->setObjectName("label_15");

        horizontalLayout_2->addWidget(label_15);

        totalstd = new QPushButton(frame_2);
        totalstd->setObjectName("totalstd");
        totalstd->setMaximumSize(QSize(200, 70));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        totalstd->setFont(font4);
        totalstd->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(202, 202, 202);\n"
"border-radius:20px;"));

        horizontalLayout_2->addWidget(totalstd);

        label_19 = new QLabel(frame_2);
        label_19->setObjectName("label_19");

        horizontalLayout_2->addWidget(label_19);

        presentbutton = new QPushButton(frame_2);
        presentbutton->setObjectName("presentbutton");
        presentbutton->setMaximumSize(QSize(200, 70));
        presentbutton->setFont(font4);
        presentbutton->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(202, 202, 202);\n"
"border-radius:20px;"));

        horizontalLayout_2->addWidget(presentbutton);

        label_16 = new QLabel(frame_2);
        label_16->setObjectName("label_16");

        horizontalLayout_2->addWidget(label_16);

        absentbutton = new QPushButton(frame_2);
        absentbutton->setObjectName("absentbutton");
        absentbutton->setMaximumSize(QSize(200, 70));
        absentbutton->setFont(font4);
        absentbutton->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(202, 202, 202);\n"
"border-radius:20px;"));

        horizontalLayout_2->addWidget(absentbutton);

        label_17 = new QLabel(frame_2);
        label_17->setObjectName("label_17");

        horizontalLayout_2->addWidget(label_17);


        verticalLayout_2->addLayout(horizontalLayout_2);

        label_21 = new QLabel(frame_2);
        label_21->setObjectName("label_21");
        label_21->setFont(font);
        label_21->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft);

        verticalLayout_2->addWidget(label_21);

        savechanges = new QPushButton(frame_2);
        savechanges->setObjectName("savechanges");
        savechanges->setMaximumSize(QSize(130, 35));
        savechanges->setFont(font1);
        savechanges->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(76, 255, 0);\n"
"border-radius:20px;"));

        verticalLayout_2->addWidget(savechanges);

        tableWidget = new QTableWidget(frame_2);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        if (tableWidget->rowCount() < 30)
            tableWidget->setRowCount(30);
        tableWidget->setObjectName("tableWidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);
        tableWidget->setMaximumSize(QSize(16777215, 300));
        tableWidget->setRowCount(30);
        tableWidget->setColumnCount(5);

        verticalLayout_2->addWidget(tableWidget);


        horizontalLayout->addWidget(frame_2);

        admin_dashboard->setCentralWidget(centralwidget);
        menubar = new QMenuBar(admin_dashboard);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1254, 26));
        admin_dashboard->setMenuBar(menubar);
        statusbar = new QStatusBar(admin_dashboard);
        statusbar->setObjectName("statusbar");
        admin_dashboard->setStatusBar(statusbar);

        retranslateUi(admin_dashboard);

        QMetaObject::connectSlotsByName(admin_dashboard);
    } // setupUi

    void retranslateUi(QMainWindow *admin_dashboard)
    {
        admin_dashboard->setWindowTitle(QCoreApplication::translate("admin_dashboard", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("admin_dashboard", "Dashboard", nullptr));
        pushButton_5->setText(QCoreApplication::translate("admin_dashboard", "Manage Students", nullptr));
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        label_9->setText(QString());
        label_10->setText(QString());
        label_11->setText(QString());
        label_13->setText(QString());
        label_12->setText(QString());
        label_14->setText(QString());
        label_20->setText(QCoreApplication::translate("admin_dashboard", "WELCOME ADMIN!", nullptr));
        label_22->setText(QString());
        label_24->setText(QCoreApplication::translate("admin_dashboard", "TOTAL ", nullptr));
        label_23->setText(QString());
        label_18->setText(QCoreApplication::translate("admin_dashboard", "PRESENT", nullptr));
        label_8->setText(QString());
        label->setText(QCoreApplication::translate("admin_dashboard", "ABSENT", nullptr));
        label_7->setText(QString());
        label_15->setText(QString());
        totalstd->setText(QString());
        label_19->setText(QString());
        presentbutton->setText(QString());
        label_16->setText(QString());
        absentbutton->setText(QString());
        label_17->setText(QString());
        label_21->setText(QCoreApplication::translate("admin_dashboard", "Student List", nullptr));
        savechanges->setText(QCoreApplication::translate("admin_dashboard", "Save Changes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin_dashboard: public Ui_admin_dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_DASHBOARD_H
