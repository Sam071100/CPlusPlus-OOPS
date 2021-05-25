#include <iostream>
#include "Tutorial6.cpp"
using namespace std;
int main()
{
    int num1, num2,a,b;
    cout << "Enter the value of NUM1" << endl;
    cin >> num1;                               // >> this is called extraction operator.
    cout << "Enter the value of NUM2" << endl; // << This is called Insertion Operator.
    cin >> num2;
    cout << "Printing the value of NUM1\n"
         << num1 << endl;
    cout << "Printing the value of NUM2\n"
         << num2 << endl;
    cout << "Printing the sum of NUM1 and NUM2\n"
         << num1 + num2 << endl;
    Func1();
    cout <<"Enter the value of a and b\n";
    cin >>a>>b;
    cout << "The value of a+b is "<<a+b<<endl; 
    cout << "The value of a-b is "<<a-b<<endl; 
    cout << "The value of a*b is "<<a*b<<endl; 
    cout << "The value of a/b is "<<a/b<<endl; 
    cout << "The value of a%b is "<<a%b<<endl; 
    cout << "The value of a++ is "<<a++<<endl; 
    cout << "The value of a-- is "<<a--<<endl; 
    cout << "The value of ++a is "<<++a<<endl; 
    cout << "The value of --a is "<<--a<<endl; 
     
    cout <<"\n";
    cout << "The value of a==b is "<<(a==b)<<endl; 
    cout << "The value of a!=b is "<<(a!=b)<<endl; 
    cout << "The value of a > b is "<<(a > b)<<endl; 
    cout << "The value of a < b is "<<(a < b)<<endl; 
    cout << "The value of a <=b is "<<(a <=b)<<endl; 
    cout << "The value of a >=b is "<<(a >=b)<<endl; 

    return 0;
}
