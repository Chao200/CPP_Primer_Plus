#include <iostream>
#include <string>
#include "golf.h"

golf::golf(const char *name, int hc)
{
    strcpy(fullname, name);
    handicap = hc;
}

golf::golf()
{
    std::cout << "Input fullname: ";
    std::cin.getline(fullname, Len);
    // if (strcmp(fullname, "") == 0) return 0;

    std::cout << "Input handicap: ";
    std::cin >> handicap;
    std::cin.get();
    // return 1;
}

void 
golf::sethandicap(int hc)
{
    handicap = hc;
}

void 
golf::showgolf() const
{
    std::cout << "fullname: " << fullname
    << ", " << "handicap: " << handicap << std::endl;
}