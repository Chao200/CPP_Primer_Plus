#include<iostream>
using namespace std;

int y = 4;

void printing();
int main()
{
    y++;
    cout << "y in file1:" << y << endl;

    printing();

}
