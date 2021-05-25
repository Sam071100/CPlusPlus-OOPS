// Revisiting Pointers new and delete keywords
#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int *ptr = &a;
    cout <<"The address and the value at address ptr is "<<ptr<<" "<<*ptr<<endl;

    // new keyword
    int *p = new int(40); // Dynamic variable in the heap memory
    cout <<"The address and the value at address p is "<<p<<" "<<*p<<endl;

     float *p1 = new float(40.152); // Dynamic variable
    cout <<"The address and the value at address p1 is "<<p<<" "<<*p1<<endl;

    int *arr = new int[3];// allocating 3 blocks of int memory
    // delete keyword
    delete []arr; // Releasing the memory block allocated to the arr 
    return 0;
}
