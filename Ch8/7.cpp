// 具体化和实例化

#include <iostream>
using namespace std;

struct job
{
    char name[40];
    double salary;
    int floor;
};

// 模版函数
template<typename T>
void
swap(T& a, T& b);

// 显式具体化模版函数
template<>
void
swap<job>(job& a, job& b);

// 显式实例化模版函数
template
void
swap<char>(char& a, char& b);

int main()
{
    
}

