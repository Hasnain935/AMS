/********************************************************************************
** Form generated from reading UI file 'studentportal.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTPORTAL_H
#define UI_STUDENTPORTAL_H

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

class Ui_Dashboard
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QLabel *label_3;
    QLabel *label_8;
    QLabel *label_11;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_16;
    QLabel *label_15;
    QLabel *label_9;
    QLabel *label_10;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_7;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_26;
    QLabel *label_25;
    QLabel *label_22;
    QLabel *label_20;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_19;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_23;
    QLabel *lblCGPAValue;
    QLabel *label_21;
    QLabel *lblassignmentcount;
    QLabel *label_18;
    QLabel *lblattendancecount;
    QLabel *label_24;
    QLabel *label_17;
    QTableWidget *timetablewidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Dashboard)
    {
        if (Dashboard->objectName().isEmpty())
            Dashboard->setObjectName("Dashboard");
        Dashboard->resize(1278, 708);
        centralwidget = new QWidget(Dashboard);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setMaximumSize(QSize(160, 16777215));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(0,53,77)"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(frame);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(136, 136, 136);"));
        label->setScaledContents(true);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        QFont font1;
        font1.setPointSize(7);
        font1.setBold(true);
        font1.setItalic(true);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0,53,77);\n"
"color:rgb(255, 255, 255)"));

        verticalLayout->addWidget(pushButton);

        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0,53,77);\n"
"color:rgb(255, 255, 255)"));

        verticalLayout->addWidget(pushButton_3);

        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        label_8 = new QLabel(frame);
        label_8->setObjectName("label_8");

        verticalLayout->addWidget(label_8);

        label_11 = new QLabel(frame);
        label_11->setObjectName("label_11");

        verticalLayout->addWidget(label_11);

        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(frame);
        label_6->setObjectName("label_6");

        verticalLayout->addWidget(label_6);

        label_16 = new QLabel(frame);
        label_16->setObjectName("label_16");

        verticalLayout->addWidget(label_16);

        label_15 = new QLabel(frame);
        label_15->setObjectName("label_15");

        verticalLayout->addWidget(label_15);

        label_9 = new QLabel(frame);
        label_9->setObjectName("label_9");

        verticalLayout->addWidget(label_9);

        label_10 = new QLabel(frame);
        label_10->setObjectName("label_10");

        verticalLayout->addWidget(label_10);


        horizontalLayout->addWidget(frame);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_7 = new QLabel(frame_2);
        label_7->setObjectName("label_7");
        QFont font2;
        font2.setPointSize(28);
        font2.setBold(true);
        label_7->setFont(font2);
        label_7->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft);

        verticalLayout_2->addWidget(label_7);

        label_12 = new QLabel(frame_2);
        label_12->setObjectName("label_12");
        label_12->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);

        verticalLayout_2->addWidget(label_12);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_26 = new QLabel(frame_2);
        label_26->setObjectName("label_26");

        horizontalLayout_3->addWidget(label_26);

        label_25 = new QLabel(frame_2);
        label_25->setObjectName("label_25");
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(true);
        label_25->setFont(font3);
        label_25->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_3->addWidget(label_25);

        label_22 = new QLabel(frame_2);
        label_22->setObjectName("label_22");

        horizontalLayout_3->addWidget(label_22);

        label_20 = new QLabel(frame_2);
        label_20->setObjectName("label_20");
        label_20->setFont(font3);
        label_20->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_3->addWidget(label_20);

        label_13 = new QLabel(frame_2);
        label_13->setObjectName("label_13");

        horizontalLayout_3->addWidget(label_13);

        label_14 = new QLabel(frame_2);
        label_14->setObjectName("label_14");
        label_14->setFont(font3);
        label_14->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_3->addWidget(label_14);

        label_19 = new QLabel(frame_2);
        label_19->setObjectName("label_19");

        horizontalLayout_3->addWidget(label_19);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_23 = new QLabel(frame_2);
        label_23->setObjectName("label_23");

        horizontalLayout_2->addWidget(label_23);

        lblCGPAValue = new QLabel(frame_2);
        lblCGPAValue->setObjectName("lblCGPAValue");
        lblCGPAValue->setMaximumSize(QSize(500, 500));
        lblCGPAValue->setFont(font3);
        lblCGPAValue->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color: rgb(223, 223, 223);"));
        lblCGPAValue->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_2->addWidget(lblCGPAValue);

        label_21 = new QLabel(frame_2);
        label_21->setObjectName("label_21");

        horizontalLayout_2->addWidget(label_21);

        lblassignmentcount = new QLabel(frame_2);
        lblassignmentcount->setObjectName("lblassignmentcount");
        lblassignmentcount->setMaximumSize(QSize(500, 500));
        lblassignmentcount->setFont(font3);
        lblassignmentcount->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color: rgb(223, 223, 223);"));
        lblassignmentcount->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_2->addWidget(lblassignmentcount);

        label_18 = new QLabel(frame_2);
        label_18->setObjectName("label_18");

        horizontalLayout_2->addWidget(label_18);

        lblattendancecount = new QLabel(frame_2);
        lblattendancecount->setObjectName("lblattendancecount");
        lblattendancecount->setMaximumSize(QSize(500, 500));
        lblattendancecount->setFont(font3);
        lblattendancecount->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color: rgb(223, 223, 223);"));
        lblattendancecount->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_2->addWidget(lblattendancecount);

        label_24 = new QLabel(frame_2);
        label_24->setObjectName("label_24");

        horizontalLayout_2->addWidget(label_24);


        verticalLayout_2->addLayout(horizontalLayout_2);

        label_17 = new QLabel(frame_2);
        label_17->setObjectName("label_17");
        label_17->setFont(font3);

        verticalLayout_2->addWidget(label_17);

        timetablewidget = new QTableWidget(frame_2);
        timetablewidget->setObjectName("timetablewidget");
        timetablewidget->setMaximumSize(QSize(16777215, 300));

        verticalLayout_2->addWidget(timetablewidget);


        horizontalLayout->addWidget(frame_2);

        Dashboard->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Dashboard);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1278, 26));
        Dashboard->setMenuBar(menubar);
        statusbar = new QStatusBar(Dashboard);
        statusbar->setObjectName("statusbar");
        Dashboard->setStatusBar(statusbar);

        retranslateUi(Dashboard);

        QMetaObject::connectSlotsByName(Dashboard);
    } // setupUi

    void retranslateUi(QMainWindow *Dashboard)
    {
        Dashboard->setWindowTitle(QCoreApplication::translate("Dashboard", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("Dashboard", "STUDENT PORTAL", nullptr));
        label_2->setText(QString());
        pushButton->setText(QCoreApplication::translate("Dashboard", "MY PROFILE", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Dashboard", "ATTENDANCE", nullptr));
        label_3->setText(QString());
        label_8->setText(QString());
        label_11->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        label_16->setText(QString());
        label_15->setText(QString());
        label_9->setText(QString());
        label_10->setText(QString());
        label_7->setText(QCoreApplication::translate("Dashboard", "WELCOME BACK!", nullptr));
        label_12->setText(QCoreApplication::translate("Dashboard", "Here's Whats Happening with your journey!", nullptr));
        label_26->setText(QString());
        label_25->setText(QCoreApplication::translate("Dashboard", "CGPA", nullptr));
        label_22->setText(QString());
        label_20->setText(QCoreApplication::translate("Dashboard", "ASSIGNMENTS", nullptr));
        label_13->setText(QString());
        label_14->setText(QCoreApplication::translate("Dashboard", "ATTENDANCE", nullptr));
        label_19->setText(QString());
        label_23->setText(QString());
        lblCGPAValue->setText(QString());
        label_21->setText(QString());
        lblassignmentcount->setText(QString());
        label_18->setText(QString());
        lblattendancecount->setText(QString());
        label_24->setText(QString());
        label_17->setText(QCoreApplication::translate("Dashboard", "Your Time Table", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dashboard: public Ui_Dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTPORTAL_H
