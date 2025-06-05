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
        int n, m;
        cin >> n >> m;
        map<int, int> mp1, mp2;

        for (int i = 0; i < n; i++)
        {
            int v;
            cin >> v;
            mp1[v]++;
        }
        for (int i = 0; i < m; i++)
        {
            int v;
            cin >> v;
            mp2[v]++;
        }

        ll count = 0;
        auto it1 = mp1.begin();
        auto it2 = mp2.begin();

        while (it1 != mp1.end() && it2 != mp2.end())
        {
            if (it1->first == it2->first)
            {
                count += abs(it1->second - it2->second);
                it1++;
                it2++;
            }
            else if (it1->first < it2->first)
            {
                count += it1->second;
                it1++;
            }
            else
            {
                count += it2->second;
                it2++;
            }
        }

        while (it1 != mp1.end())
        {
            count += it1->second;
            it1++;
        }
        while (it2 != mp2.end())
        {
            count += it2->second;
            it2++;
        }

        cout << count << "\n";
    }
    return 0;
}
