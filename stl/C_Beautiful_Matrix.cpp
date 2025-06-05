#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> divisors(int n)
{
    vector<int> divisor;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            divisor.push_back(i);
            if (i != n / i)
            {
                divisor.push_back(n / i);
            }
        }
    }
    return divisor;
}
bool is_prime(int x)
{
    if (x < 2)
        return false;
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[5][5];
    int row = 0, col = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                row = i;
                col = j;
            }
        }
    }

    if (row == 0 || row == 4)
    {
        if (col == 0)
        {
            cout << 4 << "\n";
        }
        else if (col == 1)
        {
            cout << 3 << "\n";
        }
        else if (col == 2)
        {
            cout << 2 << "\n";
        }
        else if (col == 3)
        {
            cout << 3 << "\n";
        }
        else if (col == 4)
        {
            cout << 4 << "\n";
        }
    }
    else if (row == 1 || row == 3)
    {
        if (col == 0)
        {
            cout << 3 << "\n";
        }
        else if (col == 1)
        {
            cout << 2 << "\n";
        }
        else if (col == 2)
        {
            cout << 1 << "\n";
        }
        else if (col == 3)
        {
            cout << 2 << "\n";
        }
        else if (col == 4)
        {
            cout << 3 << "\n";
        }
    }
    else if (row == 2)
    {
        if (col == 0)
        {
            cout << 2 << "\n";
        }
        else if (col == 1)
        {
            cout << 1 << "\n";
        }
        else if (col == 2)
        {
            cout << 0 << "\n";
        }
        else if (col == 3)
        {
            cout << 1 << "\n";
        }
        else if (col == 4)
        {
            cout << 2 << "\n";
        }
    }

    return 0;
}