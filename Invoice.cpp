#include "Invoice.h"

Invoice::Invoice() {

}

Invoice::Invoice(int hrs, int min, int sec){
    Time time(hrs, min, sec);
    purchase_time = time;
}

ostream & operator << (ostream &out,Invoice &c) {
    out << c.purchase_time.get_hrs() << ":" << c.purchase_time.get_min() << ":" << c.purchase_time.get_sec() << " \n";
    return out;
}