#include <iostream>
// using namespace std;

int sum(int arr[], int size); 

int main()
{
    const int Arrsize = 3;
    int arr[Arrsize] = {1,2,3};
    std::cout << sum(arr, Arrsize) << std::endl;
}

int sum(int arr[], int size)
{
    int s = 0;
    for (int i = 0; i < size; ++i)
    {
        s+=arr[i];
    }
    return s;
}