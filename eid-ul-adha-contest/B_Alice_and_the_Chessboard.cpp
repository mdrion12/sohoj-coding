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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int vis[9][9];
        memset(vis, 0, sizeof(vis));
        int x = a, y = b;
        while (x >= 1 && y >= 1)
        {
            vis[x][y] += 1;
            x--;
            y--;
        }
        x = a, y = b;

        while (x >= 1 && y <= 8)
        {
            vis[x][y] += 1;
            x--;
            y++;
        }
        x = a, y = b;

        while (x <= 8 && y >= 1)
        {
            vis[x][y] += 1;
            x++;
            y--;
        }
        x = a, y = b;

        while (x <= 8 && y <= 8)
        {
            vis[x][y] += 1;
            x++;
            y++;
        }
        // done
        x = c, y = d;
        while (x >= 1 && y >= 1)
        {
            vis[x][y] += 1;
            x--;
            y--;
        }
        x = c, y = d;

        while (x >= 1 && y <= 8)
        {
            vis[x][y] += 1;
            x--;
            y++;
        }
        x = c, y = d;

        while (x <= 8 && y >= 1)
        {
            vis[x][y] += 1;
            x++;
            y--;
        }
        x = c, y = d;

        while (x <= 8 && y <= 8)
        {
            vis[x][y] += 1;
            x++;
            y++;
        }
        // for (int i = 1; i <= 8; i++)
        // {
        //     for (int j = 1; j <= 8; j++)
        //     {
        //         cout << vis[i][j] << " ";
        //     }
        //     cout << "\n";
        // }
        // cout << "done" << "\n";
        if (vis[c][d] == 2 || vis[c][d] == 5)
        {
            cout << "Yes" << "\n";
        }
        else
        {
            cout << "No" << "\n";
        }
    }

    return 0;
}