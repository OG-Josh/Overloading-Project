#ifndef TIME_H
#define TIME_H

class Time
{
public:
    Time();
    Time(int hrs, int min, int sec);
    int get_hrs();
    int get_min();
    int get_sec();
private:
    int hours;
    int minutes;
    int seconds;
};

#endif //TIME_H
