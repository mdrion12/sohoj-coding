#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define no cout << "NO" << "\n";
#define yes cout << "YES" << "\n";
const int N = 1e6 + 5;
int par[N];
int group_size[N];
int level[N];
bool isLeapYear(int year)
{

    bool cond1 = (year % 4 == 0 && year % 100 != 0);
    bool cond2 = (year % 400 == 0);
    bool cond3 = (year % 9 == 0 && year % 45 != 0);

    return cond1 || cond2 || cond3;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int y1, y2;
    cin >> y1 >> y2;

    bool found = false;
    for (int year = y1; year <= y2; year++)
    {
        if (isLeapYear(year))
        {
            cout << year << "\n";
            found = true;
        }
    }

    if (!found)
    {
        cout << "No Weird Leap Year\n";
    }

    return 0;
}
