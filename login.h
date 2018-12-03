#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
    QSqlDatabase connect_mysql(const char*username,const char *passwd,const char *database,const char*mysqlip);
    bool check_phone(QString s);
    bool check_num(QString s);
    bool VerifyNumber(QString str);
    int mallocTable(int num);
    ~Login();

private slots:
    void on_loginPush_clicked();

    void on_pushButton_2_clicked();

private:

    Ui::Login *ui;
};

#endif // LOGIN_H
