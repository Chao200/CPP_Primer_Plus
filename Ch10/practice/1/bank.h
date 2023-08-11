#ifndef BANK_H_
#define BANK_H_

#include <iostream>
class bank
{
private:
    std::string name;
    std::string account;
    double money;
public:
    bank();
    bank(std::string& n, std::string& ac, double m);
    void show() const;
    void setMoney(const double m);
    void getMoney(double m);
};

#endif