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
        vector<ll> v(n);
        priority_queue<ll> pq;
        map<ll, int> mp;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
            pq.push(v[i]);
        }
        ll sum = 0;
        ll ts = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            sum += v[i];
            ts += v[i];
            mp[v[i]]--;

            while (!pq.empty() && mp[pq.top()] == 0)
            {
                pq.pop();
            }

            if (!pq.empty() && pq.top() > v[i])
            {
                sum -= v[i];
                sum += pq.top();
            }

            cout << sum << " ";
            sum = ts;
        }
        cout << "\n";
    }

    return 0;
}
