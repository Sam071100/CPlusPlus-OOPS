// Ambiguity Resolution in Inheritance
// Agar do alag class ke functions ka name same ho jaye aur woh dono class se ek aur class inherit ho toh phir usse resolve karna padega
#include <iostream>
using namespace std;

class Base1
{
    public:
      void greet()
      {
          cout <<"How are You\n";
      }
};

class Base2
{
    public:
      void greet()
      {
          cout <<"Kaise Ho?\n";
      }
};

class Derived : public Base1, public Base2
{
    int a;
    public:
      void greet()
      {
          Base1::greet();// jis class ka function run karana chahte ho woh yeh par mention kardo toh ambiguity khatam ho jayegi
      }
};
int main()
{
    Base1 base1obj;
    Base2 base2obj;
    base1obj.greet();
    base2obj.greet();
    
    Derived d;
    d.greet();
    return 0;
}
