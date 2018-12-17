#include "vipinfoo.h"
#include "ui_vipinfoo.h"

vipInfoo::vipInfoo(QString phone,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::vipInfoo)
{
    p = phone;
    ui->setupUi(this);
    showVIP();
}

vipInfoo::~vipInfoo()
{
    delete ui;
}

void vipInfoo::showVIP()
{
    QSqlQuery *query = new QSqlQuery(db);
    QString s = QString("select * from vip where phonenumber='%1'").arg(p);
    bool f = query->exec(s);
    if( !f ) QMessageBox::information(NULL, tr("Error"), s);

    while(query->next())
    {
        QString n = query->value(1).toString(), l = query->value(2).toString(), s = query->value(3).toString(), p = query->value(0).toString();
        qDebug() << n << p << s << l;
        ui->name->setText(QString("姓名: %1").arg(n));
        //qDebug() << '1';
        ui->phone->setText(QString("手机号: %1").arg(p) );
        //qDebug() << '1';
        ui->sumPrice->setText(QString("消费总额: %1").arg(s) );
        //qDebug() << '1';
        ui->level->setText(QString("会员等级: %1").arg(l) );
    }
    return ;
}
