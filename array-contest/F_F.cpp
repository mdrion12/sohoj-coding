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

    if (t <= 1)
    {
        cout << "0\n";
        return 0; // No comparisons can be made with one or zero elements
    }

    vector<int> v(t);
    for (int i = 0; i < t; i++)
    {
        cin >> v[i];
    }

    ll count = 0;
    for (int i = 0; i < t - 1; i++)
    {
        if (v[i] > v[i + 1])
        {
            count++;
        }
    }

    cout << count << "\n";

    return 0;
}
