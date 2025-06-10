#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define no cout << "NO" << "\n";
#define yes cout << "YES" << "\n";
const int N = 1e5 + 5;
int par[N];
int group_size[N];
int level[N];
bool cmp(pair<string, int> a, pair<string, int> b)
{
    return a.second > b.second;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    vector<pair<string, int>> vp;
    for (int i = 1; i <= t; i++)
    {
        string s;
        cin >> s;
        int m;
        cin >> m;
        vp.push_back({s, m});
    }
    sort(vp.begin(), vp.end(), cmp);
    cout << vp[0].first << "\n";

    return 0;
}