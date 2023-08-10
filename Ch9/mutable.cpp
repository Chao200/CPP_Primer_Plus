#include <iostream>
using namespace std;

struct f
{
    mutable int access;
    double a;
};

int main()
{
    const f ex{1, 2.2};
    cout << "ex.a->" << ex.a << ", ex.access->" << ex.access << endl;
    ex.access = 6;
    cout << "ex.a->" << ex.a << ", ex.access->" << ex.access << endl;
}