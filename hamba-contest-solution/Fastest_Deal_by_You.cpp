#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, b;
    cin >> n >> b;

    int max_data = 0;

    for (int i = 0; i < n; ++i)
    {
        int speed, cost;
        cin >> speed >> cost;

        int months = b / cost;
        int data = speed * months;

        max_data = max(max_data, data);
    }

    cout << max_data << "\n";
    return 0;
}
