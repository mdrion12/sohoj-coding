#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define no cout << "NO" << "\n";
#define yes cout << "YES" << "\n";
const int N = 1e6 + 5;
int par[N];
int group_size[N];
int level[N];
int n, k;
vector<int> arr(n + 1);
int dp[16][N];
int fun(int index, int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (index > k)
    {
        return 1e9;
    }
    if (dp[index][n] != -1)
    {
        return dp[index][n];
    }
    if (n - arr[index] >= 0)
    {
        int op1 = fun(index, n - arr[index]) + 1;
        int op2 = fun(index + 1, n);
        return dp[index][n] = min(op1, op2);
    }
    else
    {
        int op2 = fun(index + 1, n);
        return dp[index][n] = op2;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> k;
    int inf = 1e9;
    for (int i = 1; i <= k; i++)
    {
        cin >> arr[i];
    }
    memset(dp, -1, sizeof(dp));
    int value = fun(1, n);
    if (value == inf)
    {
        cout << -1 << "\n";
    }
    else
    {
        cout << value << "\n";
    }
    return 0;
}