#include <bits/stdc++.h>
using namespace std;

int ClosetoZero(int *p,int n)
{
    int currentvalue =0;
    int closestvalue=p[0];
    sort(p, p+n);
    for (int i = 0; i < n; i++)
    {
        currentvalue= p[i]* p[i];
        if (currentvalue <=(closestvalue*closestvalue))
        {
            closestvalue= p[i];
        }
    }
    return closestvalue;
}

int main()
{
    int n;
    cin >>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >>arr[i];
    }
    cout <<ClosetoZero(arr,n)<<endl;
    return 0;
}
