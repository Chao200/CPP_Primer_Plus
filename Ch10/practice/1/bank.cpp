#include <iostream>
#include "bank.h"

bank::bank()
{
    name = "no name";
    account = "no account";
    money = 0.0;
}

bank::bank(std::string& n, std::string& ac, double m)
{
    name = n;
    account = ac;
    money = m;
}
    
void
bank::show() const
{
    std::cout << "name: " << name 
        << ", account: " << account 
        << ", money: " << money << "￥ yuan\n";
}

void
bank::setMoney(const double m)
{
    if (m < 0)
    {
        std::cout << "The money can't be negative.\n";
        return;
    }
    money += m;
}

void
bank::getMoney(const double m)
{
    if (m > money)
    {
        std::cout << "You don't have enough money.\n";
        return;
    }
    money -=m;
}