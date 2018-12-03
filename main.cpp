#include "mainwindow.h"
#include "common.h"
#include "login.h"
#include <QApplication>

QSqlDatabase db;
bool vip;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Login l;
    l.setWindowTitle("Login");
    l.show();
    return a.exec();
}
