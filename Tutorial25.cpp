#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;
    static int count;
    public:
    void setId()
    {
        salary=122;
        cout <<"Enter the Id of the Employee\n";
        cin >>id;
        count++;
    }
    void getId()
    {
        cout <<"The Id of  Employee is "<<id<<" Whose Number is "<<count<<endl;
        cout <<"The Salary of the Employee is "<<salary<<endl;
    }

};

int Employee :: count; // This line is neccessary if you create the static variable in the class.
int main()
{
    // Employee shubham , samrat, harry, sam;
    // samrat.setId();
    // samrat.getId();

    Employee fb[4]; // here fb is the name of the company or array.This array is used when there are so many objects like 2000 and it is very difficult to write the code for each 2000 employee (objects) and thus the fb is the array of the objects.
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }
    return 0;
}
