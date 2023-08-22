#include "tabtenn1.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
    // 基类指针指向派生类（引用）
    RatedPlayer player1(1140, "Mallory", "Duck", true);
    TableTennisPlayer& rt = player1;
    TableTennisPlayer* pt = &player1;
    rt.Name();
    pt->Name();

    // // 派生类指针指向基类（引用）
    // TableTennisPlayer player2("Betsy", "Bloop", true);
    // RatedPlayer& rt = player2;
    // RatedPlayer* pt = &player2;

    return 0;
}