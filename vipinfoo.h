#ifndef VIPINFOO_H
#define VIPINFOO_H

#include <QDialog>
#include "common.h"

namespace Ui {
class vipInfoo;
}

class vipInfoo : public QDialog
{
    Q_OBJECT

public:
    explicit vipInfoo(QString phone, QWidget *parent = 0);
    ~vipInfoo();

private:
    QString p;
    void showVIP();
    Ui::vipInfoo *ui;
};

#endif // VIPINFOO_H
