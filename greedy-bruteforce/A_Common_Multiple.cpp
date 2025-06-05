// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define no cout << "NO" << "\n";
// #define yes cout << "YES" << "\n";
// vector<int> divisors(int n)
// {
//     vector<int> divisor;
//     for (int i = 1; i * i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             divisor.push_back(i);
//             if (i != n / i)
//             {
//                 divisor.push_back(n / i);
//             }
//         }
//     }
//     return divisor;
// }
// bool is_prime(int x)
// {
//     if (x < 2)
//         return false;
//     for (int i = 2; i * i <= x; i++)
//     {
//         if (x % i == 0)
//             return false;
//     }
//     return true;
// }
// int gcd(int a, int b)
// {
//     if (b == 0)
//     {
//         return a;
//     }
//     return gcd(b, a % b);
// }
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     if (!(std::cin >> t))
//         return 0;
//     while (t--)
//     {
//         ll n;
//         cin >> n;
//         array<bool, 101> seen{};
//         ll distinct = 0;
//         for (int i = 0; i < n; i++)
//         {
//             int a;
//             cin >> a;
//             if (!seen[a])
//             {
//                 seen[a] = true;
//                 distinct++;
//             }
//         }
//         cout << distinct << "\n";
//     }
//     return 0;
// }
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
        vector<ll> v(n);
        map<ll, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        cout << mp.size() << "\n";
    }

    return 0;
}
