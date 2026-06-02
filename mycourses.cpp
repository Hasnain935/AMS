#include "mycourses.h"
#include "ui_mycourses.h"

mycourses::mycourses(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mycourses)
{
    ui->setupUi(this);
}

mycourses::~mycourses()
{
    delete ui;
}
