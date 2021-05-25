#include <iostream>
using namespace std;
int main()
{
    int marks[4]={23, 45, 56, 59};
    cout <<"Printing the content of the Array"<<endl;
    cout <<marks[0]<<endl;
    cout <<marks[1]<<endl;
    cout <<marks[2]<<endl;
    cout <<marks[2]<<endl;

    // int mathsMarks[4];
    //  for (int i = 0; i < 4; i++)
    //  {
    //      cout <<"Enter your Maths marks of student "<<i+1<<endl;
    //      cin >>mathsMarks[i];
    //  }
    //  for (int i = 0; i < 4; i++)
    //  {
    //      cout <<"The marks of the student "<<i+1<<" in maths was "<<mathsMarks[i]<<endl;
    //  }
     int* p=marks;
     cout <<"The value of marks[0] is "<<*p<<endl;
     cout <<"The value of marks[0] is "<<*(p+1)<<endl;
     cout <<"The value of marks[0] is "<<*(p+2)<<endl;
     cout <<"The value of marks[0] is "<<*(p+3)<<endl;
     cout <<*(p++)<<endl;
     cout <<*p<<endl;
     cout <<*(++p)<<endl;
    return 0;
}