#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int i = 0, j = n/2;
    int count = 0;

    while (i < n / 2 && j < n) {
        if (v[i] * 2 <= v[j]) {
            count++;
            i++;
        }
        j++;
    }

    cout << count << endl;

    return 0;
}