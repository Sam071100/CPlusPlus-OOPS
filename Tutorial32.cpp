#include <iostream>
using namespace std;
// Constructor with default values
class Simple
{
    int data1;
    int data2;
    public:
     Simple(int a, int b=9)// Here default value is given to the argument
     {
         data1=a;
         data2=b;
     }
     void Printdata();
};

void Simple::Printdata()
{
    cout <<"The value of data1 is "<<data1<<" and data2 is "<<data2<<endl;
}
int main()
{
    Simple s(1,4);
    s.Printdata();
    Simple t(1);
    t.Printdata();
    return 0;
}
