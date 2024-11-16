/***************************************
Author: Ragib Hasan
Date: 2024-11-15 18:46:03
****************************************/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n; 
        cin >> n;
        vector<int> h(n);

        for (int i = 0; i < n; i++) {
            cin >> h[i];
        }

        int operations = 0;

        for (int i = n - 2; i >= 0; i--) {
            if (h[i] > h[i + 1]) {
                operations += h[i] - h[i + 1];
                h[i] = h[i + 1];
            }
        }

        cout << operations << endl;
    }

    return 0;
}
