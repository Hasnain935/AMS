#include "mycourses.h"
#include "ui_mycourses.h"
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrl>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QLabel>
#include <QDebug>
mycourses::mycourses(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mycourses)
{
    ui->setupUi(this);
    QNetworkAccessManager *manager = new QNetworkAccessManager(this);

    // 2. Firebase URL (student1 ka poora data mangwa rahe hain)
    QString url = "https://ams-project-ae5d4-default-rtdb.firebaseio.com/students/student1.json";
    QNetworkRequest request((QUrl(url)));

    // 3. Request send karein
    QNetworkReply *reply = manager->get(request);

    // 4. Jab data aa jaye toh handle karne ke liye slot connect karein
    connect(reply, &QNetworkReply::finished, this, [this, reply]() {
        this->onCoursesDataReceived(reply);
    });
}

mycourses::~mycourses()
{
    delete ui;
}
void mycourses::onCoursesDataReceived(QNetworkReply *reply)
{
    if (!reply) return;

    if (reply->error() == QNetworkReply::NoError) {
        QByteArray responseData = reply->readAll();
        QJsonDocument jsonDoc = QJsonDocument::fromJson(responseData);
        QJsonObject jsonObj = jsonDoc.object();

        // 🔥 Firebase se "courses" ka array nikalna
        if (jsonObj.contains("courses") && jsonObj["courses"].isArray()) {
            QJsonArray coursesArray = jsonObj["courses"].toArray();

            // ⚠️ AGAR DESIGNER ME NAAM ALAG HAIN, TOH YAHAN APNE VALE NAAM LIKHEIN
            // Yeh aapke un 8 rounded cards ke andar wale TextLabels ke naam hain
            QLabel* courseLabels[] = {
                ui->lblcourse1, ui->lblcourse2, ui->lblcourse3, ui->lblcourse4,
                ui->lblcourse5, ui->lblcourse6, ui->lblcourse7, ui->lblcourse8
            };

            // Loop chalayein aur cards par subjects ke naam set karein
            for (int i = 0; i < coursesArray.size() && i < 8; ++i) {
                if (courseLabels[i]) {
                    QString courseName = coursesArray[i].toString();
                    courseLabels[i]->setText(courseName);
                }
            }
        }
        qDebug() << "My Courses Page Loaded Successfully!";
    }
    else {
        qDebug() << "Firebase Error on Courses Page:" << reply->errorString();
    }

    reply->deleteLater();
}
