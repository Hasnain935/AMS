/********************************************************************************
** Form generated from reading UI file 'managestudent.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGESTUDENT_H
#define UI_MANAGESTUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_managestudent
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QFrame *frame_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *managestudent)
    {
        if (managestudent->objectName().isEmpty())
            managestudent->setObjectName("managestudent");
        managestudent->resize(800, 600);
        centralwidget = new QWidget(managestudent);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setMaximumSize(QSize(16777215, 80));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(0,53,77);"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(frame);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label);


        verticalLayout->addWidget(frame);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);

        verticalLayout->addWidget(frame_2);

        managestudent->setCentralWidget(centralwidget);
        menubar = new QMenuBar(managestudent);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        managestudent->setMenuBar(menubar);
        statusbar = new QStatusBar(managestudent);
        statusbar->setObjectName("statusbar");
        managestudent->setStatusBar(statusbar);

        retranslateUi(managestudent);

        QMetaObject::connectSlotsByName(managestudent);
    } // setupUi

    void retranslateUi(QMainWindow *managestudent)
    {
        managestudent->setWindowTitle(QCoreApplication::translate("managestudent", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("managestudent", "Manage Student", nullptr));
    } // retranslateUi

};

namespace Ui {
    class managestudent: public Ui_managestudent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGESTUDENT_H
