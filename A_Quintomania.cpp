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

        vector<int> note(n);
        for (int i = 0; i < n; i++) {
            cin >> note[i];
        }

        bool flag = true;
        for (int i = 0; i < n-1; i++) {
            int rom = abs(note[i] - note[i + 1]);
            if (rom != 5 && rom!= 7) {
                flag = false;
                break;
            }
        }

        if (flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
