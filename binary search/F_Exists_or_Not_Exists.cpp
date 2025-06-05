#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define no cout << "NO" << "\n";
#define yes cout << "YES" << "\n";

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, m;
    cin >> n >> m;
    vector<pair<ll, ll>> v;
    for (int i = 0; i < n; i++)
    {
        ll valu;
        cin >> valu;
        v.push_back({valu, i + 1});
    }
    sort(v.begin(), v.end());

    while (m--)
    {
        ll a, b, c;
        cin >> a >> b >> c;

        ll value2 = lower_bound(v.begin(), v.end(), make_pair(c, 0LL)) - v.begin();
        ll value = upper_bound(v.begin(), v.end(), make_pair(c, LLONG_MAX)) - v.begin();

        bool found = false;
        for (ll i = value2; i < value; i++)
        {
            if (v[i].second >= a && v[i].second <= b)
            {
                found = true;
                break;
            }
        }

        if (found)
        {
            yes
        }
        else
        {
            no
        }
    }

    return 0;
}
