#include <bits/stdc++.h>
using namespace std;

int arr[100001];

int main()
{
    int t;
    cin >>t;
    while(t--)
    {
       int n, m, x;
       cin >>n>>m>>x;
       cout <<"YES\n";
       set<pair<int, int>>s; // height aur index of the tower isme store hoga
       for (int i = 1; i <= m; i++)
       {
           s.insert({0,i});
       }
       for (int i = 0; i < n; i++)
       {
           cin >>arr[i];
           pair<int, int> p = *s.begin();
           s.erase(p);
           cout <<p.second<<" ";
           s.insert({p.first+arr[i], p.second});
       }
       cout <<endl;
    }
    return 0;
}
