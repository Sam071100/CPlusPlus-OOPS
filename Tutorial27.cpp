#include <iostream>
using namespace std;

// Forward declaration
class complex;// That is the reason first complex class is declared as we are using it in the calculator class.

class calculator
{
    public:
    
    int add(int a, int b)
    {
        return (a+b);
    }
    int sumRealComplex(complex o1, complex o2);// here we cannot define this function as still the class complex is not declared and we cannot access it's members.
    int comComplex(complex o1, complex o2);
    
};

class complex
{
    int a,b;
    // Individually declaring functions as friends
    // friend int calculator ::sumRealComplex(complex o1, complex o2);// Here we used the :: operator to tell that the sumRealComplex is present in the Calculator class.
    // friend int calculator ::comComplex(complex o1, complex o2);// Here we used the :: operator to tell that the sumRealComplex is present in the Calculator class.

    // Aliter: Declaring thre entire calculator class as Friend.
    friend class calculator;
    public:
    void setNumber(int n1, int n2)
    {
       a= n1;
       b= n2;
    }

    void printNumber()
    {
        cout <<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

int calculator ::sumRealComplex(complex o1, complex o2)// Here o1 and o2 are the objects of the class Complex.
{
    return (o1.a+ o2.a);// This function should be written after the class whose members we are accessing. Like here we are accessing the private members of class Complex so it is written after complex class.
}
int calculator ::comComplex(complex o1, complex o2)// Here o1 and o2 are the objects of the class Complex.
{
    return (o1.b+ o2.b);// This function should be written after the class whose members we are accessing. Like here we are accessing the private members of class Complex so it is written after complex class.
}
int main()
{
    complex o1, o2;
    o1.setNumber(1,4);
    o2.setNumber(5,7);
    calculator calc;
    int res = calc.sumRealComplex(o1,o2);
    int resc = calc.comComplex(o1,o2);
    cout <<"The sum of real part of o1 and o2 is "<<res<<endl;
    cout <<"The sum of complex part of o1 and o2 is "<<resc<<endl;
    o1.printNumber();
    o2.printNumber();
    return 0;
}
