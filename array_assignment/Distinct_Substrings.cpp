#include <bits/stdc++.h>
using namespace std;
#define ll long long
int count(string s)
{
    unordered_set<string> st;
    for (int i = 1; i <= s.size(); i++)
    {
        int sz = s.size();
        int l = 0, r = 0;
        string x;
        while (r < sz)
        {
            x += s[r];
            if ((r - l + 1) == i)
            {
                st.insert(x);
                x.erase(x.begin());
                l++;
            }
            r++;
        }
    }
    return st.size();
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
        string s;
        cin >> s;
        int res = count(s);
        cout << res << "\n";
    }

    return 0;
}