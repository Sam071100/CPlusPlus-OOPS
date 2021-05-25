// Pointers to objects and Arrow operator
#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;
    public:
      void getData()
      {
          cout <<"The real part is "<<real<<endl;
          cout <<"The imaginary part is "<<imaginary<<endl;
      }
      void setData(int a, int b)
      {
          real = a;
          imaginary = b;
      }
};
int main()
{
    Complex c1;
    Complex *ptr = &c1;// Pointer to the object
    c1.setData(1,54);
    c1.getData();
    ptr->getData();
    // *ptr.getData(); . operator has higher precedence when compared to the * operator so the bracket is very important as the syntax given down below
    (*ptr).getData();

    Complex *ptr1 = new Complex;// Creating the object dynamically in the heap memory
    ptr1->setData(1,5);
    ptr1->getData();
    // (*ptr1).getData(); is exactly same as ptr1->getData();

    // Array of objetcs
    Complex *ptr2 = new Complex[4];// 4 New objects will be created dynamically in the heap memory, basically the array of the objects will be created
    ptr2->setData(1,4);
    ptr2->getData();
    // ptr2 + 1->getData(); How to access the next obejct in the array??? Let's find out in the next Tutorial
    return 0;
}
