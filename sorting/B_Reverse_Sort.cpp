#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define no cout << "NO" << "\n";
#define yes cout << "YES" << "\n";

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
        string s, x;
        cin >> s;
        x = s;
        sort(x.begin(), x.end());
        if (s == x)
        {
            cout << 0 << "\n";
            continue;
        }
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != x[i])
            {
                v.push_back(i + 1);
            }
        }
        cout << 1 << "\n";
        cout << v.size() << " ";
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}