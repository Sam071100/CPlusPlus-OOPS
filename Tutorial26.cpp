#include <iostream>
using namespace std;

class complex
{
    int a,b;
    public:
    void setNumber(int n1, int n2)
    {
       a= n1;
       b= n2;
    }

    friend complex sumComplex(complex o1, complex o2); // Here we have declared the friend so the function can access the private members of the class complex.this Declaration can be written in private or public part of the member.

    void printNumber()
    {
        cout <<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

complex sumComplex(complex o1, complex o2) // here complex is a  data type and we are passing objects into the function.
{
    complex o3;
    o3.setNumber((o1.a+o2.a), (o1.b+o2.b)); // Here if we had not declared this function as friend in the class it could't have access the a and b as they are the private members of the class complex,
    return o3;// As the data type of this function is complex so it will return object as returned in this function.
}
int main()
{
    complex c1, c2, sum;

    c1.setNumber(1,4);
    c1.printNumber();
    // c1.sumComplex(); == INVALID as the friend function cannot be accessed by the objects of the class but the private members of the class can be easily accessed by the friend function.

    c2.setNumber(5,8);
    c2.printNumber();

    sum= sumComplex(c1, c2); // Here c1 and c2 which are objects are getting passed in the function.
    sum.printNumber(); // Here sum (object) was intiallized so that we can print the value of this function otherwise we cannot call this function individually.
    return 0;
}
