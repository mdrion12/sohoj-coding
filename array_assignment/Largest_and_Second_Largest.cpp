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
        int first = INT_MIN;
        int arr[a];
        for (int i = 0; i < a; i++)
        {

            cin >> arr[i];
            first = max(first, arr[i]);
        }
        int second = INT_MIN;
        for (int i = 0; i < a; i++)
        {
            if (arr[i] < first)
            {
                second = max(second, arr[i]);
            }
        }
        cout << first + second << "\n";
    }

    return 0;
}