#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    set<vector<int>> st;
    while (t--)
    {
        int a;
        cin >> a;
        vector<int> v(a);
        for (int i = 0; i < a; i++)
        {
            int temp;
            cin >> temp;
            v[i] = temp;
        }
        st.insert(v);
    }
    cout << st.size() << "\n";

    return 0;
}