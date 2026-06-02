#ifndef STUDENTPORTAL_H
#define STUDENTPORTAL_H
#include<student_attendance.h>
#include<mycourses.h>
#include <QMainWindow>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QJsonDocument>
#include <QJsonObject>
#include <QDebug>
namespace Ui {
class Dashboard;
}

class Dashboard : public QMainWindow
{
    Q_OBJECT

public:
    explicit Dashboard(QWidget *parent = nullptr);
    ~Dashboard();
    void fetchdashboarddata();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void onFirebaseDataReceived(QNetworkReply *reply);

private:
    Ui::Dashboard *ui;
    Student_Attendance *student_attendance;
    mycourses *my_courses;
    QNetworkAccessManager *networkManager;
};

#endif // STUDENTPORTAL_H
