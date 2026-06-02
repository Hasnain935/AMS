#ifndef MANAGESTUDENT_H
#define MANAGESTUDENT_H

#include <QMainWindow>

namespace Ui {
class managestudent;
}

class managestudent : public QMainWindow
{
    Q_OBJECT

public:
    explicit managestudent(QWidget *parent = nullptr);
    ~managestudent();

private:
    Ui::managestudent *ui;
};

#endif // MANAGESTUDENT_H
