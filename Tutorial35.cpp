// Destructor never takes an argument nor does it returns any value
#include <iostream>
using namespace std;
int count=0;
class num
{
    public:
     num(){
         count++;
         cout <<"This is the time when constructor is called for object number "<<count<<endl;
     }
     ~num()
     {
         cout <<"This is the time when my destructor is called for object number "<<count<<endl;
         count--;
     }
};
int main()
{
    cout <<"We are inside the main function\n";
    cout <<"Creating the first object n1\n";
    num n1;
    {
        cout <<"Entering the block\n";
        cout <<"Creating two more objects "<<endl;
        num n2, n3;
        cout <<"Exiting this block\n";
    }// is blocks ke andar jo bhi cheez banegi woh blocks ke bahar destroy ho jayenge
    cout <<"Back to main\n";
    return 0;
}
// In short jab compiler ko pata chal jayega ki ab object ki zarorat nahi hai toh woh destructor ko call kardega.