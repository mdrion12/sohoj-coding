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
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        ll rem = b - a;
        c -= rem;
        bool f = false;
        if (a == c && b == c)
        {
            f = true;
        }
        else
        {
            ll r = c - b;
            if (r >= 0 && r % 3 == 0)
            {
                f = true;
            }
        }
        if (f)
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