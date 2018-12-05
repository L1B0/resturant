#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets> //important
#include <QAction>
#include "common.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QString phoneNumber,int peopleNum,int tableNum,QWidget *parent = 0);
    ~MainWindow();
    void setTitle();
    bool isVIP(QString phone);
    QSqlQuery* myexec(QString s);
    void selectFood(QString s,bool flag);

private:
    Ui::MainWindow *ui;
    QString phone;
    int people,tableNumber;
    bool paied;
    void closeEvent( QCloseEvent *e );

private slots:
    void beVIP();
    void vipInformation();
    void vipCostInfo();
    void allMenu();
    void chuanFood();
    void xiangFood();
    void yueFood();
    void drinkFood();
    void mainFood();
    void coolFood();
    void soupFood();
    void on_squareCounts_clicked();
    void on_oriMenu_cellDoubleClicked(int row, int column);
    void on_clientMenu_cellDoubleClicked(int row, int column);
};

#endif // MAINWINDOW_H
