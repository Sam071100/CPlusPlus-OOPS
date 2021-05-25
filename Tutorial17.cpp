#include <iostream>
using namespace std;
inline int product(int a, int b)
{
    // inline fumction should not be used with static variable or in recursion or in loops or switch.
    // Below lines are not recommended with the inline funtions
    static int c=0;// static variables are stored in the code section of the memory layout.
    c= c+1;
   return a*b+c; 
}
        //              Compulsory  ||     Optional// Default argument
float moneyRecieved(int currentMoney, float factor=1.04) // Here 1.04 is the default argument and the first parameter is compulsory.
{
      return currentMoney*factor;
}

// int strlen(const char* p)
// {

// }
int main()
{
    int a, b;
    cout <<"Enter the value of a and b\n";
    cin >>a>>b;
    cout <<"The product of "<<a<<" and "<<b<<" is "<<product(a,b)<<endl;//Inline function
    cout <<"The product of "<<a<<" and "<<b<<" is "<<product(a,b)<<endl;
    cout <<"The product of "<<a<<" and "<<b<<" is "<<product(a,b)<<endl;
    cout <<"The product of "<<a<<" and "<<b<<" is "<<product(a,b)<<endl;
    cout <<"The product of "<<a<<" and "<<b<<" is "<<product(a,b)<<endl;
    cout <<"The product of "<<a<<" and "<<b<<" is "<<product(a,b)<<endl;
    cout <<"The product of "<<a<<" and "<<b<<" is "<<product(a,b)<<endl;
    cout <<"The product of "<<a<<" and "<<b<<" is "<<product(a,b)<<endl;
    cout <<"The product of "<<a<<" and "<<b<<" is "<<product(a,b)<<endl;
    cout <<"The product of "<<a<<" and "<<b<<" is "<<product(a,b)<<endl;
    cout <<"The product of "<<a<<" and "<<b<<" is "<<product(a,b)<<endl;
    cout <<"The product of "<<a<<" and "<<b<<" is "<<product(a,b)<<endl;
    cout <<"The product of "<<a<<" and "<<b<<" is "<<product(a,b)<<endl;
    cout <<"The product of "<<a<<" and "<<b<<" is "<<product(a,b)<<endl;
    cout <<"The product of "<<a<<" and "<<b<<" is "<<product(a,b)<<endl;
    cout <<"The product of "<<a<<" and "<<b<<" is "<<product(a,b)<<endl;
    cout <<"The product of "<<a<<" and "<<b<<" is "<<product(a,b)<<endl;
    cout <<"The product of "<<a<<" and "<<b<<" is "<<product(a,b)<<endl;
    cout <<"The product of "<<a<<" and "<<b<<" is "<<product(a,b)<<endl;
    cout <<"The product of "<<a<<" and "<<b<<" is "<<product(a,b)<<endl;
    cout <<"The product of "<<a<<" and "<<b<<" is "<<product(a,b)<<endl;
    
    int money= 100000;
    cout <<"If you have "<<money<<" Rs in your Bank Account, you will recieve "<<moneyRecieved(money)<<" Rs after 1 Year\n"; 
    cout <<"FOR VIP::If you have "<<money<<" Rs in your Bank Account, you will recieve "<<moneyRecieved(money,1.1)<<" Rs after 1 Year\n"; 
    return 0;
}
