#include <bits/stdc++.h>
using namespace std;


// Map is an associative array
int main()
{
    map<string, int> marksMap;
    marksMap["shubham"] = 100;
    marksMap["samrat"] = 98;
    marksMap["harry"] = 80;

    marksMap.insert({{"Obama", 56}, {"Modi", 31}});

    map<string, int>::iterator itr;

    for (itr = marksMap.begin(); itr != marksMap.end(); itr++)
    {
        cout <<itr->first<<" "; // Key
        cout <<(*itr).second<<endl;// Value
    }
    
    cout <<"The size is "<<marksMap.size();
    return 0;
}
