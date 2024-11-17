#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> getDivs(int n) {
    vector<pair<int, int>> dvs;
    for (int d = 1; d * d <= n; d++) {
        if (n % d == 0) {
            dvs.emplace_back(d, n / d);
            if (d != n / d) {
                dvs.emplace_back(n / d, d);
            }
        }
    }
    return dvs;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> v(n);
        for (auto &x : v) {
            cin >> x;
        }
        
        int tgt = n - 2;
        vector<pair<int, int>> dvs = getDivs(tgt);
        
        sort(v.begin(), v.end());
        
        bool ok = false;
        for (const auto &[p, q] : dvs) {
            if (binary_search(v.begin(), v.end(), p) &&
                binary_search(v.begin(), v.end(), q)) {
                cout << p << " " << q << "\n";
                ok = true;
                break;
            }
        }
        
        if (!ok) {
            cout << "1 1\n";
        }
    }
    
    return 0;
}