#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n < 26)
    {
        cout << "NO";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            s[i] = tolower(s[i]); // Converting the Capital Letters into small letters.
        }
        sort(s.begin(), s.end());

        int j = 0;
        char a[26];
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] != s[i + 1])
            {
                a[j] = s[i];
                j++;
            }
        }
        a[j] = s[n];
        if (j == 25)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    return 0;
}
