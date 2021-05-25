//" Program to Read + Write to a file"
#include <iostream>
#include <fstream>
using namespace std;

// 3 Useful classes included in the header file <fstream>::
//   1. fstreambase
//   2. ifstream --> Derived from 1
//   3. ofstream --> Derived from 1
/*
Read operation::
  ifstream in("File Name.txt");
  string st;
  in >>st;
*/

/*
Write Operation::
  ofstream out("File Name.txt");
  string st="Enter the string you want to store (write) in the file";
  out <<st; Writes to a file
*/  
int main()
{
  //  Connecting our file with sout stream
    ofstream sout("sample61.txt");

    // Creating a name string and filling it with the string entered by the user
    string name;
    cout <<"Enter your Name\n";
    getline(cin, name);

    // Writing the string to the file
    sout <<name;

    // Closes the link between the file and the program
    sout.close();

    ifstream sin("sample61.txt");
    string content;
    getline(sin, content);
    cout <<"The content of the file is :";
    cout <<content<<endl;
    sin.close();
    return 0;
}
