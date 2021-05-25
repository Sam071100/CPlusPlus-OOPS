//Copy Constructors
#include <iostream>
using namespace std;

class Number
{
    int a;
    public:
     Number(){
         a=0;
     };
     Number(int num)
     {
         a= num;
     }
     // When no copy constructor is found, compiler supplies its own copy constructor.
     Number(Number &obj)// Without creating the copy constructor also it works as  the compiler by default assigns a copy constructor while creating the class. It searchs for the defined copy constructor if found then it will execute that otherwise the default assigned copy constructor of the compiler will be executed.
     {
         cout <<"Copy Constructor called!!!\n";
         a= obj.a;
     }
     void Display()
     {
         cout <<"The  number for this object is "<<a<<endl;
     }
};
int main()
{
    Number x(5),y,z(45),x1(x),z2;
    x.Display();
    y.Display();
    z.Display();
    // z1 should exactly resemble z
    Number z1(z);//Copy constructor invoked bcoz yaha par object ban raha tha
    z1.Display();
    x1.Display();
    z2 = z;// Copy constructor not invoked as here we have just assigned the bana banaya object.
    z2.Display();
    Number z3 = z;//Copy Constructor is invoked bcoz yaha par object ban raha tha and was assigned to the previous made object
    z3.Display();
    // Copy Constructor will not be invoked when bana banaya object milega.
    // Copy Constructor will be invoked only while creating the object and assigned to some other already created object.
    return 0;
}
