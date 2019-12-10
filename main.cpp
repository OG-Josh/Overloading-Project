#include <iostream>
#include "ExtendedTime.h"
#include "Invoice.h"

int main() {

    ExtendedTime time(11,50,55,PACIFIC);
    cout << time;

    Invoice invoice(11,20,12);
    cout << invoice;
    return 0;


}