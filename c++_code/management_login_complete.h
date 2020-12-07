#ifndef MANAGEMENT_LOGIN_COMPLETE_H
#define MANAGEMENT_LOGIN_COMPLETE_H

#include <QDialog>

#include<room_management.h>

#include<checkin_form.h>

#include<checkout_form.h>

#include<query_existing_customer.h>


namespace Ui {
class management_login_complete;
}

class management_login_complete : public QDialog
{
    Q_OBJECT

public:
    explicit management_login_complete(QWidget *parent = 0);
    ~management_login_complete();


signals:
    void management_login_signup();

private slots:
    void on_room_management_clicked();

    void on_check_in_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::management_login_complete *ui;

    room_management *sWindow_room_management;

    checkin_form *sWindow_checkin_form;

    checkout_form *sWindow_checkout_form;

    query_existing_customer *sWindow_query_existing_customer;

};

#endif // MANAGEMENT_LOGIN_COMPLETE_H
