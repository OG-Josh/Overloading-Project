#include "Time.h"

Time::Time(){
}

Time::Time(int hrs, int min, int sec) {
    hours = hrs;
    minutes = min;
    seconds = sec;
}

int Time::get_hrs() {
    return hours;
}

int Time::get_min() {
    return minutes;
}

int Time::get_sec(){
    return seconds;
}