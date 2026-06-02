#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include<QString>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_4_clicked()
{
    QString email = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();

    if(email == "std@gmail.com" && password == "123"){
        hide();
        dashboard = new Dashboard(this);
        dashboard->show();
    }else if(email == "hasnainh1608@gmail.com" && password == "12345"){
        hide();
        admin_dash_2 = new admin_dashboard(this);
        admin_dash_2->show();
    }else{
        QMessageBox::critical(this,"error","invalid pass or email");
    }
}


void MainWindow::on_pushButton_3_clicked()
{
    forget = new forgetpasswordbutton(this);
    forget->show();
}

