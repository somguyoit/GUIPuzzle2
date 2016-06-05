#include "jose_clock.h"
#include <iostream>
#include <QtDebug>
using std::cout;


Jose_Clock::Jose_Clock(QObject * parent):QObject(parent), time(), timer()
{

    connect(&timer, SIGNAL(timeout()), this, SLOT(tick()));
}

void Jose_Clock::init()
{
    timer.start(1000);
    QString current = time.toString("h:m:s ap");
    cout << current.length();
    emit minute(time.toString("h:m:s ap"));
}

void Jose_Clock::tick()
{
    emit minute(time.toString("h:m:s ap"));
}
