#ifndef CUSTOMER_MY_ORDER_H
#define CUSTOMER_MY_ORDER_H

#include <QDialog>

namespace Ui {
class customer_my_order;
}

class customer_my_order : public QDialog
{
    Q_OBJECT

public:
    explicit customer_my_order(QWidget *parent = 0);
    ~customer_my_order();

private slots:
    void on_pushButton_clicked();

    signals:
        void customer_login_complete();

private:
    Ui::customer_my_order *ui;
};

#endif // CUSTOMER_MY_ORDER_H
