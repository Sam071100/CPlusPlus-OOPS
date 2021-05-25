//Single Inheritance: A class which is derived from a single base class
#include <iostream>
using namespace std;

class Base
{
    int data1; // Private by default and is not inheritable
public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void Base::setData(void)
{
    data1 = 10;
    data2 = 20;
}
int Base::getData1(void) // Private member of the class can be accessed by the member function of that class
{
    return data1;
}
int Base::getData2(void)
{
    return data2;
}
class Derived : private Base // Class is being derived privately
{
    int data3;

public:
    void process();
    void display();
};
void Derived::process()
{
    setData(); // Here as the visibility mode is set to private so while inheriting the public members of the base class became private members of the inherited class that is Derived class and as a private member can only be called by the member function of that class.
    data3 = data2 * getData1();
}
void Derived::display()
{
    cout << "Value of Data1 is " << getData1() << endl; // As here data1 was private in Base class so it was not inherited to Derived class so it was displayed using the getdata1() function.
    cout << "Value of Data2 is " << data2 << endl;
    cout << "Value of Data3 is " << data3 << endl;
}
int main()
{
    Derived der;
    // der.setData(); As it is private member of the Derived class.
    der.process();
    der.display();
    return 0;
}
