#include <iostream>
#include "bank.h"

int main()
{
    bank b1{};
    std::string name = "fu";
    std::string account = "chao";
    bank b2{name, account, 10000.123};

    b1.show();
    b2.show();
    b2.getMoney(345.5);
    b2.show();
    b2.setMoney(663.4);
    b2.show();
}