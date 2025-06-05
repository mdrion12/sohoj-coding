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
        priority_queue<int> pq;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int v;
            cin >> v;
            pq.push(v);
        }
        while (!pq.empty())
        {
            cout << pq.top() << " ";
            int x = pq.top();
            pq.pop();
            if (x / 2 != 0)
            {
                pq.push(x / 2);
            }
        }
        cout << "\n";
    }

    return 0;
}