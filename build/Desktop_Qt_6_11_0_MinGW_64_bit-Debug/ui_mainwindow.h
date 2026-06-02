/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QLabel *label_7;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1231, 715);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        frame = new QFrame(widget);
        frame->setObjectName("frame");
        frame->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 53, 77)"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(frame);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(40);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignHCenter);

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setPointSize(14);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing);

        verticalLayout_2->addWidget(label_3);


        horizontalLayout_2->addWidget(frame);

        frame_2 = new QFrame(widget);
        frame_2->setObjectName("frame_2");
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_4 = new QLabel(frame_2);
        label_4->setObjectName("label_4");
        QFont font2;
        font2.setPointSize(36);
        font2.setBold(true);
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(13, 13, 13);"));
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(label_4);

        label_5 = new QLabel(frame_2);
        label_5->setObjectName("label_5");
        QFont font3;
        font3.setPointSize(12);
        label_5->setFont(font3);
        label_5->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);

        verticalLayout_3->addWidget(label_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton = new QPushButton(frame_2);
        pushButton->setObjectName("pushButton");
        pushButton->setMaximumSize(QSize(200, 45));
        QFont font4;
        font4.setPointSize(16);
        font4.setBold(true);
        font4.setItalic(true);
        pushButton->setFont(font4);
        pushButton->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 255);"));
        pushButton->setIconSize(QSize(40, 40));

        horizontalLayout_3->addWidget(pushButton);

        pushButton_2 = new QPushButton(frame_2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMaximumSize(QSize(200, 45));
        pushButton_2->setFont(font4);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 255);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(pushButton_2);


        verticalLayout_3->addLayout(horizontalLayout_3);

        label_6 = new QLabel(frame_2);
        label_6->setObjectName("label_6");

        verticalLayout_3->addWidget(label_6);

        lineEdit = new QLineEdit(frame_2);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMaximumSize(QSize(16777215, 40));

        verticalLayout_3->addWidget(lineEdit);

        label_7 = new QLabel(frame_2);
        label_7->setObjectName("label_7");

        verticalLayout_3->addWidget(label_7);

        lineEdit_2 = new QLineEdit(frame_2);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setMaximumSize(QSize(16777215, 40));
        lineEdit_2->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout_3->addWidget(lineEdit_2);

        pushButton_3 = new QPushButton(frame_2);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));

        verticalLayout_3->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(frame_2);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setMaximumSize(QSize(16777215, 16777215));
        QFont font5;
        font5.setPointSize(12);
        font5.setBold(true);
        pushButton_4->setFont(font5);
        pushButton_4->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 255);"));

        verticalLayout_3->addWidget(pushButton_4);

        label_8 = new QLabel(frame_2);
        label_8->setObjectName("label_8");

        verticalLayout_3->addWidget(label_8);

        label_9 = new QLabel(frame_2);
        label_9->setObjectName("label_9");

        verticalLayout_3->addWidget(label_9);

        label_10 = new QLabel(frame_2);
        label_10->setObjectName("label_10");

        verticalLayout_3->addWidget(label_10);


        horizontalLayout_2->addWidget(frame_2);


        horizontalLayout->addWidget(widget);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1231, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "AMS", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Attendance Management System", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Developed by; BLUE PANTHERS", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "WELCOME BACK!", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Sign In To Login In Your Dashboard", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Login/Admin", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Student", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Type Email", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "forgot password?", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label_8->setText(QString());
        label_9->setText(QString());
        label_10->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
