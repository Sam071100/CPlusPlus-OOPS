#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c, d;
    cin  >>n>>c>>d;
    // Details of the fountain
    int beauty, cost;
    char c;
    map<char, int> val; 
    while (n > 0)
    {
        cin >>beauty>>cost>>c;
        val[c]=cost;
        n--;
    }
    
    return 0;
}
