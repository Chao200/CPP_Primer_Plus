// 函数指针

#include<iostream>
using namespace std;

int f(int a);
int (*pt)(int a);

int main()
{
    pt = f;
    cout << "pt: " << pt << endl;
    cout << "f: " << f << endl;
    cout << "*pt: " << *pt << endl;

    pt(2);
    (*pt)(3);
    f(4);

    return 0; 
}

int f(int a)
{
    cout << a << endl;
    return a;
}