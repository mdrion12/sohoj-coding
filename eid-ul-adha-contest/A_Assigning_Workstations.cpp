#include <bits/stdc++.h>
using namespace std;
#define ll long long


struct Compare
{
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        return a.second > b.second;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> vp;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        vp.push_back({x, x + y});
    }

    sort(vp.begin(), vp.end()); 

    priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> pq;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int arrival = vp[i].first;
        int end_time = vp[i].second;

        while (!pq.empty() && pq.top().second + m < arrival)
        {
            pq.pop();
        }

        if (!pq.empty() && pq.top().second <= arrival)
        {
            count++;
            pq.pop();
        }

        pq.push({arrival, end_time});
    }

    cout << count << "\n";
    return 0;
}
