#include "studentportal.h"
#include "ui_studentportal.h"
#include <QHeaderView>
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonArray>


#include <QString>
#include <QDebug>
#include <QListWidget>
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



void Dashboard::fetchdashboarddata(){
    QString url = "https://ams-project-ae5d4-default-rtdb.firebaseio.com/students/student1.json";
    QNetworkRequest request((QUrl(url)));
    networkManager->get(request);
}


void Dashboard::onFirebaseDataReceived(QNetworkReply *reply)
{
    if (!reply) return;

    if (reply->error() == QNetworkReply::NoError) {
        QByteArray responseData = reply->readAll();
        QJsonDocument jsonDoc = QJsonDocument::fromJson(responseData);
        QJsonObject jsonObj = jsonDoc.object();

        // 1. Single Values (CGPA, Attendance, Assignments)
        double cgpa = jsonObj["cgpa"].toDouble();
        int assignments = jsonObj["assignments"].toInt();
        int attendance = jsonObj["attendance"].toInt();

        ui->lblCGPAValue->setText(QString::number(cgpa, 'f', 2));
        ui->lblassignmentcount->setText(QString::number(assignments));
        ui->lblattendancecount->setText(QString("%1%").arg(attendance));

        // 2. TIME TABLE (For QTableWidget)
        if (jsonObj.contains("timetable") && jsonObj["timetable"].isArray()) {
            QJsonArray timetableArray = jsonObj["timetable"].toArray();
            ui->timetablewidget->setColumnCount(4);
            ui->timetablewidget->setRowCount(timetableArray.size());

            QStringList headers;
            headers << "Day" << "Subject" << "Time" << "Room";
            ui->timetablewidget->setHorizontalHeaderLabels(headers);

            for (int i = 0; i < timetableArray.size(); ++i) {
                QJsonObject classSlot = timetableArray[i].toObject();
                ui->timetablewidget->setItem(i, 0, new QTableWidgetItem(classSlot["day"].toString()));
                ui->timetablewidget->setItem(i, 1, new QTableWidgetItem(classSlot["subject"].toString()));
                ui->timetablewidget->setItem(i, 2, new QTableWidgetItem(classSlot["time"].toString()));
                ui->timetablewidget->setItem(i, 3, new QTableWidgetItem(classSlot["room"].toString()));
            }
            ui->timetablewidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        }

        qDebug() << "Dashboard Data & Timetable Loaded Successfully!";
    }
    else {
        qDebug() << "Dashboard Firebase Error:" << reply->errorString();
    }

    reply->deleteLater();
}