#include <bits/stdc++.h>
using namespace std;

int main()
{
    // <key, value>
    map<char, int> M;
    unordered_map<char, int> U;

    // add (key,value), erase(key, value) takes O(LogN) -> ordered maps and O(1) -> unordered maps

    string s ="shubham samrat";
    for(char c : s) M[c]++; // O(N LogN) where N = |s|
    for(char c : s) U[c]++; // O(N)

    return 0;
}
