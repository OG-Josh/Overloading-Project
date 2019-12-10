#ifndef EXTENDEDTIME_H
#define EXTENDEDTIME_H

#include "Time.h"
#include <iostream>
using namespace std;

enum TimeZone{
    PACIFIC,
    MOUNTAIN,
    CENTRAL,
    EASTERN
};

class ExtendedTime : public Time
{
public:
    ExtendedTime();
    ExtendedTime(int hrs, int min, int sec, TimeZone timezone);
    friend ostream & operator << (ostream &out, ExtendedTime &c);
private:
    TimeZone time_zone;
};
#endif //EXTENDEDTIME_H