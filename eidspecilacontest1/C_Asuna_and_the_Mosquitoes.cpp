// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> v(n);
        int countjor = 0, countbijor = 0;
        ll mv = LLONG_MIN, sum = 0; 

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mv = max(mv, v[i]);
            sum += v[i]; 

            if (v[i] % 2 == 0)
            {
                countjor++;
            }
            else
            {
                countbijor++;
            }
        }

        if (countjor == 0 || countbijor == 0)
        {
            cout << mv << "\n";
        }
        else
        {

            sum -= (countbijor - 1); 
                                    
            cout << sum << "\n";
        }
    }

    return 0;
}
