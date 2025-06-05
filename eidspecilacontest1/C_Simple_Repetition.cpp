
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
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        ll x, k;
        cin >> x >> k;

        if (k == 1)
        {

            if (is_prime(x))
            {
                cout << "YES" << "\n";
            }
            else
            {
                cout << "NO" << "\n";
            }
        }
        else
        {

            if (x != 1)
            {
                cout << "NO" << "\n";
            }
            else
            {

                ll value = 0;
                for (int i = 0; i < k; i++)
                {
                    value = value * 10 + 1;
                }
                if (is_prime(value))
                {
                    cout << "YES" << "\n";
                }
                else
                {
                    cout << "NO" << "\n";
                }
            }
        }
    }

    return 0;
}