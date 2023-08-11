// 右值引用

#include <iostream>
using namespace std;

int main()
{
    const int& ref1 = 2;    // 合法
    // int& ref2 = 4;          // 非法
    int&& ref3 = 6;         // 合法
    cout << ref3 << endl;
}