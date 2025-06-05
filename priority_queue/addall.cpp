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

    while (1)
    {
        int n;
        cin >> n;
        if (n == 0)
        {
            break;
        }
        int x = n;
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i < x; i++)
        {
            int vx;
            cin >> vx;
            pq.push(vx);
        }

        ll sum = 0;
        vector<int> v;

        while (pq.size() > 1)
        {
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();

            int temp = a + b;
            v.push_back(temp);
            pq.push(temp);
        }

        for (auto it : v)
        {
            sum += it;
        }

        cout << sum << "\n";
    }

    return 0;
}
