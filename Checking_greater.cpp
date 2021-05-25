#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,a,b,c;
    cin >>x>>y>>z;
    if (x>y || x>z)
    {
        c=x;
        if (y>z)
        {
            b=y;
            a=z;
        }
        else
        {
            b=z;
            a=y;
        }
    }
    else if (y>x|| y>z)
    {
        c=y;
        if (x>z)
        {
            b=x;
            a=z;
        }
        else
        {
            b=z;
            a=x;
        }
        
    }
    else if (z>x|| z>y)
    {
        c=z;
        if (x>y)
        {
            b=x;
            a=y;
        }
        else
        {
            b=y;
            a=x;
        }
    }
    
    cout <<a<<b<<c;
    return 0;
}
