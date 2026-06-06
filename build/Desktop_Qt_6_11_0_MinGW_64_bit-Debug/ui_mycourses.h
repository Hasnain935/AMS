/********************************************************************************
** Form generated from reading UI file 'mycourses.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYCOURSES_H
#define UI_MYCOURSES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mycourses
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblcourse1;
    QLabel *lblcourse2;
    QLabel *lblcourse3;
    QLabel *lblcourse4;
    QHBoxLayout *horizontalLayout;
    QLabel *lblcourse5;
    QLabel *lblcourse6;
    QLabel *lblcourse7;
    QLabel *lblcourse8;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *mycourses)
    {
        if (mycourses->objectName().isEmpty())
            mycourses->setObjectName("mycourses");
        mycourses->resize(1311, 691);
        centralwidget = new QWidget(mycourses);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setMaximumSize(QSize(16777215, 100));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(0,53,77)"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(frame);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(30);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:rgb(200, 200, 200)"));
        label->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignHCenter);

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);

        verticalLayout_2->addWidget(label_2);


        verticalLayout->addWidget(frame);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lblcourse1 = new QLabel(frame_2);
        lblcourse1->setObjectName("lblcourse1");
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        lblcourse1->setFont(font1);
        lblcourse1->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color: rgb(232, 232, 232);"));
        lblcourse1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_2->addWidget(lblcourse1);

        lblcourse2 = new QLabel(frame_2);
        lblcourse2->setObjectName("lblcourse2");
        lblcourse2->setFont(font1);
        lblcourse2->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color: rgb(232, 232, 232);"));
        lblcourse2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_2->addWidget(lblcourse2);

        lblcourse3 = new QLabel(frame_2);
        lblcourse3->setObjectName("lblcourse3");
        lblcourse3->setFont(font1);
        lblcourse3->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color: rgb(232, 232, 232);"));
        lblcourse3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_2->addWidget(lblcourse3);

        lblcourse4 = new QLabel(frame_2);
        lblcourse4->setObjectName("lblcourse4");
        lblcourse4->setFont(font1);
        lblcourse4->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color: rgb(232, 232, 232);"));
        lblcourse4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_2->addWidget(lblcourse4);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lblcourse5 = new QLabel(frame_2);
        lblcourse5->setObjectName("lblcourse5");
        lblcourse5->setFont(font1);
        lblcourse5->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color: rgb(232, 232, 232);"));
        lblcourse5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(lblcourse5);

        lblcourse6 = new QLabel(frame_2);
        lblcourse6->setObjectName("lblcourse6");
        lblcourse6->setFont(font1);
        lblcourse6->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color: rgb(232, 232, 232);"));
        lblcourse6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(lblcourse6);

        lblcourse7 = new QLabel(frame_2);
        lblcourse7->setObjectName("lblcourse7");
        lblcourse7->setFont(font1);
        lblcourse7->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color: rgb(232, 232, 232);"));
        lblcourse7->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(lblcourse7);

        lblcourse8 = new QLabel(frame_2);
        lblcourse8->setObjectName("lblcourse8");
        lblcourse8->setFont(font1);
        lblcourse8->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color: rgb(232, 232, 232);"));
        lblcourse8->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(lblcourse8);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout->addWidget(frame_2);

        mycourses->setCentralWidget(centralwidget);
        menubar = new QMenuBar(mycourses);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1311, 26));
        mycourses->setMenuBar(menubar);
        statusbar = new QStatusBar(mycourses);
        statusbar->setObjectName("statusbar");
        mycourses->setStatusBar(statusbar);

        retranslateUi(mycourses);

        QMetaObject::connectSlotsByName(mycourses);
    } // setupUi

    void retranslateUi(QMainWindow *mycourses)
    {
        mycourses->setWindowTitle(QCoreApplication::translate("mycourses", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("mycourses", "My Courses", nullptr));
        label_2->setText(QCoreApplication::translate("mycourses", "Here you can check your courses", nullptr));
        lblcourse1->setText(QString());
        lblcourse2->setText(QString());
        lblcourse3->setText(QString());
        lblcourse4->setText(QString());
        lblcourse5->setText(QString());
        lblcourse6->setText(QString());
        lblcourse7->setText(QString());
        lblcourse8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class mycourses: public Ui_mycourses {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYCOURSES_H
