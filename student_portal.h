#ifndef STUDENT_PORTAL_H
#define STUDENT_PORTAL_H

#include <QMainWindow>

namespace Ui {
class student_portal;
}

class student_portal : public QMainWindow
{
    Q_OBJECT

public:
    explicit student_portal(QWidget *parent = nullptr);
    ~student_portal();

private:
    Ui::student_portal *ui;
};

#endif // STUDENT_PORTAL_H
