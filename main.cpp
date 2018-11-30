#include "mainwindow.h"
#include "common.h"
#include "login.h"
#include <QApplication>

QSqlDatabase db;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Login l;
    l.show();
    return a.exec();
}
