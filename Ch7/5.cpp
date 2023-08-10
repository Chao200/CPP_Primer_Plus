#include<iostream>
using namespace std;
int a = 2;
int main()
{
    if (a == 0) return 0;
    cout << a << endl;
    --a;
    main();
    return 0;
}