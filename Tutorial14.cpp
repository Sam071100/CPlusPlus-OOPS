#include <iostream>
using namespace std;
// typedef struct employee
// {
//     int Eid;
//     char favchar;
//     float salary;
// }ep;
// ep harry;

union money
{  // yeh paisa dene ka tarika hai village mein aur ek bar mai ek hi tarika use kiya jayega isliye union banaya jata hai
    int rice; //4
    char favchar; //1
    float pounds; //4
} ep;


int main()
{
    // ep Samrat;
    // harry.Eid=2;
    // Samrat.Eid=1;
    // Samrat.favchar='s';
    // Samrat.salary=20000000.00;
    // cout <<Samrat.Eid<<endl;
    // cout <<Samrat.favchar<<endl;
    // cout <<Samrat.salary<<endl;
    // cout <<harry.Eid<<endl;
    union money Samrat;
    Samrat.rice=4;
    Samrat.favchar='s';
    cout <<Samrat.rice<<endl;
    cout <<Samrat.favchar<<endl;

    enum Meal {Breakfast, Lunch, Dinner};
    Meal m1= Lunch; // Here Meal becomes a Data type where m1 is a variable of that datatype.
    cout <<m1<<endl;
    cout <<Breakfast<<endl;
    cout <<Lunch<<endl;
    cout <<Dinner<<endl;
    return 0;
}
