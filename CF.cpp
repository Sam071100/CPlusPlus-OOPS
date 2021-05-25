#include <bits/stdc++.h>
using namespace std;

int f(int n, int a, int b, int c)
{
   int ans;
   if (n <=0)
   {
       return 0;
   }
   else
   {
       ans= max(1+f(n-a,a,b,c)+f(n-b,a,b,c)+f(n-c,a,b,c));
   }
   return ans;
}
int main()
{
    int n,a,b,c;
    cin >>n>>a>>b>>c;
    f(n,a,b,c);
    cout <<"\n";
    return 0;
}
