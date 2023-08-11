// 后置类型

#include <iostream>
using namespace std;

template<typename T1, typename T2>
auto fadd(T1& a, T2& b) -> decltype(a + b)
{
    return a + b;
}