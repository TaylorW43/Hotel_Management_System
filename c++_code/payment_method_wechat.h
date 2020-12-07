#ifndef PAYMENT_METHOD_WECHAT_H
#define PAYMENT_METHOD_WECHAT_H

#include <QDialog>

namespace Ui {
class payment_method_wechat;
}

class payment_method_wechat : public QDialog
{
    Q_OBJECT

public:
    explicit payment_method_wechat(QWidget *parent = 0);
    ~payment_method_wechat();

    signals:
        void checkin_form();

        signals:
            void checkout_additional_payment();

            signals:
                void customer_reservation_form();
          

private:
    Ui::payment_method_wechat *ui;
};

#endif // PAYMENT_METHOD_WECHAT_H
