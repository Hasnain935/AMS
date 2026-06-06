#include "admin_dashboard.h"
#include "ui_admin_dashboard.h"
#include<QString>
#include<QFile>
#include<QFileDialog>
#include<QMessageBox>
#include<attendancereport.h>
#include<managestudent.h>
#include<QNetworkRequest>
#include<QJsonObject>
#include<QNetworkAccessManager>
#include<QDebug>
#include<QNetworkReply>
admin_dashboard::admin_dashboard(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::admin_dashboard)


{
    ui->setupUi(this);

    // 1. Pehle hamesha networkManager ko initialize (new) karna hai:
    networkManager = new QNetworkAccessManager(this);

    // 2. Uske BAAD signal connect karna hai:
    connect(networkManager, &QNetworkAccessManager::finished, this, [](QNetworkReply* reply) {
        if (reply->error() == QNetworkReply::NoError) {
            qDebug() << "Firebase Admin Success: Data successfully pushed to cloud!";
        } else {
            qDebug() << "Firebase Admin Error Structure:" << reply->readAll();
            qDebug() << "Firebase Admin Error String:" << reply->errorString();
        }
        reply->deleteLater();
    });

    // 3. Baqi ka table ka kaam:
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
    int totalrow = ui->tableWidget->rowCount();

    // Agar table khali hai toh aage na chale
    if(totalrow == 0) {
        QMessageBox::warning(this, "Warning", "Table is empty!");
        return;
    }

    for(int i = 0 ; i < totalrow ; i++){
        // Aapke code ke mutabiq table se data uthana
        QString NAME = ui->tableWidget->model()->index(i,0).data().toString();
        QString ROLLNO = ui->tableWidget->model()->index(i,1).data().toString();
        QString ATTENDANCE = ui->tableWidget->model()->index(i,2).data().toString(); // Yeh Date ya Subject ho sakta hai
        QString PRESENT = ui->tableWidget->model()->index(i,3).data().toString(); // Present/Absent status

        // Agar ATTENDANCE wale column mein date nahi hai, toh auto-date ke liye use karein:
        // #include <QDate> karke: QString currentDate = QDate::currentDate().toString("yyyy-MM-dd");

        // Firebase URL: Hum Roll Number aur Date/Attendance ko path bana rahe hain
        QString firebaseUrl = "https://your-db-name.firebaseio.com/attendance/" + ROLLNO + "/" + ATTENDANCE + ".json";

        QNetworkRequest request((QUrl(firebaseUrl)));
        request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

        // JSON Object banana taake Name aur Status save ho sakein
        QJsonObject json;
        json["name"] = NAME;
        json["status"] = PRESENT; // Jo column 3 mein save hai (P/A ya Present)

        QJsonDocument doc(json);
        QByteArray data = doc.toJson();

        // Firebase par bhej dena
        networkManager->put(request, data);
    }

    QMessageBox::information(this, "Success", "Data saved to Cloud successfully");

    // Aapka purana counters wala function call
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
