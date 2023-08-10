// 函数模版

#include <iostream>
using namespace std;

struct job
{
    char name[40];
    double salary;
    int floor;
};

// 非模版函数
void
swap(int a, int b);

// 模版函数
template<typename T>
void
swap(T& a, T& b);

// 显式具体化模版函数
template<>
void
swap<job>(job& a, job& b);

// 与上面等价
template<>
void
swap<>(job& a, job& b);