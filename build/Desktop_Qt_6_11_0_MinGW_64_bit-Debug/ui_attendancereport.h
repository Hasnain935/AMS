/********************************************************************************
** Form generated from reading UI file 'attendancereport.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATTENDANCEREPORT_H
#define UI_ATTENDANCEREPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_attendancereport
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *attendancereport)
    {
        if (attendancereport->objectName().isEmpty())
            attendancereport->setObjectName("attendancereport");
        attendancereport->resize(800, 600);
        centralwidget = new QWidget(attendancereport);
        centralwidget->setObjectName("centralwidget");
        attendancereport->setCentralWidget(centralwidget);
        menubar = new QMenuBar(attendancereport);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        attendancereport->setMenuBar(menubar);
        statusbar = new QStatusBar(attendancereport);
        statusbar->setObjectName("statusbar");
        attendancereport->setStatusBar(statusbar);

        retranslateUi(attendancereport);

        QMetaObject::connectSlotsByName(attendancereport);
    } // setupUi

    void retranslateUi(QMainWindow *attendancereport)
    {
        attendancereport->setWindowTitle(QCoreApplication::translate("attendancereport", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class attendancereport: public Ui_attendancereport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATTENDANCEREPORT_H
