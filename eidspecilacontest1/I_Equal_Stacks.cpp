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
    int n1;
    int n2;
    int n3;
    cin >> n1 >> n2 >> n3;
    int h1 = 0, h2 = 0, h3 = 0;

    vector<int> tower1(n1);
    for (int i = 0; i < n1; i++)
    {
        cin >> tower1[i];
        h1 += tower1[i];
    }
    vector<int> tower2(n2);
    for (int i = 0; i < n2; i++)
    {
        cin >> tower2[i];
        h2 += tower2[i];
    }
    vector<int> tower3(n3);
    for (int i = 0; i < n3; i++)
    {
        cin >> tower3[i];
        h3 += tower3[i];
    }

    bool equalHeight = false;
    if (h1 == h2 && h2 == h3)
    {
        equalHeight = true;
    }
    int r1 = 0, r2 = 0, r3 = 0;
    while (!equalHeight)
    {
        if (h1 >= h2 && h1 >= h3)
        {
            h1 -= tower1[r1];
            r1++;
        }
        else if (h2 >= h1 && h2 >= h3)
        {
            h2 -= tower2[r2];
            r2++;
        }
        else if (h3 >= h1 && h3 >= h2)
        {
            h3 -= tower3[r3];
            r3++;
        }
        if ((h1 == h2 && h2 == h3) || (h1 == 0 && h2 == 0 && h3 == 0))
        {
            equalHeight = true;
        }
    }
    cout << h1;
    return 0;
}