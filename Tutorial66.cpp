// "Templates with Default Parameters"
#include <iostream>
using namespace std;

template <class T1 = int, class T2= float, class T3 = char>
class Samrat
{
    public:
      T1 a;
      T2 b;
      T3 c;
      Samrat(T1 x, T2 y, T3 z)
      {
          a = x;
          b = y;
          c = z;
      }
      void display()
      {
          cout <<"The value of a is "<<a<<endl;
          cout <<"The value of b is "<<b<<endl;
          cout <<"The value of c is "<<c<<endl;
      }
};
int main()
{
    Samrat<> s(4, 5.5,'s');
    s.display();
    cout <<endl;

    Samrat<float, char ,char> s1(9.14, 'S', 'H');
    s1.display();
    return 0;
}
