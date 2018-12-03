#include "registervip.h"
#include "common.h"
#include "ui_registervip.h"

registerVIP::registerVIP(bool &flag, QString &phone, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registerVIP)
{
    f = &flag;
    p = &phone;
    ui->setupUi(this);
}

registerVIP::~registerVIP()
{
    delete ui;
}

bool registerVIP::regist(QString n, QString p)
{
    QSqlQuery query(db);
    QString sql =QString("insert vip(name,phonenumber,consumption) values('%1','%2',0)").arg(n,p);

    bool f = query.exec(sql);
    return f;
}

void registerVIP::on_buttonBox_accepted()
{
    QString n = ui->name->text();
    *p = ui->phone->text();

    Login l;
    if( l.check_phone(*p)  == false )
    {
        *f = false;
        return ;
    }

    if( regist(n,*p) )
    {
        *f = true;
        QMessageBox::information(NULL, tr("Register"), tr("注册成功！"));
    }
    else
    {
        *f = false;
        QMessageBox::information(NULL, tr("Register"), tr("注册失败！"));
    }

}
