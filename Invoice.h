#include "Time.h"
#include <iostream>
using namespace std;

#ifndef INVOICE_H
#define INVOICE_H

class Invoice
{
public:
    Invoice();
    Invoice(int hrs, int min, int sec);
    friend ostream & operator << (ostream &out, Invoice &c);
private:
    Time purchase_time;
};

#endif //INVOICE_H
