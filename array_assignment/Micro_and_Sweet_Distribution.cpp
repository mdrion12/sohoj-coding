#include <bits/stdc++.h>
using namespace std;
#define ll long long
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
        int n, m, sx, sy, x, y;
        cin >> n >> m >> sx >> sy >> x >> y;

        if (sx == 1 && sy == 1)
        {
            if (x % 2 == 1)
            {
                if (y == m)
                {
                    if (x == n)
                        cout << "Over";
                    else
                        cout << "Back";
                }
                else
                {
                    cout << "Right";
                }
            }
            else
            {
                if (y == 1)
                {
                    if (x == n)
                        cout << "Over";
                    else
                        cout << "Back";
                }
                else
                {
                    cout << "Left";
                }
            }
        }
        else if (sx == 1 && sy == m)
        {
            if (x % 2 == 1)
            {
                if (y == 1)
                {
                    if (x == n)
                        cout << "Over";
                    else
                        cout << "Back";
                }
                else
                {
                    cout << "Left";
                }
            }
            else
            {
                if (y == m)
                {
                    if (x == n)
                        cout << "Over";
                    else
                        cout << "Back";
                }
                else
                {
                    cout << "Right";
                }
            }
        }
        else if (sx == n && sy == 1)
        {
            int dx = n - x + 1;
            if (dx % 2 == 1)
            {
                if (y == m)
                {
                    if (x == 1)
                        cout << "Over";
                    else
                        cout << "Front";
                }
                else
                {
                    cout << "Right";
                }
            }
            else
            {
                if (y == 1)
                {
                    if (x == 1)
                        cout << "Over";
                    else
                        cout << "Front";
                }
                else
                {
                    cout << "Left";
                }
            }
        }
        else
        {
            int dx = n - x + 1;
            if (dx % 2 == 1)
            {
                if (y == 1)
                {
                    if (x == 1)
                        cout << "Over";
                    else
                        cout << "Front";
                }
                else
                {
                    cout << "Left";
                }
            }
            else
            {
                if (y == m)
                {
                    if (x == 1)
                        cout << "Over";
                    else
                        cout << "Front";
                }
                else
                {
                    cout << "Right";
                }
            }
        }
        cout << endl;
    }

    return 0;
}