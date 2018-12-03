#include "mainwindow.h"
#include "common.h"
#include "registervip.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QString phoneNumber,int peopleNum,int tableNum,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    people = peopleNum;
    phone = phoneNumber;
    tableNumber = 1; //sql select

    setTitle();
    QMenu *vip = menuBar()->addMenu(tr("&会员"));
    QAction *bevip = new QAction(tr("&成为会员"), this);
    bevip->setStatusTip(tr("Be a vip."));
    vip->addAction(bevip);
    connect(bevip, SIGNAL(triggered()), this, SLOT(beVIP()));

    QMenu *menu = menuBar()->addMenu(tr("&菜单"));
    QAction *allMenu = new QAction(tr("&全部"), this);
    menu->addAction(allMenu);
    QAction *chuan = new QAction(tr("&川菜"), this);
    menu->addAction(chuan);
    QAction *xiang = new QAction(tr("&湘菜"), this);
    menu->addAction(xiang);
    QAction *yue = new QAction(tr("&粤菜"), this);
    menu->addAction(yue);
    connect(allMenu, SIGNAL(triggered()), this, SLOT(allMenu()));
    connect(chuan, SIGNAL(triggered()), this, SLOT(chuanFood()));
    connect(xiang, SIGNAL(triggered()), this, SLOT(xiangFood()));
    connect(yue, SIGNAL(triggered()), this, SLOT(yueFood()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::isVIP(QString phone)
{
    QSqlQuery query(db);
    QString sql =QString("select * from vip where phoneNumber='%1'").arg(phone);
    query.exec(sql);
    if(query.size() == 0) return false;
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
    //QMessageBox::information(NULL, tr("VIP"), tr("您已成为会员！"));
    bool flag;
    registerVIP r(flag,phone);
    r.setWindowTitle("Register");
    r.exec();
    if( flag ) setTitle();
    return ;
}

void MainWindow::allMenu()
{

}

void MainWindow::chuanFood()
{

}

void MainWindow::xiangFood()
{

}

void MainWindow::yueFood()
{

}

void MainWindow::on_squareCounts_clicked()
{
    QSqlQuery query(db);
    QString sql =QString("update restable set flag=0 where id=%1").arg(tableNumber);
    bool f = query.exec(sql);
    printf("%d\n",f);

    //sql insert into orderform,salesrecord
}
