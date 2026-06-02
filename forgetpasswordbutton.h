#ifndef FORGETPASSWORDBUTTON_H
#define FORGETPASSWORDBUTTON_H

#include <QDialog>

namespace Ui {
class forgetpasswordbutton;
}

class forgetpasswordbutton : public QDialog
{
    Q_OBJECT

public:
    explicit forgetpasswordbutton(QWidget *parent = nullptr);
    ~forgetpasswordbutton();

private slots:
    void on_pushButton_clicked();

private:
    Ui::forgetpasswordbutton *ui;
    forgetpasswordbutton *forget;
};

#endif // FORGETPASSWORDBUTTON_H
