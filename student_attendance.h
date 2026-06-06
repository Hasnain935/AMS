#ifndef STUDENT_ATTENDANCE_H
#define STUDENT_ATTENDANCE_H

#include <QMainWindow>
#include<QNetworkAccessManager>
namespace Ui {
class Student_Attendance_2;
}

class Student_Attendance : public QMainWindow
{
    Q_OBJECT

public:
    explicit Student_Attendance(QWidget *parent = nullptr);
    ~Student_Attendance();
    void onAttendanceReceived(QNetworkReply *reply);

private:
    Ui::Student_Attendance_2 *ui;
    QNetworkAccessManager *networkmanager;
};

#endif // STUDENT_ATTENDANCE_H
