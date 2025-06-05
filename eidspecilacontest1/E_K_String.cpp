#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define no cout << "NO" << "\n";
#define yes cout << "YES" << "\n";
bool cmp(pair<char, int> a, pair<char, int> b)
{
    return a.second < b.second;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;
    map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        mp[c]++;
    }

    vector<pair<char, int>> v;
    for (auto it : mp)
    {
        v.push_back(it);
    }
    sort(v.begin(), v.end(), cmp);
    if (v.size() < k)
    {
        cout << k - v.size() << "\n";
    }
    else
    {
        int required = v.size() - k;
        int sum = 0;
        for (int i = 0; i < required; i++)
        {
            sum += v[i].second;
        }
        cout << sum << "\n";
    }

    return 0;
}