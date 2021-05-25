#include <iostream>
using namespace std;
class complex
{
    int a,b;
    public:
    // Creating a default constructor.
    complex();// Constructor Declaration
     void printNumber()
    {
        cout <<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

complex ::complex() // Constructor definition this is a Default Constructor as it accepts no parameter.
{
    a=10;
    b=0;
    cout <<"Checking the Constructor\n";
}
int main()
{
    complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    return 0;
}
