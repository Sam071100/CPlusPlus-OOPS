// OOPs Classes and Objects

    // C++ ---> intially called ----> C with Classes by stroustroup
    // Classes ---> extension of Structures (in C).
    // Structures had limitations
    // -----> Members are public
    // -----> No Methods
    // Classes ------> Structures + more
    // Classes -----> can have methods and properties.
    // Classes can make members as private and few as public
    // Structures in C++ are typedefed ?
    // You can declare Objects along with the Class Declaration
    /*Class Employee
    {
        // Classs Definition
     }Samrat, Shubham, Hp;*/ //THese are three objects
    //<---- Direct Object Declaration
    // Samrat.salary=8 makes no sense if salary is Private

// *********************************************************************************************************************************************
// Nesting of Member Functions :: is nothing but when the function of the class is calling another function of its class.This is mainly used if the function is declared in the private part of the class as it cannot be accesed by the main function so it has to be called by the public function of that same class and this is called Nesting of a Member Fumction. 

#include <iostream>
#include <string>
using namespace std;
class binary
{
    // Here by default string s is private if u don't write private:
    string s; // Private by Default.
    void chk_bin(); // This function is also private and cannot be accessed by the main function but can be defined outside the class.

public:
    void read();
    void ones();
    void display();
};

void binary :: read()
{
    cout <<"Enter a Binary Number\n";
    cin >>s;
}

void binary :: chk_bin()  // Private functions can be defined outside the class but should not be called outside the class. It should be only called by the function which is also defined inside the class.
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)!='0' && s.at(i)!='1')
        {
            cout <<"\nIncorrect Binary Format\n";
            exit(0); // Terminates the program.
        }
    }
}

void binary :: ones()
{
    chk_bin(); // Nesting of a member Function.
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else if (s.at(i)=='1')
        {
            s.at(i)='0';
        }
    }
}

void binary :: display()
{
    cout <<"\nDisplaying your Binary number\n";
    for (int i = 0; i < s.length(); i++)
    {
        cout <<s.at(i);
    }
    
}
int main()
{
    
    binary b; // Here b is an object of the class binary
    b.read();
    //b.chk_bin(); cannot be called from here as this function is defined in the private: part of the class so it can be accessed only by the function of the that class.
    b.display();// Befire one's complement the result is displayed.
    b.ones(); // Here this function interchanges the 1's and 0's of the binary string. Basically ones's complement.
    b.display();// After one's complement the result is displayed.
    return 0;
}
