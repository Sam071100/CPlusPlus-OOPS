#include <iostream>
using namespace std;
// Constructor overloading
class Complex
{
    int a, b;

public:
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    Complex(int x)
    {
        a = x;
        b = 0;
    }
    Complex()
    {
        a = 0;
        b = 0;
    }
    void printNumber()
    {
        cout << "Your Number is " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    Complex C1(4,6);
    C1.printNumber();
    Complex C2(5);
    C2.printNumber();
    Complex C3;
    C3.printNumber();

    return 0;
}
