// 深入函数指针

#include <iostream>
using namespace std;

// typedef const double* (*p_fun)(const double*, int);

const double* f1(const double arr[], int n);
const double* f2(const double [], int);
const double* f3(const double*, int);

int main()
{
    double arr[3] = {11.11, 22.22, 33.33};
    const double* (*p1)(const double*, int) = f1;
    // p_fun p1 = f1;
    auto p2 = f2;
    cout << "使用函数指针调用函数\n";
    cout << "(*p1)(arr, 3) : " << (*p1)(arr, 3) << endl;
    cout << "*(*p1)(arr, 3) : " << *(*p1)(arr, 3) << endl;
    cout << "p2(arr, 3)" << p2(arr, 3) << endl;
    cout << "*p2(arr, 3)" << *p2(arr, 3) << endl;

    // auto 只能对单值初始化推导，不可以推导列表初始化
    const double* (*pa[3])(const double*, int) = {f1, f2, f3};
    // p_fun pa[3] = {f1, f2, f3};
    // const double* (**pb)(const double*, int) = pa;
    auto pb = pa;
    cout << "\n使用指针数组调用函数指针，从而调用函数\n";
    for (int i = 0; i < 3; ++i)
    {
        cout << "pa[" << i << "](arr, 3) : " << pa[i](arr, 3) << endl;
        cout << "*(pa[" << i << "](arr, 3)) : " << *(pa[i](arr, 3)) << endl;
    }

    cout << "\n通过指针数组的地址调用\n";
    // const double* (*(*pc)[3])(const double*, int) = &pa;
    // p_fun (*pc)[3] = &pa;
    auto pc = &pa;
    cout << "(*pc)[0](arr, 3) : " << (*pc)[0](arr, 3) << endl;
    cout << "*(*pc)[0](arr, 3) : " << *(*pc)[0](arr, 3) << endl;

}


const double* f1(const double arr[], int n)
{
    return arr;
}

const double* f2(const double arr[], int n)
{
    return arr+1;
}

const double* f3(const double* arr, int n)
{
    return arr+2;
}

