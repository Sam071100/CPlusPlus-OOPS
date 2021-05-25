#include <iostream>
using namespace std;
class Employee
{
    private:  // This provides us the data encapsulation.
    int a, b, c;
    public:
    int d, e;
    void setData(int a1, int b1, int c1); // Declaration
    void getData()
    {
        cout <<"The value of a is "<<a<<endl;
        cout <<"The value of b is "<<b<<endl;
        cout <<"The value of c is "<<c<<endl;
        cout <<"The value of d is "<<d<<endl;
        cout <<"The value of e is "<<e<<endl;
    }
};

void Employee :: setData(int a1, int b1, int c1)
{
    a=a1;
    b=b1;
    c=c1;
}
int main()
{
    Employee Samrat; // Here Object Samrat was created from the Class Employee.
    Samrat.setData(1,2,4);
    // Samrat.a=134; Here this is wrong as a is declared inside private and cannot be acccessed from here
    // Samrat.b=265; // Cannot access this as b is initialized in the private part of the class Employee.Only the functions which are intialized in the class can access the private member of that class.
    Samrat.d=34;
    Samrat.e=89;
    Samrat.getData();
    return 0;
}
