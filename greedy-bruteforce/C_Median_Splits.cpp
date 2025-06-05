#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define no cout << "NO" << "\n";
#define yes cout << "YES" << "\n";
vector<int> divisors(int n)
{
    vector<int> divisor;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            divisor.push_back(i);
            if (i != n / i)
            {
                divisor.push_back(n / i);
            }
        }
    }
    return divisor;
}
bool is_prime(int x)
{
    if (x < 2)
        return false;
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        ll n, k;
        cin >> n >> k;

        vector<ll> a(n + 1), pre(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        pre[0] = 0;
        for (int i = 1; i <= n; i++)
        {

            ll c;
            if (a[i] <= k)
            {
                c = 1;
            }
            else
            {
                c = -1;
            }
            pre[i] = pre[i - 1] + c;
        }

        ll total = pre[n];

        ll arr = pre[1];

        ll mg = LLONG_MAX;
        if (pre[1] >= 0)
        {
            mg = pre[1];
        }

        bool hag = (pre[1] >= 0);

        bool found = false;

        for (int r = 2; r < n && !found; r++)
        {
            ll play = pre[r];

            if (hag && mg <= play)
            {
                found = true;
                break;
            }
            else if (hag && play <= total)
            {
                found = true;
                break;
            }
            else if (arr <= play && play <= total)
            {
                found = true;
                break;
            }

            if (play < arr)
                arr = play;
            if (play >= 0)
            {
                if (hag || (play < mg))
                {
                    mg = play;
                }
                hag = true;
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
