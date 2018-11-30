#include "seat.h"
#include "ui_seat.h"

Seat::Seat(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Seat)
{
    ui->setupUi(this);
}

Seat::~Seat()
{
    delete ui;
}
