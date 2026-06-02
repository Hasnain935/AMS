#ifndef ATTENDANCEREPORT_H
#define ATTENDANCEREPORT_H

#include <QMainWindow>

namespace Ui {
class attendancereport;
}

class attendancereport : public QMainWindow
{
    Q_OBJECT

public:
    explicit attendancereport(QWidget *parent = nullptr);
    ~attendancereport();

private:
    Ui::attendancereport *ui;
};

#endif // ATTENDANCEREPORT_H
