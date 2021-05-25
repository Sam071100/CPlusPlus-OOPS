// Intialization list in constructors
#include <iostream>
using namespace std;
/*
Syntax for intialization list in constructor:
constructor (argumaent-list) : intialization section
{
    assignment + other code;
}

class Test
{
    int a;
    int b;
    public:
      Test(int i, int j) : a(i), b(j)
      {
          constructor body;
      }
};
*/
class Test
{
    int a;
    int b;

public:
    //   Test(int i, int j) : a(i), b(j)
    //   Test(int i, int j) : a(i), b(a + j)// Left to right precedence
    //    Test(int i, int j) : a(i), b(2* j)
    //    Test(int i, int j) : a(i), b(i+ j)
    //    Test(int i, int j) : b(j), a(i+b) RED FLAG--> Zo cheez phele declare hoti hai hai woh phele intialize hoti hai that is the reason getting the garbage value in a
    Test(int i, int j) : a(i)
    {
        b = j;
        cout << "Constructor Executed\n";
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
    }
};
int main()
{
    Test t1(4, 6);
    return 0;
}
