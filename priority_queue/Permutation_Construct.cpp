#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)

    {
        int N, K;
        cin >> N >> K;

        int P[105] = {0}; // Permutation array (1-based index)
        int possible = 1; // Flag to check if a valid permutation is possible

        for (int r = 0; r < K; r++)
        {
            vector<int> indices; // Will store indices of positions where i % K == r

            // Collect all indices i (from 1 to N) where i % K equals r
            for (int i = 1; i <= N; i++)
            {
                if (i % K == r)
                {
                    indices.push_back(i);
                }
            }

            // If a group has only one element, derangement is not possible
            if (indices.size() == 1)
            {
                possible = 0;
                break;
            }

            // Create a derangement by cyclically shifting the collected indices
            int count = indices.size();
            for (int j = 0; j < count; j++)
            {
                int pos = indices[j];
                int value = indices[(j + 1) % count];
                P[pos] = value;
            }
        }

        // Output result
        if (!possible)
        {
            cout << "-1\n";
        }
        else
        {
            for (int i = 1; i <= N; i++)
            {
                cout << P[i] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}
