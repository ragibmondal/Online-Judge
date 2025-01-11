#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int b = 2 * N;
    vector<int> v(b);
    for(int i = 0; i < b; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int sum = 0;
    for(int i = 0; i < b; i += 2) {
        sum += v[i];
    }
    cout << sum << endl;
    return 0;
}