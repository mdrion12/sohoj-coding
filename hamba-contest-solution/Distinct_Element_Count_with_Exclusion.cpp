#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define no cout << "NO" << "\n";
#define yes cout << "YES" << "\n";
const int N = 1e5 + 5;
int par[N];
int group_size[N];
int level[N];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    set<int> s;
    for (int i = 1; i <= n; i++)
    {
        int v;
        cin >> v;
        if (v != m)
        {
            s.insert(v);
        }
    }
    cout << s.size() << "\n";
    return 0;
}