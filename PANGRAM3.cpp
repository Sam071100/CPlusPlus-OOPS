#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    string s;
    cin >>s;
    vector<bool>mark(26,false);
    int index;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >='A' && s[i] <='Z')
        {
            index=s[i]-'A';
        }
        else if (s[i] >='a' && s[i] <='z')
        {
            index=s[i]-'a';
        }
        else
        {
            continue;
        }
        mark[index]=true;
    }
    for (int i = 0; i < 26; i++)
    {
        if (mark[i]==false)
        {
            cout <<"NO";
            return 0;
        }
    }
    cout <<"YES";
    
    return 0;
}
