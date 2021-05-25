// ''this pointer''
#include <iostream>
using namespace std;

class A
{
    int a;
    public:
      void setData(int a)
      {
        //   a = a; This will throw the garbage value as in C++ the priority is given to the local variable and 'a variable' of the class is declared outside the scope of the function so throws the garbage value
        this->a = a;
      }
      A & setData1(int a)
      {
        //   a = a; This will throw the garbage value as in C++ the priority is given to the local variable and 'a variable' of the class is declared outside the scope of the function so throws the garbage value
        this->a = a;
        return *this;// returns an object
      }
      A * setData2(int a)
      {
        //   a = a; This will throw the garbage value as in C++ the priority is given to the local variable and 'a variable' of the class is declared outside the scope of the function so throws the garbage value
        this->a = a;
        return this;// returns pointer to an object
      }
      void getData()
      {
          cout <<"The value of a is "<<a<<endl;
      }
};
int main()
{
    // this is a keyword which is a pointer which points to the object which invokes the member function
    A a,b;
    a.setData(4);
    a.getData();

    b.setData1(5).getData();// By reference

    A *ptr = new A; // Instance 
    ptr->setData2(10)->getData();// By Address
    return 0;
}
