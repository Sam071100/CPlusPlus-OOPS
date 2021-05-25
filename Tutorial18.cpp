#include <iostream>
using namespace std;
// int factorial(int n)
// {
//     if (n==0||n==1)
//     {
//         return 1;
//     }
//     else
//     {
//         return n * factorial(n-1);
//     }
// }
int fib(int n)
{
    if (n==0|| n==1)
    {
        return 1;
    }
    else
    {
        return fib(n-1)+ fib(n-2);
    }
}
int main()
{
    int a;
    cout <<"Enter a Number\n";
    cin >>a;
    cout <<"The term in fibonacci series at position  "<<a<<" is "<<fib(a)<<endl;
    return 0;
}
