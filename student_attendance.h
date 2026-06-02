#ifndef STUDENT_ATTENDANCE_H
#define STUDENT_ATTENDANCE_H

#include <QMainWindow>

namespace Ui {
class Student_Attendance_2;
}

class Student_Attendance : public QMainWindow
{
    Q_OBJECT

public:
    explicit Student_Attendance(QWidget *parent = nullptr);
    ~Student_Attendance();

private:
    Ui::Student_Attendance_2 *ui;
};

#endif // STUDENT_ATTENDANCE_H
