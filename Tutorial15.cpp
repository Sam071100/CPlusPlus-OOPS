#include <iostream>
using namespace std;
int sum(int a, int b)
{
    // a and b are formal parameters which are taking the value from the actual parameter
    int c=a+b;
    return c;
}
void Good()
{
    cout <<"Hello Samrat\n";
}
int main()
{
    int num1, num2;
    cout <<"Enter the first Number\n";
    cin >>num1;
    cout <<"Enter the Second Number\n";
    cin >>num2;
    // num1 and num2 are the actual parameters
    cout <<"The sum Of the First and The Second number is "<<sum(num1, num2)<<endl;
    Good();
    return 0;
}
