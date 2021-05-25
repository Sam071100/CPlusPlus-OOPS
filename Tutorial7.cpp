#include <iostream>
using namespace std;
int c=45; // Global Varaiable
int main()
{
    int a, b, c;
    cout <<"Enter the value of a"<<endl;
    cin >> a;
    cout <<"Enter the value of b"<<endl;
    cin >> b;
    cout <<"Enter the value of c"<<endl;
    cin >>c;
    cout <<"Printing the value of a\n"<<a<<endl;
    cout <<"Printing the value of b\n"<<b<<endl;
    cout <<"Printing the value of c\n"<<c<<endl;
    cout <<"Printing the value of Global c\n"<<::c<<endl; // Here :: is scope resolution operator and works similar to extern and helps in prinitng the value of Global variable.
    
//    ****************** Float, Double and Long double Literals  
    float d=34.4;
    long double e=34.4;
    cout <<"The value of d is "<<d<<endl<<"The value of e is "<<e<<endl;
    cout <<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    cout <<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout <<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout <<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout <<"The size of 34.4L is "<<sizeof(34.4L)<<endl;

//  ************* Reference Varaiable*************************
      
    // Rohan ---> Monty ----> Rohu ----> Dangerous Coder
    float x =455;
    float &y =x;
    y=500; // By doing this the value of x is going to changed as the same variable is having the two names i.e is x and y.
    cout <<x<<endl;
    cout <<y<<endl; // Here  y is a refernce varaible as this varaiable is having two names that is x and y and y is not the copy of the varaible.

    //  *****************Typecasting****************
     int k=45;
     float l=45.46;
     cout <<"The Value of k is "<<k<<endl;
     cout <<"The Value of k is "<<(float)k<<endl; // Here the integer value is typecasted into float. 
     cout <<"The Value of k is "<<float(k)<<endl; // Here the integer value is typecasted into float. 
     cout <<"The Value of l is "<<int(l)<<endl; // Here the integer value is typecasted into float.
     int m= int(l); // here m will take the integer part of l as it l is typecasted into int.
     cout <<"The expression is "<<k+l<<endl;
     cout <<"The expression is "<<k+int(l)<<endl;
     cout <<"The expression is "<<k+int(l)<<endl;

    return 0;
}
