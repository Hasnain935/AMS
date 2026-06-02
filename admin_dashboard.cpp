#include "admin_dashboard.h"
#include "ui_admin_dashboard.h"
#include<QString>
#include<QFile>
#include<QFileDialog>
#include<QMessageBox>
#include<attendancereport.h>
#include<managestudent.h>
admin_dashboard::admin_dashboard(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::admin_dashboard)

{
    ui->setupUi(this);

    ui->tableWidget->setColumnCount(4);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList{"Name","ROLL NO","ATTENDANCE","P/A"});
}

admin_dashboard::~admin_dashboard()
{
    delete ui;
}


void admin_dashboard::on_pushButton_5_clicked()
{
    m_student = new managestudent(this);
    m_student->show();
}


void admin_dashboard::on_savechanges_clicked()
{
    QString filename = "attendance_data.csv";
    QFile file(filename);

    if(!file.open(QIODevice::WriteOnly | QIODevice::Text)){
        QMessageBox::critical(this,"error","this file is not open");
}
    QTextStream  out(&file);

out<<"Name,ROLL NO,ATTENDANCE,P/A\n";

    int totalrow = ui->tableWidget->rowCount();
          for(int i = 0 ; i < totalrow ; i++){
            QString NAME = ui->tableWidget->model()->index(i,0).data().toString();
            QString ROLLNO= ui->tableWidget->model()->index(i,1).data().toString();
            QString ATTENDANCE = ui->tableWidget->model()->index(i,2).data().toString();
            QString PRESENT = ui->tableWidget->model()->index(i,3).data().toString();
            QString ABSENT = ui->tableWidget->model()->index(i,4).data().toString();

            out<<NAME<<","<<ROLLNO<<","<<ATTENDANCE<<","<<PRESENT<<"\n";

}
file.close();
QMessageBox::information(this,"Success","Data save successfully");
updateDashboardCounters();
}
void admin_dashboard:: updateDashboardCounters(){
    int totalrows=ui->tableWidget->rowCount();
    int presentcount = 0;
    int absentcount = 0;

    for (int i = 0 ; i < totalrows ; i++){
     QString status =  ui->tableWidget->model()->index(i,3).data().toString().toLower().trimmed();

        if(status == "present" || status == "p"){
         presentcount++;
        }else if(status == "absent" || status == "a"){
        absentcount++;
    }
    }
    ui->absentbutton->setText(QString::number(absentcount));
    ui->presentbutton->setText(QString::number(presentcount));
    ui->totalstd->setText(QString::number(totalrows));
}
