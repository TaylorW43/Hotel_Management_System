#ifndef ROOM_MANAGEMENT_H
#define ROOM_MANAGEMENT_H

#include <QDialog>

namespace Ui {
class room_management;
}

class room_management : public QDialog
{
    Q_OBJECT

public:
    explicit room_management(QWidget *parent = 0);
    ~room_management();


signals:
    void management_login_complete();



private slots:
    void on_pushButton_2_clicked();

private:
    Ui::room_management *ui;
};

#endif // ROOM_MANAGEMENT_H
