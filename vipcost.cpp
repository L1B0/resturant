#include "vipcost.h"
#include "ui_vipcost.h"

vipCost::vipCost(QString phone,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::vipCost)
{
    ui->setupUi(this);
    p = phone;
    showCostInfo();
}

vipCost::~vipCost()
{
    delete ui;
}

void vipCost::showCostInfo()
{
    QSqlQuery *query = new QSqlQuery(db);
    QString s = QString("select * from orderform where phonenumber='%1' order by time").arg(p);
    bool f = query->exec(s);
    if( !f ) QMessageBox::information(NULL, tr("Error"), s);

    while(query->next())
    {
        int rowCount = ui->vipcost->rowCount();
        ui->vipcost->insertRow(rowCount);

        ui->vipcost->setItem(rowCount,0,new QTableWidgetItem( query->value(4).toDate().toString() ));
        ui->vipcost->setItem(rowCount,1,new QTableWidgetItem( query->value(0).toString() ));
        ui->vipcost->setItem(rowCount,2,new QTableWidgetItem( query->value(3).toString() ));
        ui->vipcost->setItem(rowCount,3,new QTableWidgetItem( query->value(5).toString() ));
        ui->vipcost->setItem(rowCount,4,new QTableWidgetItem( query->value(1).toString() ));
    }
    return ;
}
