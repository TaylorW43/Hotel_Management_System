#ifndef CUSTOMER_RESERVATION_FORM_COMPLETE_H
#define CUSTOMER_RESERVATION_FORM_COMPLETE_H

#include <QDialog>

namespace Ui {
class customer_reservation_form_complete;
}

class customer_reservation_form_complete : public QDialog
{
    Q_OBJECT

public:
    explicit customer_reservation_form_complete(QWidget *parent = 0);
    ~customer_reservation_form_complete();

    signals:
        void customer_reservation_form();

private:
    Ui::customer_reservation_form_complete *ui;
};

#endif // CUSTOMER_RESERVATION_FORM_COMPLETE_H
