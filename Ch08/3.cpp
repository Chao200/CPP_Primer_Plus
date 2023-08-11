// 临时变量

#include <iostream>
using namespace std;

void myconstprint(const int& x);
void myprint(int& x);

int main()
{
    int a = 2;
    double b = 3.1;
    myconstprint(a + 4);  // 合法，非左值
    myprint(a + 2); // 非法

    myconstprint(b);  // 类型不匹配
}

void myconstprint(const int& x)
{
    cout << x << endl;
}

void myprint(int& x)
{
    cout << x << endl;
}