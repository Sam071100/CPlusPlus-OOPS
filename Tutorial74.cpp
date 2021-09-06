// Functor -> Functional Object
#include <iostream>
#include <functional>
#include<algorithm>
using namespace std;

bool f(int a, int b)
{
    return a>b;
}

int main()
{
    // Function objects: Function wrapped in a class so that it is available like an object

    int arr[] = {1,3,4,12,74,57};
    sort(arr, arr+5, f);
    // Here f is a functor
    for (int i = 0; i < 6; i++)
    {
        cout <<arr[i]<<" ";
    }
    return 0;
}
