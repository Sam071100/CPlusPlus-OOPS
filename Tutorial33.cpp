#include <iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float interestRate;
    float return_value;

public:
    BankDeposit(){};// default constructor.
    BankDeposit(int p, int y, float r); // r can be a value like 0.04
    BankDeposit(int p, int y, int r);   // r can be a value like 14

    void Show();
};
BankDeposit::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    return_value = principal;
    for (int i = 0; i < y; i++)
    {
        return_value *= (1 + interestRate);
    }
}
BankDeposit::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = (float)r / 100;
    return_value = principal;
    for (int i = 0; i < y; i++)
    {
        return_value *= (1 + interestRate);
    }
}
void BankDeposit::Show()
{
    cout << endl
         << "Principal amount was " << principal
         << ". Return value after " << years
         << " years is " << return_value << endl;
}
int main()
{
    BankDeposit bd1, bd3;// Default constructor is neccessary as without that this line will throw error as here whle creating the object as no parameters are passed and therefore the compiler will search for an default constructor. Other wise you can dynamically create the oblect like bd2 without defining default constructor for dynamically intialization of objects using the constructors. 
    int p, y, R;
    float r;

    cout << "Enter the value of p y and r " << endl;
    cin >> p >> y >> r;
    bd1 = BankDeposit(p, y, r);// Dynamically created this object with the help of the constructor during the run-time after taking the values or overwriting the intialized objects.
    bd1.Show();

    cout << "Enter the value of p y and r " << endl;
    cin >> p >> y >> R;
    BankDeposit bd2 = BankDeposit(p, y, R);// Dynamically created this object with the help of the constructor during the run-time after taking the values.
    bd2.Show();

    bd3.Show();// initialized by the default constructor.
    return 0;
}
