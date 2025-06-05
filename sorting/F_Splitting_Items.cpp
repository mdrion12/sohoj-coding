#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end(), greater<ll>());

        ll sum1 = 0, sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                sum1 += v[i];
            }
            else
            {
                ll val = min(k, v[i - 1] - v[i]);
                v[i] += val;
                k -= val;
                sum2 += v[i];
            }
        }

        cout << sum1 - sum2 << "\n";
    }

    return 0;
}
