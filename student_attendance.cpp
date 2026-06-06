#include "student_attendance.h"
#include "ui_student_attendance.h"
#include <QJsonDocument>
#include <QJsonObject>
#include <QNetworkRequest>
#include <QTableWidgetItem>
#include <QDebug>
#include <QNetworkAccessManager> // <-- Yeh hona zaroori hai
#include <QNetworkReply>

Student_Attendance::Student_Attendance(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Student_Attendance_2)
{
    ui->setupUi(this);

    // 1. Network Manager ko banaya
    networkmanager = new QNetworkAccessManager(this);
    connect(networkmanager, &QNetworkAccessManager::finished, this, &Student_Attendance::onAttendanceReceived);

    // 2. Table ke columns set kiye
    ui->attendancetable->setColumnCount(2);
    ui->attendancetable->setHorizontalHeaderLabels({"Record Type", "Status (P/A)"});
    ui->attendancetable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    // 3. 🔥 AAPKI DATABASE KA EXACT URL PATH:
    QString url = "https://ams-project-ae5d4-default-rtdb.firebaseio.com/students/attendance_records.json";

    QNetworkRequest request((QUrl(url)));
    networkmanager->get(request); // Firebase se data mangwane ki request bhej di
}

Student_Attendance::~Student_Attendance()
{
    delete ui;
}

// 4. 🔥 JAB FIREBASE SE DATA WAPAS AAYEGA TOH YEH FUNCTION CHALEGA:
void Student_Attendance::onAttendanceReceived(QNetworkReply *reply)
{
    if (reply->error() == QNetworkReply::NoError) {
        QByteArray responseData = reply->readAll();

        QJsonDocument jsonDoc = QJsonDocument::fromJson(responseData);
        QJsonObject mainObject = jsonDoc.object();

        // Table ko pehle saaf kiya
        ui->attendancetable->setRowCount(0);

        // Aapki image ke mutabiq agar direct "status" likha hua hai
        if (mainObject.contains("status")) {
            QString status = mainObject.value("status").toString();

            // Table mein row daali
            int row = ui->attendancetable->rowCount();
            ui->attendancetable->insertRow(row);

            // Table ke andar data show karwa diya
            ui->attendancetable->setItem(row, 0, new QTableWidgetItem("Current Attendance"));
            ui->attendancetable->setItem(row, 1, new QTableWidgetItem(status));
        }
    }
    else {
        qDebug() << "Error fetching data:" << reply->errorString();
    }
    reply->deleteLater();
}