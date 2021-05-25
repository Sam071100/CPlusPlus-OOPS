// Protected Access Modifier
#include <iostream>
using namespace std;
// Protected is used when we want to keep the member of the base class as private and also want that memeber should be inherited to other derived classes as their private members.
class Base
{
    protected:// Private member zaisa hota hai, bas inherit ho sakta hai
      int a;
    private:
      int b;
};
/*
 For a protected member:
                              Public derivation   Private derivation   Protected Derivation
    1. Private members          Not inherited       Not inherited        Not inherited
    2. Protected members        Protected           Private              Protected         
    3. Public members           Public              Private              Protected
*/    
class Derived : protected Base
{
    public:
      void setData();
      int getData();

};
void Derived::setData()
{
    a=5;// here treat a as private member of the derived class.
}
int Derived::getData()
{
    return a;
}
int main()
{
    Base b;
    Derived d;
    // cout <<b.a;// will not work since a was protected and acts as a private member of the Base class
    // cout <<d.a;// Will not work since a was protected but it was inherited and acts as a private member of the derived class
    d.setData();
    cout <<d.getData()<<endl;
    return 0;
}
