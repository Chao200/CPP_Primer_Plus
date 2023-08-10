// 定位 new 运算符

#include <iostream>
#include <new>
using namespace std;

const int BUF = 512;
const int N = 5;
char buffer[BUF];

int main()
{
    // #############################################
    double *pd1, *pd2;
    cout << "First Call new and placement new: \n";
    pd1 = new double[N];
    pd2 = new (buffer) double[N];

    for (int i = 0; i < N; ++i)
    {
        pd1[i] = pd2[i] = 1000.0 + 20.0 * i;
    }

    cout << "   Memory Address: \n";
    cout << "     heap: " << pd1 << endl;
    cout << "     static: " << (void *) buffer << endl;

    cout << "   Memory Contents: \n";
    for (int i = 0; i < N; ++i)
    {
        cout << "     pd1[" << i << "] = " << pd1[i] << " at: " << &pd1[i] << "; ";
        cout << "pd2[" << i << "] = " << pd2[i] << " at: " << &pd2[i] << endl;
    }

    // #############################################
    cout << "\nSecond Call new and placement new: \n";
    double *pd3, *pd4;
    pd3 = new double[N];
    pd4 = new (buffer) double[N];

    for (int i = 0; i < N; ++i)
    {
        pd3[i] = pd4[i] = 1000.0 + 40.0 * i;
    }

    cout << "   Memory Address: \n";
    cout << "     heap: " << pd3 << endl;
    cout << "     static: " << (void *) buffer << endl;

    cout << "   Memory Contents: \n";
    for (int i = 0; i < N; ++i)
    {
        cout << "     pd3[" << i << "] = " << pd3[i] << " at: " << &pd3[i] << "; ";
        cout << "pd4[" << i << "] = " << pd4[i] << " at: " << &pd4[i] << endl;
    }

    // #############################################
    cout << "\nThird Call new and placement new: \n";
    delete[] pd1;
    pd1 = new double[N];
    pd2 = new (buffer + N * sizeof(double)) double[N];

    for (int i = 0; i < N; ++i)
    {
        pd1[i] = pd2[i] = 1000.0 + 60.0 * i;
    }

    cout << "   Memory Contents: \n";
    for (int i = 0; i < N; ++i)
    {
        cout << "     pd1[" << i << "] = " << pd1[i] << " at: " << &pd1[i] << "; ";
        cout << "pd2[" << i << "] = " << pd2[i] << " at: " << &pd2[i] << endl;
    }
    
    delete[] pd1;
    delete[] pd3;

    return 0;
}
