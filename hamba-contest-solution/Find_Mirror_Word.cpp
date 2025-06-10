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
    string s;
    cin >> s;
    int l = 0, r = s.size() - 1;
    bool f = true;
    while (l < r)
    {
        if (s[l] != s[r])
        {
            f = false;
            break;
        }
        l++;
        r--;
    }
    if (f)
    {
        yes
    }
    else
    {
        no
    }
    return 0;
}