#include <iostream>

// static int counts;

// int main()
// {
//     std::cout << counts << std::endl;
// }

// 等价于下面的

namespace
{
    int counts;
}

int main()
{
    std::cout << counts << std::endl;
}