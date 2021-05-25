// "Templates and Function Templates with Parameters"
#include <iostream>
using namespace std;

// float funcAverage(int a, int b)
// {
//     float avg = (float)(a+b)/2;
//     return avg;
// }

// float funcAverage2(int a, float b)
// {
//     float avg = (float)(a+b)/2;
//     return avg;
// }

template <class T1, class T2>
float funcAverage(T1 a, T2 b)
{
    float avg = (float)(a+b)/2;
    return avg;
}

template <class T>
void Swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    float a= funcAverage(5, 5.6);
     cout <<"The Average of these numbers is "<<a<<endl;
     float x = 5.6, y=7;
     Swap(x,y);
     cout <<"x and y is : "<<x<<", "<<y<<endl;
    return 0;
}
