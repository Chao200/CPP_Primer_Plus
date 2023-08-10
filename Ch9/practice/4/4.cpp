#include <iostream>
#include "4.h"

namespace SALES
{
    using std::cin;
    using std::cout;
    using std::endl;

    void setSales(Sales &s, const double ar[], int n)
    {
        int count = n > 4 ? 4 : n;
        double min = ar[0];
        double max = ar[0];
        double sum = 0;

        for (int i = 0; i < count; ++i)
        {
            s.sales[i] = ar[i];
            if (min > ar[i]) min = ar[i];
            if (max < ar[i]) max = ar[i];
            sum += ar[i];
        }
        if (n < 4) 
        {
            for (int i = count; i < 4; ++i)
            {
                s.sales[i] = 0;
            }
        }
        s.max = max;
        s.min = min;
        s.average = sum / count;
    }

    void setSales(Sales &s)
    {
        cout << "Input 4 elements: ";
        for (int i = 0; i < 4; ++i)
        {
            cin >> s.sales[i];
        }
        double min = s.sales[0];
        double max = s.sales[0];
        double sum = 0;
        for (int i = 0; i < 4; ++i)
        {
            if (min > s.sales[i]) min = s.sales[i];
            if (max < s.sales[i]) max = s.sales[i];
            sum += s.sales[i];
        }
        s.max = max;
        s.min = min;
        s.average = sum / 4;
    }

    // display
    void showSales(const Sales &s)
    {
        cout << "Sales: ";
        for (int i = 0; i < 4; ++i)
        {
            cout << s.sales[i] << " ";
        }
        cout << endl;
        cout << "max: " << s.max << endl;
        cout << "min: " << s.min << endl;
        cout << "average: " << s.average << endl;
    }
}