#ifndef MYCOURSES_H
#define MYCOURSES_H
#include<QNetworkReply>
#include <QMainWindow>

namespace Ui {
class mycourses;
}

class mycourses : public QMainWindow
{
    Q_OBJECT

public:
    explicit mycourses(QWidget *parent = nullptr);
    ~mycourses();

private:
    Ui::mycourses *ui;
    void onCoursesDataReceived(QNetworkReply *reply);
};

#endif // MYCOURSES_H
