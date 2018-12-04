#include "mainwindow.h"
#include "registervip.h"
#include "vipinfoo.h"
#include "vipcost.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QString phoneNumber,int peopleNum,int tableNum,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    people = peopleNum;
    phone = phoneNumber;
    tableNumber = tableNum; //sql select

    setTitle();
    QMenu *vip = menuBar()->addMenu(tr("&会员"));
    QAction *bevip = new QAction(tr("&成为会员"), this);
    bevip->setStatusTip(tr("Be a vip."));
    vip->addAction(bevip);
    QAction *vipInfo = new QAction(tr("&会员信息"), this);
    vipInfo->setStatusTip(tr("VIP info."));
    vip->addAction(vipInfo);
    QAction *vipCost = new QAction(tr("&消费记录"), this);
    vipCost->setStatusTip(tr("VIP cost info."));
    vip->addAction(vipCost);
    connect(bevip, SIGNAL(triggered()), this, SLOT(beVIP()));
    connect(vipInfo, SIGNAL(triggered()), this, SLOT(vipInformation()));
    connect(vipCost, SIGNAL(triggered()), this, SLOT(vipCostInfo()));

    QMenu *menu = menuBar()->addMenu(tr("&菜单"));
    QAction *allMenu = new QAction(tr("&全部"), this);
    menu->addAction(allMenu);
    QAction *chuan = new QAction(tr("&川菜"), this);
    menu->addAction(chuan);
    QAction *xiang = new QAction(tr("&湘菜"), this);
    menu->addAction(xiang);
    QAction *yue = new QAction(tr("&粤菜"), this);
    menu->addAction(yue);
    QAction *drink = new QAction(tr("&酒水"), this);
    menu->addAction(drink);
    QAction *mainf = new QAction(tr("&主食"), this);
    menu->addAction(mainf);
    QAction *coolf = new QAction(tr("&凉菜"), this);
    menu->addAction(coolf);
    QAction *soup = new QAction(tr("&汤类"), this);
    menu->addAction(soup);

    connect(allMenu, SIGNAL(triggered()), this, SLOT(allMenu()));
    connect(chuan, SIGNAL(triggered()), this, SLOT(chuanFood()));
    connect(xiang, SIGNAL(triggered()), this, SLOT(xiangFood()));
    connect(yue, SIGNAL(triggered()), this, SLOT(yueFood()));
    connect(drink, SIGNAL(triggered()), this, SLOT(drinkFood()));
    connect(mainf, SIGNAL(triggered()), this, SLOT(mainFood()));
    connect(coolf, SIGNAL(triggered()), this, SLOT(coolFood()));
    connect(soup, SIGNAL(triggered()), this, SLOT(soupFood()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::closeEvent(QCloseEvent *e)
{
    QString sql =QString("update restable set isused=0 where id=%1").arg(tableNumber);
    QSqlQuery* query = myexec(sql);
    QMessageBox::information(NULL, tr("Quit"), tr("欢迎下次光临:-)"));
    return ;
}

bool MainWindow::isVIP(QString phone)
{
    QString sql =QString("select * from vip where phoneNumber='%1'").arg(phone);
    QSqlQuery *query = myexec(sql);

    if(query->size() == 0) return false;
    else return true;
}

void MainWindow::setTitle()
{
    if( isVIP(phone) ) this->setWindowTitle(QString("用户%1(会员)  %2 号桌    %3 人用餐").arg(phone,QString::number(tableNumber),QString::number(people)));
    else
        this->setWindowTitle(QString("用户%1(非会员)  %2 号桌    %3 人用餐").arg(phone,QString::number(tableNumber),QString::number(people)));
}

void MainWindow::beVIP()
{
    if( isVIP(phone) )
    {
        QMessageBox::information(NULL, tr("VIP"), tr("您已是会员！"));
        return ;
    }

    bool flag;
    registerVIP r(flag,phone);
    r.setWindowTitle("Register");
    r.exec();
    if( flag ) setTitle();
    return ;
}

void MainWindow::vipInformation()
{
    if(!isVIP(phone)) QMessageBox::information(NULL, tr("提醒"), tr("您还不是会员~"));
    else
    {
        vipInfoo v(phone);
        v.setWindowTitle("会员信息");
        v.exec();
    }
}

void MainWindow::vipCostInfo()
{
    if(!isVIP(phone)) QMessageBox::information(NULL, tr("提醒"), tr("您还不是会员~"));
    else
    {
        vipCost v(phone);
        v.setWindowTitle("消费记录");
        v.exec();
    }
}

QSqlQuery* MainWindow::myexec(QString s)
{
    QSqlQuery *query = new QSqlQuery(db);
    bool f = query->exec(s);
    if( !f ) QMessageBox::information(NULL, tr("Error"), s);

    return query;
}

void MainWindow::selectFood(QString s, bool flag)
{
    for(int i = ui->oriMenu->rowCount();i > 0;i--) ui->oriMenu->removeRow(0);

    QString sql;

    if(flag) sql = QString("select * from menu order by id");
    else sql = QString("select * from menu where category='%1' order by id").arg(s);

    QSqlQuery *query = myexec(sql);

    while(query->next())
    {
        int rowCount = ui->oriMenu->rowCount();
        ui->oriMenu->insertRow(rowCount);
        for(int i=0;i<5;i++)
        {
            qDebug() << query->value(i).toString();

            ui->oriMenu->setItem(rowCount,i,new QTableWidgetItem( query->value(i).toString() ));
        }
    }
    return ;
}

void MainWindow::allMenu()
{
    selectFood(QString('233'),true);
    return ;
}

void MainWindow::chuanFood()
{
    selectFood(QStringLiteral("川菜"),false);
    return ;
}

void MainWindow::xiangFood()
{
    selectFood(QStringLiteral("湘菜"),false);
    return ;
}

void MainWindow::yueFood()
{
    selectFood(QStringLiteral("粤菜"),false);
    return ;
}

void MainWindow::drinkFood()
{
    selectFood(QStringLiteral("酒水"),false);
    return ;
}

void MainWindow::mainFood()
{
    selectFood(QStringLiteral("主食"),false);
    return ;
}

void MainWindow::coolFood()
{
    selectFood(QStringLiteral("凉菜"),false);
    return ;
}

void MainWindow::soupFood()
{
    selectFood(QStringLiteral("汤类"),false);
    return ;
}

void MainWindow::on_squareCounts_clicked()
{
    QString sql =QString("update restable set isused=0 where id=%1").arg(tableNumber);
    QSqlQuery* query = myexec(sql);

    //sql insert into orderform,salesrecord
}

void MainWindow::on_oriMenu_cellDoubleClicked(int row, int column)
{
    QMessageBox::information(NULL, tr("提醒"), tr("加菜~"));

    int i;
    bool flag = false;
    for(i=0;i<ui->clientMenu->rowCount();i++)
    {
        if( ui->clientMenu->item(i,1)->text() == ui->oriMenu->item(row,1)->text() )
        {
            flag = true;
            break;
        }
    }

    if( flag )
    {
        int nowNum = ui->clientMenu->item(i,3)->text().toInt(), nowPrice = ui->clientMenu->item(i,4)->text().toInt();
        int newNum = nowNum+1, newPrice = nowPrice/nowNum + nowPrice;
        ui->clientMenu->setItem(i,3,new QTableWidgetItem(QString("%1").arg(newNum)));
        ui->clientMenu->setItem(i,4,new QTableWidgetItem(QString("%1").arg(newPrice)));
    }
    else
    {
        int rowCount = ui->clientMenu->rowCount();
        ui->clientMenu->insertRow(rowCount);

        ui->clientMenu->setItem(rowCount,0,new QTableWidgetItem(ui->oriMenu->item(row,0)->text()));
        ui->clientMenu->setItem(rowCount,1,new QTableWidgetItem(ui->oriMenu->item(row,1)->text()));
        ui->clientMenu->setItem(rowCount,2,new QTableWidgetItem(ui->oriMenu->item(row,4)->text()));
        ui->clientMenu->setItem(rowCount,3,new QTableWidgetItem(QString("1")));
        ui->clientMenu->setItem(rowCount,4,new QTableWidgetItem(ui->oriMenu->item(row,2)->text()));
    }
    return ;
}

void MainWindow::on_clientMenu_cellDoubleClicked(int row, int column)
{
    QMessageBox::information(NULL, tr("提醒"), tr("减菜~"));

    int nowNum = ui->clientMenu->item(row,3)->text().toInt(), nowPrice = ui->clientMenu->item(row,4)->text().toInt();
    int newNum = nowNum-1, newPrice = nowPrice-nowPrice/nowNum;

    if( newNum == 0 )
    {
        ui->clientMenu->removeRow(row);
    }
    else
    {
        ui->clientMenu->setItem(row,3,new QTableWidgetItem(QString("%1").arg(newNum)));
        ui->clientMenu->setItem(row,4,new QTableWidgetItem(QString("%1").arg(newPrice)));
    }
    return ;
}
