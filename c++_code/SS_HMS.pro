#-------------------------------------------------
#
# Project created by QtCreator 2018-06-03T12:44:55
#
#-------------------------------------------------

QT       += core gui

QT+=sql


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SS_HMS
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        welcome_page.cpp \
    customer_login_signup.cpp \
    customer_login_complete.cpp \
    customer_signup.cpp \
    customer_signup_complete.cpp \
    management_login_signup.cpp \
    management_login_complete.cpp \
    management_signup.cpp \
    management_signup_complete.cpp \
    room_management.cpp \
    checkin_form.cpp \
    payment_method_cash.cpp \
    payment_method_alipay.cpp \
    payment_method_wechat.cpp \
    payment_method_bankcard.cpp \
    payment_method_creditcard.cpp \
    payment_method_other.cpp \
    checkin_form_complete.cpp \
    checkout_form.cpp \
    checkout_additional_payment.cpp \
    checkout_form_complete.cpp \
    query_existing_customer.cpp \
    customer_reservation_form.cpp \
    customer_reservation_form_complete.cpp \
    customer_my_order.cpp

HEADERS += \
        welcome_page.h \
    customer_login_signup.h \
    customer_login_complete.h \
    customer_signup.h \
    customer_signup_complete.h \
    management_login_signup.h \
    management_login_complete.h \
    management_signup.h \
    management_signup_complete.h \
    room_management.h \
    checkin_form.h \
    payment_method_cash.h \
    payment_method_alipay.h \
    payment_method_wechat.h \
    payment_method_bankcard.h \
    payment_method_creditcard.h \
    payment_method_other.h \
    checkin_form_complete.h \
    checkout_form.h \
    checkout_additional_payment.h \
    checkout_form_complete.h \
    query_existing_customer.h \
    customer_reservation_form.h \
    customer_reservation_form_complete.h \
    customer_my_order.h

FORMS += \
        welcome_page.ui \
    customer_login_signup.ui \
    customer_login_complete.ui \
    customer_signup.ui \
    customer_signup_complete.ui \
    management_login_signup.ui \
    management_login_complete.ui \
    management_signup.ui \
    management_signup_complete.ui \
    room_management.ui \
    checkin_form.ui \
    payment_method_cash.ui \
    payment_method_alipay.ui \
    payment_method_wechat.ui \
    payment_method_bankcard.ui \
    payment_method_creditcard.ui \
    payment_method_other.ui \
    checkin_form_complete.ui \
    checkout_form.ui \
    checkout_additional_payment.ui \
    checkout_form_complete.ui \
    query_existing_customer.ui \
    customer_reservation_form.ui \
    customer_reservation_form_complete.ui \
    customer_my_order.ui
