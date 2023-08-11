// decltype

#include <iostream>
using namespace std;

long f(int);

int main()
{
    // // case 1
    // double x = 1.1;
    // double y = 2.2;
    // double& rx = x;
    // const double* pd;
    // decltype(x) u;    // u is double
    // decltype(rx) v = y;  // v is double&
    // decltype(pd) w;     // w is const double*

    // // case 2
    // decltype(f(3)) m;   // m is long

    // // case 3
    // double xx = 3.3;
    // decltype((xx)) refxx = xx;  // refxx is double&
    // decltype(xx) p = xx;    // p is double

    // // case 4
    // int j = 3;
    // int& k = j;
    // int& n = j;
    // decltype(j+6) i1;   // i1 is int
    // decltype(100L) i2;  // i2 is long
    // decltype(k+n) i3;   // i3 is int, not int&

}