#include "managestudent.h"
#include "ui_managestudent.h"

managestudent::managestudent(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::managestudent)
{
    ui->setupUi(this);
}

managestudent::~managestudent()
{
    delete ui;
}
