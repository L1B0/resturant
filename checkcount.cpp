#include "checkcount.h"
#include "ui_checkcount.h"

checkCount::checkCount(QString phone, int tableN, QTableWidget *payTable, int sumPrice, bool &flag, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::checkCount)
{
    ui->setupUi(this);
    f = &flag;
    QImage im;
    im.load("/media/l1b0/软件工程_日常/大三上/数据库原理与设计/大作业/resturant/pay.jpg");
    ui->payCode->setPixmap(QPixmap::fromImage(im));

    //qDebug() << payTable->rowCount();
    p = phone;
    tN = tableN;
    pT = payTable;
    sP = sumPrice;
    mycheck();
}

checkCount::~checkCount()
{
    delete ui;
}

void checkCount::mycheck()
{
    qDebug() << pT->rowCount();

    QSqlQuery query(db);
    QString sql =QString("select rank from vip where phonenumber='%1'").arg(p);
    query.exec(sql);

    int vipRank=0;
    while(query.next())
    {
        vipRank = query.value(0).toInt();
    }
    qDebug() << vipRank;

    ui->vipTitle->setText(QString("您的会员等级为:%1 享受%2折优惠！").arg(vipRank).arg(10-vipRank));
    ui->sumPrice->setText(QString("消费金额: %1").arg(sP));
    sP = (float)(sP)*(10-vipRank)/10;
    ui->realPrice->setText(QString("应收: %1").arg(sP));

    for(int i=0;i<pT->rowCount();i++)
    {
        int rowCount = ui->clientMenu->rowCount();
        ui->clientMenu->insertRow(rowCount);

        for(int j=0;j<pT->columnCount();j++)
            ui->clientMenu->setItem(i,j,new QTableWidgetItem(pT->item(i,j)->text()));
    }
    return ;
}

void checkCount::on_ac_clicked()
{
    QSqlQuery query(db);
    QString sql =QString("select max(ordernumber) from orderform");
    query.exec(sql);
    query.next();
    int nowOrderId = query.value(0).toInt()+1;
    qDebug() << nowOrderId ;

    QString note = ui->textEdit->toPlainText();
    qDebug() << "beizhu: " << note;
    //gaigaigai!!!
    sql = QString("insert into orderform(ordernumber,notes,phonenumber,money,tableid) values('%1','%2','%3',%4,%5)").arg(nowOrderId).arg(note).arg(p).arg(sP).arg(tN);
    bool ff = query.exec(sql);
    qDebug() << "insert order : " << ff;

    for(int i=0;i<ui->clientMenu->rowCount();i++)
    {
        int times = ui->clientMenu->item(i,3)->text().toInt();
        int mId = ui->clientMenu->item(i,0)->text().toInt();
        sql = QString("insert into waitinline(ordernumber,menuid,num) values('%1',%2)").arg(nowOrderId).arg(mId).arg(times);
        query.exec(sql);
    }

    QMessageBox::information(NULL, tr("Attention"), tr("支付成功,已下单！"));
    *f = true;
    this->close();
}


void checkCount::on_reject_clicked()
{
    QMessageBox::information(NULL, tr("Attention"), tr("取消支付!"));
    *f = false;
    this->close();
}

void checkCount::on_textEdit_textChanged()
{
    QString textContent = ui->textEdit->toPlainText();
    //qDebug() << textContent;

    int length = textContent.count();

    int maxLength = 100; // 最大字符数

    if(length > maxLength) {
        QTextCursor cursor = ui->textEdit->textCursor();
        cursor.movePosition(QTextCursor::End);
        if(cursor.hasSelection()) {
            cursor.clearSelection();
        }
        cursor.deletePreviousChar();
        //设置当前的光标为更改后的光标
        ui->textEdit->setTextCursor(cursor);
    }

    length = ui->textEdit->toPlainText().count();
    //ui->sizeLabel->setText(QString("%1/%2").arg(MAX_SIZE-length).arg(MAX_SIZE));
}
