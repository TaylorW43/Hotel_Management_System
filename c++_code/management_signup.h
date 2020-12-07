#ifndef MANAGEMENT_SIGNUP_H
#define MANAGEMENT_SIGNUP_H

#include <QDialog>

#include<management_signup_complete.h>


namespace Ui {
class management_signup;
}

class management_signup : public QDialog
{
    Q_OBJECT

public:
    explicit management_signup(QWidget *parent = 0);
    ~management_signup();


signals:
    void management_login_signup();


private slots:
    void on_pushButton_clicked();

private:
    Ui::management_signup *ui;

    management_signup_complete *sWindow_management_signup_complete;

};

#endif // MANAGEMENT_SIGNUP_H
