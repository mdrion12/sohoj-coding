#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[6][6];              // 6x6 ম্যাট্রিক্স
    for (int i = 0; i < 6; i++) // **0-based indexing ব্যবহার করা হলো**
    {
        for (int j = 0; j < 6; j++)
        {
            cin >> arr[i][j];
        }
    }

    int maxSum = INT_MIN;        // সর্বোচ্চ hourglass মান সংরক্ষণ
    for (int i = 0; i <= 3; i++) // **Hourglass এর উপর loop চালানো**
    {
        for (int j = 0; j <= 3; j++)
        {
            // Hourglass sum হিসাব করা
            int sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2]                // উপরের তিনটি সংখ্যা
                      + arr[i + 1][j + 1]                                      // মাঝের সংখ্যা
                      + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2]; // নিচের তিনটি সংখ্যা

            maxSum = max(maxSum, sum); // সর্বোচ্চ মান আপডেট
        }
    }

    cout << maxSum << "\n"; // সর্বোচ্চ Hourglass sum প্রিন্ট করো
    return 0;
}
