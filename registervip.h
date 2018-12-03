#ifndef REGISTERVIP_H
#define REGISTERVIP_H

#include <QDialog>
#include "login.h"
#include "common.h"

namespace Ui {
class registerVIP;
}

class registerVIP : public QDialog
{
    Q_OBJECT

public:
    explicit registerVIP(bool &f, QString &phone, QWidget *parent = 0);
    ~registerVIP();

private slots:
    void on_buttonBox_accepted();

private:
    bool *f;
    QString *p;
    bool regist(QString n,QString p);
    Ui::registerVIP *ui;
};

#endif // REGISTERVIP_H
