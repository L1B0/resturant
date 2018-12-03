#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets> //important
#include <QAction>


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

private:
    Ui::MainWindow *ui;
    QString phone;
    int people,tableNumber;

private slots:
    void beVIP();
    void allMenu();
    void chuanFood();
    void xiangFood();
    void yueFood();
    void on_squareCounts_clicked();
};

#endif // MAINWINDOW_H
