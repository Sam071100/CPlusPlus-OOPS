// Here we are adding the two complex numbers

#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

    public:
    void setData(int v1, int v2)
    {
        a=v1;
        b=v2;
    }
    void setDataBySum(complex o1, complex o2) // Here in this case the objects of these classes are passed but the  objects can be of any class. 
    {
        a=o1.a+o2.a;// Real numbers ka sum
        b=o1.b+o2.b;// Imaginary numbers ka sum
    }

    void printNumber()
    {
     cout <<"Your complex Number is "<<a<<" + "<<b<<"i"<<endl;  
    }


};
int main()
{
    complex c1, c2, c3;
    c1.setData(1,2);
    c1.printNumber();

    c2.setData(3,4);
    c2.printNumber();

    c3.setDataBySum(c1, c2); // Passing objects in the function.
    c3.printNumber();

    return 0;
}
