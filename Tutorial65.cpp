// "Templates with multiple Parameters"
#include <iostream>
using namespace std;
/*
SYNTAX:
template <class T1, class T2>
class nameofClass
{
    // Body
};

*/ 
template <class T1, class T2> // ---> Generic DataType
class myClass
{
    public:
      T1 data1;
      T2 data2;
      myClass(T1 a, T2 b)
      {
          data1= a;
          data2 =b;
      }
      void display()
      {
          cout <<this->data1<<" "<<this->data2<<endl;
      }
};
int main()
{
    // myClass <int, char>obj(1,'s');
    // obj.display();

    myClass <char, float>obj('s',2.10);
    obj.display();
    return 0;
}
