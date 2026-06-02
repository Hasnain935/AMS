#include "student_portal.h"
#include "ui_student_portal.h"

student_portal::student_portal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::student_portal)
{
    ui->setupUi(this);
}

student_portal::~student_portal()
{
    delete ui;
}
