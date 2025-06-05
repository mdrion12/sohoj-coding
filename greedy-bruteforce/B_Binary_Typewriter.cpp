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
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;

        ll M = 0, c01 = 0, c10 = 0;
        char p = '0';
        for (int i = 0; i < n; i++)
        {
            char cur = s[i];
            if (cur != p)
            {
                M++;
                if (p == '0')
                    c01++;
                else
                    c10++;
            }
            p = cur;
        }

        ll bg;
        if (c01 >= 2 || c10 >= 2)
        {
            bg = 2;
        }
        else if (M >= 2)
        {
            bg = 1;
        }
        else
        {
            bg = 0;
        }

        ll result = M - bg;
        cout << n + result << "\n";
    }
    return 0;
}
