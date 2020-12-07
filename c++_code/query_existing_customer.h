#ifndef QUERY_EXISTING_CUSTOMER_H
#define QUERY_EXISTING_CUSTOMER_H

#include <QDialog>


namespace Ui {
class query_existing_customer;
}

class query_existing_customer : public QDialog
{
    Q_OBJECT

public:
    explicit query_existing_customer(QWidget *parent = 0);
    ~query_existing_customer();


    signals:
        void management_login_complete();


private slots:
        void on_pushButton_clicked();

private:
    Ui::query_existing_customer *ui;

};

#endif // QUERY_EXISTING_CUSTOMER_H
