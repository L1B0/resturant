#ifndef VIPCOST_H
#define VIPCOST_H

#include <QDialog>
#include <QDate>
#include "common.h"

namespace Ui {
class vipCost;
}

class vipCost : public QDialog
{
    Q_OBJECT

public:
    explicit vipCost(QString p, QWidget *parent = 0);
    ~vipCost();

private:
    QString p;
    Ui::vipCost *ui;
    void showCostInfo();
};

#endif // VIPCOST_H
