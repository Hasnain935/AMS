#include "forgetpasswordbutton.h"
#include "ui_forgetpasswordbutton.h"
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QJsonObject>
#include <QJsonDocument>
#include<QMessageBox>
forgetpasswordbutton::forgetpasswordbutton(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::forgetpasswordbutton)
{
    ui->setupUi(this);
}

forgetpasswordbutton::~forgetpasswordbutton()
{
    delete ui;
}

void forgetpasswordbutton::on_pushButton_clicked()
{
    QString email= ui->lineEdit->text();
        QNetworkAccessManager *manager = new QNetworkAccessManager(this);

        QUrl url("https://identitytoolkit.googleapis.com/v1/accounts:sendOobCode?key=AIzaSyA-5jIvv5jnBUmDp6yHTNkQx7mpXXDL0hY");

        QNetworkRequest request(url);
        request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

        QJsonObject json;
        json["requestType"] = "PASSWORD_RESET";
        json["email"] = email;

        QNetworkReply *reply = manager->post(request, QJsonDocument(json).toJson());

        connect(reply, &QNetworkReply::finished, [=]()
                {
                    if(reply->error() == QNetworkReply::NoError)
                    {
                        qDebug() << "Email sent successfully!";
                        QMessageBox::information(this, "Success", "Reset email sent!");
                    }
                    else
                    {
                        qDebug() << "Error:" << reply->readAll();
                        QMessageBox::critical(this, "Error", "Email not sent!");
                    }

                    reply->deleteLater();
                });

}

