#ifndef PAYMENT_METHOD_ALIPAY_H
#define PAYMENT_METHOD_ALIPAY_H

#include <QDialog>

namespace Ui {
class payment_method_alipay;
}

class payment_method_alipay : public QDialog
{
    Q_OBJECT

public:
    explicit payment_method_alipay(QWidget *parent = 0);
    ~payment_method_alipay();

    signals:
        void checkin_form();

        signals:
            void checkout_additional_payment();

            signals:
                void customer_reservation_form();


private:
    Ui::payment_method_alipay *ui;
};

#endif // PAYMENT_METHOD_ALIPAY_H
