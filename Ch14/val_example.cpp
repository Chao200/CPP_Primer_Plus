#include <iostream>
#include <valarray>

int main()
{
    double gpa[5] = {1, 2, 3, 4, 5};
    // 空数组
    std::valarray<double> v1;
    // 8 个元素的数组
    std::valarray<int> v2(8);
    // 8 个元素，每个都是 10
    std::valarray<int> v3(10, 8);
    // 4 个元素，用 gpa 种的前四个来初始化
    std::valarray<double> v4(gpa, 4);
}