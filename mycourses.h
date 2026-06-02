#ifndef MYCOURSES_H
#define MYCOURSES_H

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
};

#endif // MYCOURSES_H
