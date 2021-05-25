// "Virtual Functions"
#include <iostream>
using namespace std;
//BaseClass keh raha hai agar uska pointer DerivedClass ke object ko point kare aur BaseClass ka function virtual ho toh DerivedClass ka function RUN karna
class BaseClass
{
    public:
      int var_base=1;
      virtual void Display() // Virtual controls the binding of the object with the function during the Runtime
      {
          cout <<"1. Displaying Base Class variable "<<var_base<<endl;
      }
};

class DerivedClass : public BaseClass
{
    public:
      int var_derived=2;
      void Display()
      {
          cout <<"2. Displaying Base Class variable "<<var_base<<endl;
          cout <<"2. Displaying Derived Class variable "<<var_derived<<endl;
      }
};

int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived;
    base_class_pointer->Display();

    // Is case mai compiler function ke address se object ko associate karta hai, woh Runtime mai hota hai 

    // Polymorphism is a property jisse objects jo ki alag alag classes ko belong kar rahe hai woh ek tarah ke message ko respond karte hai

    return 0;
}
