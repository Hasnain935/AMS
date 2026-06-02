#include "studentportal.h"
#include "ui_studentportal.h"
#include <QHeaderView> // Header resizing ke liye zaroori hai

Dashboard::Dashboard(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Dashboard)
{
    ui->setupUi(this);

    ui->timetablewidget->setColumnCount(5);
    ui->timetablewidget->setRowCount(8);

    ui->timetablewidget->setHorizontalHeaderLabels({"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"});
    ui->timetablewidget->setVerticalHeaderLabels({"09:00 AM", "10:00 AM", "11:00 AM", "12:00 PM", "01:00 PM", "02:00 PM", "03:00 PM", "04:00 PM"});

    ui->timetablewidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    networkManager = new QNetworkAccessManager(this);

    connect(networkManager, &QNetworkAccessManager::finished, this, &Dashboard::onFirebaseDataReceived);
    fetchdashboarddata();
}

Dashboard::~Dashboard()
{
    delete ui;
}

void Dashboard::on_pushButton_3_clicked()
{
    student_attendance = new Student_Attendance(this);
    student_attendance->show();
}

void Dashboard::on_pushButton_4_clicked()
{
    my_courses = new mycourses(this);
    my_courses->show();
}
// Firebase se data mangwane ka function
void Dashboard::fetchdashboarddata(){
    QString url = "https://ams-project-ae5d4-default-rtdb.firebaseio.com/students/student1.json";
    QNetworkRequest request((QUrl(url)));
    networkManager->get(request);
}

// FIX: Yeh poora function aapke code mein gayab tha, isko add kar diya hai
void Dashboard::onFirebaseDataReceived(QNetworkReply *reply)
{
    if (reply->error() == QNetworkReply::NoError) {
        QByteArray responseData = reply->readAll();
        QJsonDocument jsonDoc = QJsonDocument::fromJson(responseData);
        QJsonObject jsonObj = jsonDoc.object();

        // Firebase se data nikala
        double cgpa = jsonObj["cgpa"].toDouble();
        int assignments = jsonObj["assignments"].toInt();
        int attendance = jsonObj["attendance"].toInt();

        // UI Labels par data set kiya
        // NOTE: Agar aapke designer mein labels ke naam alag hain, toh yahan change kar lein
        ui->lblCGPAValue->setText(QString::number(cgpa, 'f', 2));
        ui->lblassignmentcount->setText(QString::number(assignments));
        ui->lblattendancecount->setText(QString("%1%").arg(attendance));

        qDebug() << "Firebase Data Successfully Loaded on Dashboard!";
    }
    else {
        qDebug() << "Firebase Error:" << reply->errorString();
    }

    reply->deleteLater();
}