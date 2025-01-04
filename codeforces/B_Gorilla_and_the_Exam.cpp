#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        unordered_map<int, int> freq;
        for (int num : a) {
            freq[num]++;
        }
        vector<int> freqs;
        for (auto& pair : freq) {
            freqs.push_back(pair.second);
        }
        sort(freqs.rbegin(), freqs.rend());
        if (n - k <= 0) {
            cout << 1 << '\n';
            continue;
        }
        int sum = 0;
        int m = 0;
        while (sum < n - k && m < freqs.size()) {
            sum += freqs[m];
            m++;
        }
        cout << m << '\n';
    }
    return 0;
}