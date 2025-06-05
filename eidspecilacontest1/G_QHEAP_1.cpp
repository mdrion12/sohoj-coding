#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    
    priority_queue<int, vector<int>, greater<int>> minHeap; 
    unordered_map<int, int> freq; 
    
    while (q--) {
        int type;
        cin >> type;
        
        if (type == 1) {
            int x;
            cin >> x;
            minHeap.push(x);
            freq[x]++;
        } 
        else if (type == 2) {
            int x;
            cin >> x;
            if (freq[x] > 0) {
                freq[x]--; 
            }
        } 
        else {
            while (!minHeap.empty() && freq[minHeap.top()] == 0) {
                minHeap.pop(); 
            }
            cout << minHeap.top() << endl;
        }
    }
    
    return 0;
}
