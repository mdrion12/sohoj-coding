#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int p = 31;
const int m = 1e9 + 9;

vector<long long> compute_pow(int size) {
    vector<long long> p_pow(size);
    p_pow[0] = 1;
    for (int i = 1; i < size; i++)
        p_pow[i] = (p_pow[i - 1] * p) % m;
    return p_pow;
}

vector<long long> compute_prefix_hash(string &text, vector<long long> &p_pow) {
    int T = text.size();
    vector<long long> h(T + 1, 0);
    for (int i = 0; i < T; i++)
        h[i + 1] = (h[i] + (text[i] - 'a' + 1) * p_pow[i]) % m;
    return h;

}

long long compute_hash(string &s, vector<long long> &p_pow) {
    long long hash_value = 0;
    for (int i = 0; i < s.size(); i++)
        hash_value = (hash_value + (s[i] - 'a' + 1) * p_pow[i]) % m;
    return hash_value;
}

int count_occurrences(string &text, string &pattern) {
    int T = text.size(), S = pattern.size();
    vector<long long> p_pow = compute_pow(max(S, T));
    vector<long long> h = compute_prefix_hash(text, p_pow);
    long long h_s = compute_hash(pattern, p_pow);
    for(int i=0;i<=T;i++)
    {
    cout<<h[i]<<" ";
    }

    int count = 0;
    vector<int>occerances;
    for (int i = 0; i + S <= T; i++) {
        long long cur_h = (h[i + S] + m - h[i]) % m;
        if (cur_h == (h_s * p_pow[i]) % m)
        {
          occerances.push_back(i);
             count++;
        }

    }
    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string text, pattern;
    cin >> text >> pattern;

    cout << count_occurrences(text, pattern) << "\n";
    return 0;
}
