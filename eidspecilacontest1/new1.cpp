#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> suffix(n + 1);
    suffix[n] = v[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        suffix[i] = suffix[i + 1] + v[i];
    }
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (suffix[i] >= x)
        {
            count++;
        }
    }
    int ans = n * (k - 1) + count;
    cout << ans << "\n";
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
