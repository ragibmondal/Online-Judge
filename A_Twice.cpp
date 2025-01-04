#include <bits/stdc++.h>
using namespace std;
void run() {
    int n; cin >> n;
    set<int> s; 
    int ans = 0;

    while (n--) {
        int x; cin >> x;
        if (s.count(x)) { 
            ++ans; 
            s.erase(x);
        } else {
            s.emplace(x); 
        }
    }

    cout << ans << '\n';
}
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while (t--) run();
}
