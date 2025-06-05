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
        string s;
        cin >> s;
        ll l = s.length();
        ll value = 0;
        for (int i = 0; i < l; i++)
        {
            if (s[i] != '0')
            {
                ll zero = 0;
                for (int j = 0; j < i; j++)
                {
                    if (s[j] == '0')
                        zero++;
                }
                int c = zero + 1;
                if (c > value)
                    value = c;
            }
        }
        ll remove = l - value;
        cout << remove << '\n';
    }
    return 0;
}
