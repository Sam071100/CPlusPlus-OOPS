// Multiple Inheritance
#include <iostream>
using namespace std;

/*
Syntax for inheriting in multiple inheritance
class DerivedC : visibility-mode base1, visibility-mode base2
{
    Class body of class "DerivedC"
};
*/
class Base1
{
    protected:
      int baseint1;
    public:
      void set_baseint1(int a)
      {
          baseint1 = a;
      }
};

class Base2
{
    protected:
      int baseint2;
    public:
      void set_baseint2(int a)
      {
          baseint2 = a;
      }
};

class Derived : public Base1, public Base2 // Example of multiple inheritance
{
    public:
      void show()
      {
          cout <<"The value of Base1 is "<<baseint1<<endl;
          cout <<"The value of Base2 is "<<baseint2<<endl;
          cout <<"The sum of these values is "<<baseint1+baseint2<<endl;
      }
};
/*
 The inherited Derived class will look something like this:
 Data Members:
     baseint1-----> Protected
     baseint2-----> Protected
 Member functions:
     set_baseint1()---> Public
     set_baseint2()---> Public
     show()---> Public
*/
int main()
{
    Derived d1;
    d1.set_baseint1(5);
    d1.set_baseint2(4);
    d1.show();
    return 0;
}
