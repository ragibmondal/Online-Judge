#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        int p = arr[i];
        long long s = 1;

        // Calculate factorial and check for overflow
        for (int j = 1; j <= p; j++) {
            s *= j;
            if (s < 0) {  // Overflow detected
                cout << "Overflow for " << p << "!" << endl;
                break;
            }
        }
        if (s > 0) {
            cout << s << endl;
        }
    }
    return 0;
}
