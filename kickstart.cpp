#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int tc=0;
    while (t--)
    {
        tc++;
        int n, b;
        cin >> n >> b;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int sum = 0, i = 0;
        for (i = 0; i < n; i++)
        {
            sum += arr[i];
            if (sum > b)
            {
                cout <<"Case #"<<tc<<": "<<i<<endl;
                break;
            }
            else if (sum == b)
            {
                cout <<"Case #"<<tc<<": "<< i + 1 << endl;
                break;
            }
        }
    }
    return 0;
}