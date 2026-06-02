#include "attendancereport.h"
#include "ui_attendancereport.h"

attendancereport::attendancereport(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::attendancereport)
{
    ui->setupUi(this);
}

attendancereport::~attendancereport()
{
    delete ui;
}
