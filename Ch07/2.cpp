// 指针和 const
#include <iostream>

int main()
{
    // // case 1
    // int a = 2;
    // const int* pt = &a;
    // std::cout << *pt<< std::endl;
    // // 可以通过 a 修改值，不可以通过 pt 修改
    // a = 4;
    // std::cout << *pt<< std::endl;

    // // case 2
    // const int b = 2;
    // const int* pt = &b;
    // // b 无法修改了
    // std::cout << *pt<< std::endl;

    // // case 3
    // int a = 2;
    // int b = 3;
    // const int* pt = &a;
    // std::cout << *pt<< std::endl;
    // // 通过修改 pt 的指向
    // pt = &b;
    // std::cout << *pt<< std::endl;

    // int* const ptr = &a;
    // std::cout << *ptr<< std::endl;
    // // 通过 ptr 修改内容
    // *ptr = 4;
    // std::cout << *ptr<< std::endl;

    return 0;
}