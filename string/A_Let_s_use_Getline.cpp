#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    getline(cin, s);
    string x = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '\\')
        {
            break;
        }
        x += s[i];
    }
    cout << x << "\n";

    return 0;
}