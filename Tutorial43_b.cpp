#include <iostream>
using namespace std;

class B
{
    public:
      void say()
      {
          cout <<"Hello World!\n";
      }
};

class D : public B
{
    int a;
    // D's new say() method will override base class's say() method if mentioned otherwise it will use the inherited say() member.
    public:
      void say()
      {
          cout <<"Hello my coders\n";
      }
};

int main()
{
    // Ambiguity 2:--> 
    B b;
    b.say();

    D d;
    d.say();
    return 0;
}
