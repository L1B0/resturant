#ifndef CHECKCOUNT_H
#define CHECKCOUNT_H

#include <QDialog>
#include <QDebug>
#include <QTableWidget>
#include <QLatin1Literal>
#include <QAbstractButton>
#include "common.h"

namespace Ui {
class checkCount;
}

class checkCount : public QDialog
{
    Q_OBJECT

public:
    explicit checkCount(QString phone, int tableN, int peopleNum, QTableWidget *payTable, int sumPrice, bool &flag, QWidget *parent = 0);
    ~checkCount();

private slots:
    void on_ac_clicked();

    void on_reject_clicked();

    void on_textEdit_textChanged();

private:
    bool *f;
    int tN,pN;
    QString p;
    QTableWidget *pT;
    float sP;
    void mycheck();
    Ui::checkCount *ui;
};

#endif // CHECKCOUNT_H
