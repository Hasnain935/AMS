#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<studentportal.h>
#include<admin_dashboard.h>
#include<forgetpasswordbutton.h>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private slots:
   // void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
    Dashboard *dashboard;
    admin_dashboard *admin_dash_2;
    forgetpasswordbutton *forget;
};
#endif // MAINWINDOW_H
