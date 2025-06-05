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
    while (t--)
    {
        int a;
        cin >> a;
        int fre[101] = {0};
        int mn = INT_MAX;
        for (int i = 0; i < a; i++)
        {
            int v;
            cin >> v;
            mn = min(mn, v);
            fre[v]++;
        }
        cout << a - fre[mn] << "\n";
    }

    return 0;
}