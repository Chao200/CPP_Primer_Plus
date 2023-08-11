#include <iostream>
using namespace std;

void f()
{
    static int t = 1;
    cout << "t: " << t << endl;
    ++t;
}

int main()
{
    f();
    f();
    
    return 0;
}

