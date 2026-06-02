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
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *label_8;
    QLabel *label_10;
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
        label_3 = new QLabel(frame_2);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color: rgb(232, 232, 232);"));

        horizontalLayout_2->addWidget(label_3);

        label_6 = new QLabel(frame_2);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color: rgb(232, 232, 232);"));

        horizontalLayout_2->addWidget(label_6);

        label_4 = new QLabel(frame_2);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color: rgb(232, 232, 232);"));

        horizontalLayout_2->addWidget(label_4);

        label_5 = new QLabel(frame_2);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color: rgb(232, 232, 232);"));

        horizontalLayout_2->addWidget(label_5);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_7 = new QLabel(frame_2);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color: rgb(232, 232, 232);"));

        horizontalLayout->addWidget(label_7);

        label_9 = new QLabel(frame_2);
        label_9->setObjectName("label_9");
        label_9->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color: rgb(232, 232, 232);"));

        horizontalLayout->addWidget(label_9);

        label_8 = new QLabel(frame_2);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color: rgb(232, 232, 232);"));

        horizontalLayout->addWidget(label_8);

        label_10 = new QLabel(frame_2);
        label_10->setObjectName("label_10");
        label_10->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color: rgb(232, 232, 232);"));

        horizontalLayout->addWidget(label_10);


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
        label_3->setText(QCoreApplication::translate("mycourses", "TextLabel", nullptr));
        label_6->setText(QCoreApplication::translate("mycourses", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("mycourses", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("mycourses", "TextLabel", nullptr));
        label_7->setText(QCoreApplication::translate("mycourses", "TextLabel", nullptr));
        label_9->setText(QCoreApplication::translate("mycourses", "TextLabel", nullptr));
        label_8->setText(QCoreApplication::translate("mycourses", "TextLabel", nullptr));
        label_10->setText(QCoreApplication::translate("mycourses", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mycourses: public Ui_mycourses {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYCOURSES_H
