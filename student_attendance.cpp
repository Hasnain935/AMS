#include "student_attendance.h"
#include "ui_student_attendance.h"
Student_Attendance::Student_Attendance(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Student_Attendance_2)
{
    ui->setupUi(this);
    ui->attendancetable->setColumnCount(4);
    ui->attendancetable->setHorizontalHeaderLabels({"Course Code","Subjects","Attended/Total","Percentage"});
    ui->attendancetable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->attendancetable->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

Student_Attendance::~Student_Attendance()
{
    delete ui;
}
