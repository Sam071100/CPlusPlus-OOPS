// "Working with Files"
#include <iostream>
#include <fstream> // helps in input and output stream of files
/*
The useful classes for working with files in C++ are:
1. fstreambase
2. ifstream ---> is Derived from fstreambase
3. ofstream ---> is Derived from fstreambase

In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open the file:
1. Using the Constructor
2. Using the member function open() of the class
*/
using namespace std;

int main()
{
    string st = "Shubham Samrat is a Good Boy and experienced Programmer";

    // Opening files using Constructor and writing it
    ofstream out("Sample60.txt"); // helps in Write operation
    // out is the object of class ofstream which is opening the file Sample60.txt for write operation
    out <<st;// Writes the string st into the file

    // Opening the files using Constructor and reading it.
    string st2, st3;
    ifstream in("Sample60_b.txt"); // helps in Reading operation
    // in is the object of class ifstream which is opening the file Sample60_b.txt and reading the information in it and storing it to string st2
    getline(in ,st3);// Helps in reading the whole line
    in >>st2; // isse khali without space wala string copy hoga, Jaha space hoga waha copy ruk jayega. Pura sentence read karne ke liye getline() use karna padega
    cout <<st3<<endl;
    cout <<st2<<endl;
    return 0;
}
