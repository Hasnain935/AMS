/********************************************************************************
** Form generated from reading UI file 'student_attendance.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENT_ATTENDANCE_H
#define UI_STUDENT_ATTENDANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Student_Attendance_2
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QWidget *Student_Attendance;
    QVBoxLayout *verticalLayout_3;
    QTableWidget *attendancetable;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Student_Attendance_2)
    {
        if (Student_Attendance_2->objectName().isEmpty())
            Student_Attendance_2->setObjectName("Student_Attendance_2");
        Student_Attendance_2->resize(1312, 695);
        centralwidget = new QWidget(Student_Attendance_2);
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
        font.setPointSize(22);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(212, 212, 212);"));
        label->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignHCenter);

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);

        verticalLayout_2->addWidget(label_2);


        verticalLayout->addWidget(frame);

        Student_Attendance = new QWidget(centralwidget);
        Student_Attendance->setObjectName("Student_Attendance");
        Student_Attendance->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        verticalLayout_3 = new QVBoxLayout(Student_Attendance);
        verticalLayout_3->setObjectName("verticalLayout_3");
        attendancetable = new QTableWidget(Student_Attendance);
        attendancetable->setObjectName("attendancetable");

        verticalLayout_3->addWidget(attendancetable);


        verticalLayout->addWidget(Student_Attendance);

        Student_Attendance_2->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Student_Attendance_2);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1312, 26));
        Student_Attendance_2->setMenuBar(menubar);
        statusbar = new QStatusBar(Student_Attendance_2);
        statusbar->setObjectName("statusbar");
        Student_Attendance_2->setStatusBar(statusbar);

        retranslateUi(Student_Attendance_2);

        QMetaObject::connectSlotsByName(Student_Attendance_2);
    } // setupUi

    void retranslateUi(QMainWindow *Student_Attendance_2)
    {
        Student_Attendance_2->setWindowTitle(QCoreApplication::translate("Student_Attendance_2", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("Student_Attendance_2", "Student Attendance", nullptr));
        label_2->setText(QCoreApplication::translate("Student_Attendance_2", "Here's You Can Check Your Attendance", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Student_Attendance_2: public Ui_Student_Attendance_2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_ATTENDANCE_H
