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
        string s;
        cin >> s;
        int k = 3;
        int l = 0, r = 0;
        string x = "";
        bool f = false;
        while (r < s.size())
        {
            x += s[r];
            if (r - l + 1 == k)
            {

                if ((x[0] == 'a' || x[0] == 'e' || x[0] == 'i' || x[0] == 'o' || x[0] == 'u') && (x[1] == 'a' || x[1] == 'e' || x[1] == 'i' || x[1] == 'o' || x[1] == 'u') && (x[2] == 'a' || x[2] == 'e' || x[2] == 'i' || x[2] == 'o' || x[2] == 'u'))
                {
                    f = true;
                    break;
                }
                x.erase(0, 1);
                l++;
            }
            r++;
        }
        if (f)
        {
            cout << "Happy" << "\n";
        }
        else
        {
            cout << "Sad" << "\n";
        }
    }

    return 0;
}