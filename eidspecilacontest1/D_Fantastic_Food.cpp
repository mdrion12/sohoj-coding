#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int case_num = 1; case_num <= t; ++case_num)
    {
        int n;
        cin >> n;

        vector<int> prices(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> prices[i];
        }

        long long total_cost = 0;
        for (int price : prices)
        {
            total_cost += price + 1;
        }

        cout << "Case " << case_num << ": " << total_cost << endl;
    }

    return 0;
}