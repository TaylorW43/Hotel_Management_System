#ifndef CUSTOMER_RESERVATION_FORM_H
#define CUSTOMER_RESERVATION_FORM_H

#include <QDialog>


#include<customer_reservation_form_complete.h>

#include<payment_method_alipay.h>

#include<payment_method_wechat.h>

#include<payment_method_bankcard.h>

#include<payment_method_creditcard.h>


namespace Ui {
class customer_reservation_form;
}

class customer_reservation_form : public QDialog
{
    Q_OBJECT

public:
    explicit customer_reservation_form(QWidget *parent = 0);
    ~customer_reservation_form();


    signals:
        void customer_login_complete();

private slots:
        void on_pushButton_clicked();

        void on_alipay_clicked();

        void on_wechat_clicked();

        void on_bank_card_clicked();

        void on_credit_clicked();

private:
    Ui::customer_reservation_form *ui;

    customer_reservation_form_complete *sWindow_customer_reservation_form_complete;

    payment_method_alipay *sWindow_payment_method_alipay;

    payment_method_wechat *sWindow_payment_method_wechat;

    payment_method_bankcard *sWindow_payment_method_bankcard;

    payment_method_creditcard *sWindow_payment_method_creditcard;

};

#endif // CUSTOMER_RESERVATION_FORM_H
