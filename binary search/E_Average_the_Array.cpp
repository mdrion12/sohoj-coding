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

    int a;
    cin >> a;
    vector<ll> v(a);

    for (int i = 0; i < a; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    vector<ll> pref(a);
    pref[0] = v[0];
    for (int i = 1; i < a; i++)
    {
        pref[i] = pref[i - 1] + v[i];
    }

    ll q;
    cin >> q;

    while (q--)
    {
        ll x;
        cin >> x;

        int left = 0, right = a - 1;
        int answer = 0;

        while (left <= right)
        {
            int mid = (left + right) / 2;
            ll sum = pref[mid];
            double avg = (double)sum / (mid + 1);

            if (avg < x)
            {

                answer = mid + 1;
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }

        cout << answer << "\n";
    }

    return 0;
}
