// Function can be declared in the structure
#include <bits/stdc++.h>
using namespace std;
 typedef struct Functions
{
    int a;
    int b;
    void getdata()  // Here we don't find private and public so the data is not encapsulated and can be accessed from anywhere thus decreasing the risk of privacy and increasing the risk of piracy.
    {
       cout <<a<<endl;
       cout <<b<<endl;
    }
    int add(int a, int b)
    {
       int result;
       result=a+b;
       return result;
    }
}Samrat; // Here the struct function is typedefed into Samrat

int main()
{
    Samrat object;
    object.a=5;
    object.b=26;
    object.getdata();
    cout <<object.add(5,6);
    return 0;
}
