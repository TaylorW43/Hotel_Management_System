#include "checkin_form_complete.h"
#include "ui_checkin_form_complete.h"

checkin_form_complete::checkin_form_complete(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::checkin_form_complete)
{
    ui->setupUi(this);
}

checkin_form_complete::~checkin_form_complete()
{
    delete ui;
}
