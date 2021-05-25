#include <iostream>
#define PI 3.14
using namespace std;
int a=0;
void func1()
{
     int a;// Here it will print the garbage value as local variable takes precedence over the global variable
    cout<<"The value of a is "<<a<<endl;

}
int main()
{
    int a=420;
    int b=5;
    int sum=a+b;
    bool c=false;
    cout <<"This is Tutorial 4.\nHere the value of a is "<<a<<".\nThe value of b is " <<b<<".\nThe sum is "<< sum<<endl;
    cout <<"The value of Pi is "<<PI<<endl;
    printf("The value of sum is %d\n",sum);// By C language Syntax
    cout <<"Please Follow the new format to write the print statements"<<endl;
    cout <<"The value of BOOL variable is "<<c<<".\n";
    func1(); 
    return 0;
}
