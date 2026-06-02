/********************************************************************************
** Form generated from reading UI file 'forgetpasswordbutton.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORGETPASSWORDBUTTON_H
#define UI_FORGETPASSWORDBUTTON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_forgetpasswordbutton
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_14;
    QLineEdit *lineEdit;
    QLabel *label_13;
    QPushButton *pushButton;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;

    void setupUi(QDialog *forgetpasswordbutton)
    {
        if (forgetpasswordbutton->objectName().isEmpty())
            forgetpasswordbutton->setObjectName("forgetpasswordbutton");
        forgetpasswordbutton->resize(728, 499);
        verticalLayout = new QVBoxLayout(forgetpasswordbutton);
        verticalLayout->setObjectName("verticalLayout");
        frame = new QFrame(forgetpasswordbutton);
        frame->setObjectName("frame");
        frame->setMaximumSize(QSize(16777215, 60));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(0,53,77)"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setMaximumSize(QSize(50, 46));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label->setPixmap(QPixmap(QString::fromUtf8("../../../../../Downloads/lock-solid-full.svg")));
        label->setScaledContents(true);

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(label_2);


        verticalLayout->addWidget(frame);

        frame_2 = new QFrame(forgetpasswordbutton);
        frame_2->setObjectName("frame_2");
        frame_2->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_7 = new QLabel(frame_2);
        label_7->setObjectName("label_7");

        horizontalLayout_2->addWidget(label_7);

        label_8 = new QLabel(frame_2);
        label_8->setObjectName("label_8");
        label_8->setMaximumSize(QSize(100, 70));
        label_8->setPixmap(QPixmap(QString::fromUtf8("../../../../../Downloads/envelope-solid-full.svg")));
        label_8->setScaledContents(true);

        horizontalLayout_2->addWidget(label_8);

        label_3 = new QLabel(frame_2);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);


        verticalLayout_2->addLayout(horizontalLayout_2);

        label_4 = new QLabel(frame_2);
        label_4->setObjectName("label_4");
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(frame_2);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(frame_2);
        label_6->setObjectName("label_6");
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_6);

        label_14 = new QLabel(frame_2);
        label_14->setObjectName("label_14");

        verticalLayout_2->addWidget(label_14);

        lineEdit = new QLineEdit(frame_2);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMaximumSize(QSize(16777215, 150));

        verticalLayout_2->addWidget(lineEdit);

        label_13 = new QLabel(frame_2);
        label_13->setObjectName("label_13");

        verticalLayout_2->addWidget(label_13);

        pushButton = new QPushButton(frame_2);
        pushButton->setObjectName("pushButton");
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(40, 49, 175);color:rgb(255, 255, 255);\n"
"border-radius:10px;"));
        pushButton->setIconSize(QSize(20, 20));

        verticalLayout_2->addWidget(pushButton);

        label_10 = new QLabel(frame_2);
        label_10->setObjectName("label_10");

        verticalLayout_2->addWidget(label_10);

        label_11 = new QLabel(frame_2);
        label_11->setObjectName("label_11");

        verticalLayout_2->addWidget(label_11);

        label_12 = new QLabel(frame_2);
        label_12->setObjectName("label_12");

        verticalLayout_2->addWidget(label_12);


        verticalLayout->addWidget(frame_2);


        retranslateUi(forgetpasswordbutton);

        QMetaObject::connectSlotsByName(forgetpasswordbutton);
    } // setupUi

    void retranslateUi(QDialog *forgetpasswordbutton)
    {
        forgetpasswordbutton->setWindowTitle(QCoreApplication::translate("forgetpasswordbutton", "Dialog", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("forgetpasswordbutton", "Forget Password", nullptr));
        label_7->setText(QString());
        label_8->setText(QString());
        label_3->setText(QString());
        label_4->setText(QCoreApplication::translate("forgetpasswordbutton", "Reset Your Password", nullptr));
        label_5->setText(QCoreApplication::translate("forgetpasswordbutton", "Enter your Email Address and we will send you a link on your a link on your email", nullptr));
        label_6->setText(QCoreApplication::translate("forgetpasswordbutton", "-----------------------------------------------------------------------------------------------------------------", nullptr));
        label_14->setText(QCoreApplication::translate("forgetpasswordbutton", "Email", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("forgetpasswordbutton", "enter your email", nullptr));
        label_13->setText(QString());
        pushButton->setText(QCoreApplication::translate("forgetpasswordbutton", "Submit", nullptr));
        label_10->setText(QString());
        label_11->setText(QString());
        label_12->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class forgetpasswordbutton: public Ui_forgetpasswordbutton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGETPASSWORDBUTTON_H
