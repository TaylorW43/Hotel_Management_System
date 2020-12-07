#ifndef CHECKOUT_ADDITIONAL_PAYMENT_H
#define CHECKOUT_ADDITIONAL_PAYMENT_H

#include <QDialog>

#include<payment_method_cash.h>

#include<payment_method_alipay.h>

#include<payment_method_wechat.h>

#include<payment_method_bankcard.h>

#include<payment_method_creditcard.h>

#include<payment_method_other.h>



namespace Ui {
class checkout_additional_payment;
}

class checkout_additional_payment : public QDialog
{
    Q_OBJECT

public:
    explicit checkout_additional_payment(QWidget *parent = 0);
    ~checkout_additional_payment();

    signals:
        void checkin_form();


private slots:
        void on_pushButton_clicked();

        void on_pushButton_2_clicked();

        void on_pushButton_3_clicked();

        void on_pushButton_4_clicked();

        void on_pushButton_5_clicked();

        void on_pushButton_6_clicked();

private:
    Ui::checkout_additional_payment *ui;


    payment_method_cash *sWindow_payment_method_cash;

    payment_method_alipay *sWindow_payment_method_alipay;

    payment_method_wechat *sWindow_payment_method_wechat;

    payment_method_bankcard *sWindow_payment_method_bankcard;

    payment_method_creditcard *sWindow_payment_method_creditcard;

    payment_method_other *sWindow_payment_method_other;

};

#endif // CHECKOUT_ADDITIONAL_PAYMENT_H
