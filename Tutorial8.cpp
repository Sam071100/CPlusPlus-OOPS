#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    // int a =45;
    // cout <<"The value of a is "<<a<<endl;
    // a++;
    // cout <<"The value of a is "<<a<<endl;
    
    // Constants in c++
    const int a=3;
    cout <<"The value of a is "<<a<<endl;

    int i=3, j=78, k=1223;
    cout <<"The value of i is "<<setw(4)<<i<<endl;
    cout <<"The value of j is "<<setw(4)<<j<<endl;
    cout <<"The value of k is "<<setw(4)<<k<<endl;

    cout <<"The value of i without setw is "<<i<<endl;
    cout <<"The value of j without setw is "<<j<<endl;
    cout <<"The value of k without setw is "<<k<<endl;
    

    return 0;
}
