// 引用
#include <iostream>
using namespace std;

int main()
{
    // // case 1
    // int rabit = 3;
    // int &ref;
    // ref = rabit;  // 错误的

    // // case 2
    // int a = 2;
    // int* const b;  // 错误的
    // b = &a;

    // // case 3
    // // ref 和 *ptr 相似
    // int a = 2;
    // int& ref = a;
    // int* const ptr = &a;

    // // case 4
    // int a = 2;
    // int* pt = &a;
    // int& ref = *pt;
    // cout << "ref: " << ref << endl;
    // int b = 3;
    // // 无法改变 ref 绑定的值
    // pt = &b;
    // cout << "ref: " << ref << endl;
}