#include <iostream>
#include "4.h"

int main()
{
    using namespace SALES;
    const double ar[3] = {1.1, 2.2, 3.3};
    Sales sa[2];
    setSales(sa[0]);
    setSales(sa[1], ar, 3);
    showSales(sa[0]);
    showSales(sa[1]);

    return 0;
}