#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define no cout << "NO" << "\n";
#define yes cout << "YES" << "\n";

ll countTrailingZeros(ll n)
{
    ll cnt = 0;
    while (n)
    {
        cnt += n / 5;
        n /= 5;
    }
    return cnt;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int cs = 1; cs <= t; cs++)
    {
        ll q;
        cin >> q;
        ll l = 0, r = 1e18;
        ll ans = -1;
        while (l <= r)
        {
            ll mid = l + (r - l) / 2;
            ll zeros = countTrailingZeros(mid);
            if (zeros == q)
            {
                ans = mid;
                r = mid - 1;
            }
            else if (zeros < q)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        if (ans == -1)
        {
            cout << "Case " << cs << ": impossible\n";
        }
        else
        {
            cout << "Case " << cs << ": " << ans << "\n";
        }
    }
    return 0;
}
