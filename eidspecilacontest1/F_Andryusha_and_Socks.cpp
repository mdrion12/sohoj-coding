#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define no cout << "NO" << "\n";
#define yes cout << "YES" << "\n";
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

    int n;
    cin >> n;
    vector<int> v;
    int ans = 1;
    for (int i = 0; i < 2 * n; i++)
    {
        int val;
        cin >> val;
        if (v.empty())
        {
            v.push_back(val);
        }
        else
        {
            auto it = find(v.begin(), v.end(), val);
            if (it != v.end())
            {
                v.erase(it);
            }
            else
            {
                v.push_back(val);
            }
        }
        ans = max(ans, (int)v.size());
    }
    ans = max(ans, (int)v.size());
    cout << ans << "\n";

    return 0;
}