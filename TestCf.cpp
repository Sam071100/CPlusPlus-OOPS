#include <bits/stdc++.h>
using namespace std;
#define ll long long int
// This problem was of hail XOR and it should be left like this as it reminds me the pain in solving this and the thing I got to learn from this.
int main()
{
    int t;
    ll n, x, a[100001], k = 30;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        vector<vector<ll>> idx(k + 1); // 2 dimensional vector
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i == n - 1)
            {
                continue;
            }

            for (ll j = k; j >= 0; j--)
            {
                if (a[i] & (1LL << j))
                {
                    idx[j].push_back(i);
                }
            }
        }

        vector<ll> cnt(k + 1, 0);
        for (ll i = 0; i < n-1 ; i++)
        {
            for (ll j = k; j >= 0; j--)
            {
                ll mask = 1LL << j;
                if ((a[i] & mask) == 0)
                {
                    continue;
                }
                a[i] ^= mask;
                ll d;
                if (++cnt[j] < idx[j].size())
                {
                    d = idx[j][cnt[j]++];
                }
                else
                {
                    d = n - 1;
                }
                a[d] ^= mask;
                if (--x == 0)
                {
                    break;
                }
            }
            if (x == 0)
            {
                break;
            }
        }
        if (x == 1 || (x % 2 == 1 && n == 2))
        {
            a[n - 2] ^= 1, a[n - 1] ^= 1;
        }

        for (ll i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

