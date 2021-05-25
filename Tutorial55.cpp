// "Pointers to Derived Classes in C++"" :: Apka Base Class ka pointer Derived Class ke object se point kar sakta hai
#include <iostream>
using namespace std;

class BaseClass
{
    public:
      int var_base;
      void Display()
      {
          cout <<"Displaying Base Class variable "<<var_base<<endl;
      }
};

class DerivedClass : public BaseClass
{
    public:
      int var_derived;
      void Display()
      {
          cout <<"Displaying Base Class variable "<<var_base<<endl;
          cout <<"Displaying Derived Class variable "<<var_derived<<endl;
      }
};

int main()
{
    BaseClass *base_class_pointer; // Yeh pointer BaseClass ke object ko point karega
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived; // Here BaseClass ka pointer is pointing to the object of Derived class
    // Agar apka Base Class ka pointer hai aur Derived Class ke object se point karadiya toh agar ap us pointer ki sahayta se display() function run karoge toh Base Class ka dispaly() function run hoga ----> This is called Late Binding.

    base_class_pointer->var_base = 25;
    base_class_pointer->Display();
    // base_class_pointer->var_derived =34; This is INVALID and will throw an error

    // Jis Class ka pointer hota hai usi class ke members invoke ya access ho sakte hai, object chahe kisi bhi class ka ho :: ISS case mai object derived class ka hai aur pointer BaseClass ka hai toh khali BaseClass ke members access honge

    DerivedClass *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_derived=98;
    derived_class_pointer->var_base=100;// As it was inherited
    derived_class_pointer->Display();

    // Hence binding of the object with the function is decided by the Class of the pointer during the Runtime by the compiler hence it was Runtime Polymorphism.
    return 0;
}
