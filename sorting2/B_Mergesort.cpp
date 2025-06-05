#include <bits/stdc++.h>
using namespace std;
int a[100009];
int co = 0;
void merge(int a[], int l, int m, int r)
{
    int leftSize = m - l + 1;
    int rightSize = r - m;
    int L[leftSize], R[rightSize];
    int k = 0;
    for (int i = l; i <= m; i++)
    {
        L[k] = a[i];
        k++;
    }
    k = 0;
    for (int i = m + 1; i <= r; i++)
    {
        R[k] = a[i];
        k++;
    }
    int i = 0, j = 0;
    int cur = l;
    while (i < leftSize && j < rightSize)
    {
        co++;
        if (L[i] <= R[j])
        {
            a[cur] = L[i];
            i++;
        }
        else
        {
            a[cur] = R[j];
            j++;
        }
        cur++;
    }

    while (i < leftSize)
    {
        co++;
        a[cur] = L[i];
        i++;
        cur++;
    }

    while (j < rightSize)
    {
        co++;
        a[cur] = R[j];
        j++;
        cur++;
    }
}
void merge_sort(int a[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        merge_sort(a, l, mid);
        merge_sort(a, mid + 1, r);
        merge(a, l, mid, r);
    }
}
int main()
{
    int i = 0;
    while (cin >> a[i])
    {
        i++;
    }
    int n = i;
    merge_sort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}