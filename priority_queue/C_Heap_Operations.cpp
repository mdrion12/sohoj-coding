#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    priority_queue<int, vector<int>, greater<int>> pq;
    vector<pair<string, int>> v;
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        int x;
        cin >> s;

        if (s == "insert")
        {
            cin >> x;
            pq.push(x);
            v.push_back({"insert", x});
        }
        else if (s == "getMin")
        {
            cin >> x;
            while (!pq.empty() && pq.top() < x)
            {
                pq.pop();
                v.push_back({"removeMin", 0});
            }
            if (pq.empty() || pq.top() > x)
            {
                pq.push(x);
                v.push_back({"insert", x});
            }
            v.push_back({"getMin", x});
        }
        else if (s == "removeMin")
        {
            if (pq.empty())
            {
                v.push_back({"insert", 0});
                pq.push(0);
            }
            pq.pop();
            v.push_back({"removeMin", 0});
        }
    }

    cout << v.size() << "\n";
    for (auto it : v)
    {
        if (it.first == "removeMin")
        {
            cout << it.first << "\n";
        }
        else
        {
            cout << it.first << " " << it.second << "\n";
        }
    }

    return 0;
}
