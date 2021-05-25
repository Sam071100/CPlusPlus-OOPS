//Inheritance
#include <iostream>
using namespace std;
// Base Class
class Employee
{
public:
    float salary;
    int id;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34;
    }
    Employee(){}; // Here this is neccessary as the derived class constructor will search for the base class default constructor as without this creation of the object of the derived class is not possible.
};

// Derived class
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    members/methods/etc....
};
Notes: (Public of base class ko kaise inherit karna chahte ho, woh visibility mode hota hai)
1. Default visibility mode is private if you do not write anything.
2. Private visibility mode: Public members of the base class becomes the private members of the derived class.
3. Public visibility mode: Public members of the base class becomes the public member of the derived class.
4. Private members of the base class can never be inherited.
*/

// Creating a Programmer class derived from Employee Base class

class Programmer : Employee
{
public:
    int languagecode;
    Programmer(int inpId)
    {
        id = inpId;
        languagecode = 9;
    }
     
    void getdata()
    {
        cout <<id<<endl;
    }
};
int main()
{
    Employee Sam(1), Shubham(2);
    cout << Sam.salary << endl;
    cout << Shubham.salary << endl;
    Programmer skillF(10);
    cout << skillF.languagecode << endl;
    // cout <<skillF.id<<endl; >>ERROR<< as id is the private member of the programmer class bcoz it was inherited in private visibility mode.
    skillF.getdata();
    return 0;
}
