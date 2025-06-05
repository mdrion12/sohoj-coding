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
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        auto isOk = [&](ll mid)
        {
            ll value = (mid * (mid + 1)) / 2;
            if (value <= n)
            {
                return 0;
            }
            else
            {
                return 1;
            }
        };
        ll l = 0, r = 1e9;
        ll answer = 0;
        while (l <= r)
        {
            ll mid = l + (r - l) / 2;
            if (isOk(mid) == 0)
            {
                answer = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << answer << "\n";
    }

    return 0;
}