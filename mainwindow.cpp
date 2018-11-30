#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QString phoneNumber,int peopleNum,QWidget *parent) :
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
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::isVIP(QString phone)
{
    //sql select
    return false;
}

void MainWindow::setTitle()
{
    if( isVIP(phone) ) this->setWindowTitle(QString("用户%1(会员)  %2 号桌    %3 人用餐").arg(phone,QString::number(tableNumber),QString::number(people)));
    else
        this->setWindowTitle(QString("用户%1(非会员)  %2 号桌    %3 人用餐").arg(phone,QString::number(tableNumber),QString::number(people)));
}

void MainWindow::beVIP()
{
    QMessageBox::information(NULL, tr("VIP"), tr("您已成为会员！"));
    this->setWindowTitle(QString("用户%1(会员)  %2 号桌    %3 人用餐").arg(phone,QString::number(tableNumber),QString::number(people)));
    //sql insert

}
