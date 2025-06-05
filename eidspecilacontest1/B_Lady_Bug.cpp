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
        int n;
        cin >> n;
        string a, b;
        cin >> a;
        cin >> b;
        int count1 = 0, count0 = 0;
        int ca1 = 0, cb0 = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '0')
            {
                count0++;
            }
            else
            {
                count1++;
                ca1++;
            }
            if (b[i] == '0')
            {
                count0++;
                cb0++;
            }
            else
            {
                count1++;
            }
        }
        if (count0 == n * 2)
        {
            yes
        }
        else if (count1 == count0)
        {
            yes
        }
        else
            no
    }

    return 0;
}