#ifndef PAYMENT_METHOD_CREDITCARD_H
#define PAYMENT_METHOD_CREDITCARD_H

#include <QDialog>

namespace Ui {
class payment_method_creditcard;
}

class payment_method_creditcard : public QDialog
{
    Q_OBJECT

public:
    explicit payment_method_creditcard(QWidget *parent = 0);
    ~payment_method_creditcard();

    signals:
        void checkin_form();

        signals:
            void checkout_additional_payment();

            signals:
                void customer_reservation_form();


private:
    Ui::payment_method_creditcard *ui;
};

#endif // PAYMENT_METHOD_CREDITCARD_H
