// new delete

#include <iostream>
using namespace std;

int main()
{
    int* pi = new int(3);
    int* ti = new int{6};

    struct st{double x; double y;};
    st* one = new st{1.1, 2.2};

    int* arr = new int[4] {2, 3};

    cout << "arr[0]: " << arr[0] 
        << ", arr[2]: " << arr[2] << endl;
}

