#include "tabtenn1.h"
#include <iostream>

using std::cout;
using std::endl;

void Show(const TableTennisPlayer& rt);
void Show(const TableTennisPlayer* pt);

int main()
{
    // 函数的参数为基类的指针或引用，那么实参可以是基类或派生类
    // 引用
    TableTennisPlayer player1("Tara", "Boomdea", false);
    RatedPlayer rplayer1(1140, "Mallory", "Duck", true);
    Show(player1);
    Show(rplayer1);

    // 指针
    TableTennisPlayer player2("Tara", "Boomdea", false);
    RatedPlayer rplayer2(1140, "Mallory", "Duck", true);
    Show(&player2);
    Show(&rplayer2);

    // 可以使用派生类对象来初始化基类对象，首先会找构造函数，
    // 没有的话，会调用默认拷贝构造函数
    RatedPlayer olaf1(1840, "Olaf", "Loaf", true);
    TableTennisPlayer olaf2(olaf1);
    Show(olaf1);
    Show(olaf2);

    RatedPlayer olaf3(1840, "Olaf", "Loaf", true);
    TableTennisPlayer olaf4;
    olaf4 = olaf3;
    Show(olaf3);
    Show(olaf4);

    return 0;
}

void Show(const TableTennisPlayer& rt)
{
    cout << "Name: ";
    rt.Name();
    cout << "\nTable: ";
    if (rt.HasTable()) cout << "yes\n";
    else cout << "no\n";
}

void Show(const TableTennisPlayer* pt)
{
    cout << "Name: ";
    pt->Name();
    cout << "\nTable: ";
    if (pt->HasTable()) cout << "yes\n";
    else cout << "no\n";
}