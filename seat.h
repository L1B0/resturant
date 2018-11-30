#ifndef SEAT_H
#define SEAT_H

#include <QWidget>

namespace Ui {
class Seat;
}

class Seat : public QWidget
{
    Q_OBJECT

public:
    explicit Seat(QWidget *parent = 0);
    ~Seat();

private:
    Ui::Seat *ui;
};

#endif // SEAT_H
