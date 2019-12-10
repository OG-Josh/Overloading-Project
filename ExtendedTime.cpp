#include "ExtendedTime.h"

std::string enum_to_string( TimeZone timezone1 )
{
    switch(timezone1){
        case 0:
            return "PACIFIC";
        case 1:
            return  "MOUNTAIN";
        case 2:
            return  "CENTRAL";
        case 3:
            return "EASTERN";
    }
}

ExtendedTime::ExtendedTime() {

}

ExtendedTime::ExtendedTime(int hrs, int min, int sec, TimeZone timezone) : Time(hrs, min, sec){
    time_zone = timezone;
}


ostream & operator << (ostream &out, ExtendedTime &c)
{
    out << c.get_hrs() << ":"  << c.get_min() << ":" << c.get_sec() << " " << enum_to_string(c.time_zone) << " \n";
    return out;
}