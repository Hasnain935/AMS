#ifndef ADMIN_DASHBOARD_H
#define ADMIN_DASHBOARD_H
#include<attendancereport.h>
#include<managestudent.h>
#include <QMainWindow>
#include <QMainWindow>
#include <QNetworkAccessManager> // <-- Cloud data ke liye zaroori header
#include <QJsonDocument>
#include <QJsonObject>
namespace Ui {
class admin_dashboard;
}

class admin_dashboard : public QMainWindow
{
    Q_OBJECT

public:
    explicit admin_dashboard(QWidget *parent = nullptr);
    ~admin_dashboard();

private slots:
    void on_pushButton_5_clicked();

    void on_savechanges_clicked();

private:
    Ui::admin_dashboard *ui;
    void studentsdata();
    void updatedashboarddata();
    managestudent *m_student;
    void updateDashboardCounters();
    QNetworkAccessManager *networkManager;

};

#endif // ADMIN_DASHBOARD_H
