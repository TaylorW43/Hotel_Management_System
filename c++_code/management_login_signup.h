#ifndef MANAGEMENT_LOGIN_SIGNUP_H
#define MANAGEMENT_LOGIN_SIGNUP_H

#include <QDialog>

#include<management_login_complete.h>

#include<management_signup.h>

namespace Ui {
class management_login_signup;
}

class management_login_signup : public QDialog
{
    Q_OBJECT

public:
    explicit management_login_signup(QWidget *parent = 0);
    ~management_login_signup();


signals:
    void welcome_page();


private slots:
    void on_management_login_clicked();

    void on_management_signup_clicked();

private:
    Ui::management_login_signup *ui;


    management_login_complete *sWindow_management_login_complete;

    management_signup *sWindow_management_signup;

};

#endif // MANAGEMENT_LOGIN_SIGNUP_H
