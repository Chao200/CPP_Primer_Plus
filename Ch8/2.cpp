// 交换

#include <iostream>
using namespace std;

void swapval(int a, int b);
void swapptr(int* a, int* b);
void swapref(int& a, int& b);

int main()
{
    int a = 1, b = 2;
    cout << "-----------------" << endl;
    cout << "Before swap, a: " << a << ", b: " << b << endl;
    swapval(a, b);
    cout << "After swapval, a: " << a << ", b: " << b << endl;

    cout << "-----------------" << endl;
    cout << "Before swap, a: " << a << ", b: " << b << endl;
    swapptr(&a, &b);
    cout << "After swapptr, a: " << a << ", b: " << b << endl;
    
    cout << "-----------------" << endl;
    cout << "Before swap, a: " << a << ", b: " << b << endl;
    swapref(a, b);
    cout << "After swapref, a: " << a << ", b: " << b << endl;

    return 0;
}

void swapval(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swapptr(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapref(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}