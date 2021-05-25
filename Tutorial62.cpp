// "open() and eof() functions"
// eof --> end of file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream out;// File ko kholke usme likhna
    out.open("sample61.txt");
    out <<"This is me editing from tutorial 62\n";
    out <<"Again welcome back....";
    out.close();

    ifstream in;// File ko khloke usse padhna
    string st, st2;
    in.open("Sample60.txt");
    // getline(in, st);// in>>st is the method to read the file word by word whereas getline(in, st) is the method to read the file sentence by sentence.
    // getline(in, st2);
    // cout <<st<<endl;
    // cout <<st2;

    while (in.eof() ==0) // Reading the whole file in a single GO
    {
        getline(in,st);
        cout <<st<<endl;
    }
    
    in.close();

    return 0;
}
