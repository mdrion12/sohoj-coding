#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);

    ll totalSum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        totalSum += v[i]; // মোট যোগফল বের করা
    }

    // যদি মোট যোগফল বিজোড় হয়, তাহলে সমান দুইভাগে ভাগ করা সম্ভব নয়
    if (totalSum % 2 != 0)
    {
        cout << 0 << "\n";
        return 0;
    }

    ll prefixSum = 0, countWays = 0;
    for (int i = 0; i < n - 1; i++)
    { // শেষ ইনডেক্সে ভাগ করা যাবে না
        prefixSum += v[i];
        if (prefixSum == totalSum / 2)
        {
            countWays++;
        }
    }

    cout << countWays << "\n";
    return 0;
}
