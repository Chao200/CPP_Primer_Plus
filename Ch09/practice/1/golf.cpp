#include <iostream>
#include <string>
#include "golf.h"

void setgolf(golf &g, const char *name, int hc)
{
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf &g)
{
    std::cout << "Input fullname: ";
    std::cin.getline(g.fullname, Len);
    if (strcmp(g.fullname, "") == 0) return 0;

    std::cout << "Input handicap: ";
    std::cin >> g.handicap;
    std::cin.get();
    return 1;
}

void handicap(golf &g, int hc)
{
    g.handicap = hc;
}

void showgolf(const golf &g)
{
    std::cout << "g.fullname: " << g.fullname
    << ", " << "g.handicap: " << g.handicap << std::endl;
}