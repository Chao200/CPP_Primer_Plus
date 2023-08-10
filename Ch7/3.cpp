// 错误程序
// 只有在只有一层间接关系的时候，
// 才可以将非 const 地址或指针赋给 const 指针
// 非 const 数据地址 可以赋给 const 指针
// 非 const 数据地址 只能赋给 非 const 指针
#include <iostream>

int main()
{
    int **pp2;
    int *p1;
    int n = 12;
    pp2 = &p1;  // const 指针指向 非 const
    *pp2 = &n;  // 非 const 的指针指向 const 变量
    // *p1 = 10;   // 出现问题，可以通过 p1 修改 n
    std::cout << n << std::endl;

    return 0;
}