#include <bits/stdc++.h>
using namespace std;

const int N = 1e7 + 5;
int spf[N];  // Smallest Prime Factor

// Sieve to fill spf[]
// Time Complexity: O(N log log N)
void sieveSPF() {
    for (int i = 2; i < N; ++i) spf[i] = i;
    for (int i = 2; i * i < N; ++i) {
        if (spf[i] == i) {
            for (int j = i * i; j < N; j += i) {
                if (spf[j] == j)
                    spf[j] = i;
            }
        }
    }
}

// Function to return prime factorization using SPF
// Time Complexity: O(log x)
vector<int> getFactorization(int x) {
   // map<int,int>mp;
    vector<int> res;
    while (x != 1) {
        res.push_back(spf[x]);
      //  mp[spf[x]]++;
        x /= spf[x];
    }
    // for(auto it:mp)
    // {
    //  cout<<it.first<<" "<<it.second<<"\n";
    // }


    return res;
}

// Example usage
int main() {
    sieveSPF();  // Preprocess SPF

    int x;
    cin >> x;

    vector<int> factors = getFactorization(x);

    cout << "Prime Factors of " << x << " : ";
    for (int f : factors) cout << f << ' ';
    cout << '\n';

    return 0;
}

