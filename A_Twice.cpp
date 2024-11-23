#include <bits/stdc++.h>
using namespace std;
void run() {
    int n; cin >> n; // Read the number of elements for this test case
    set<int> s; 
    int ans = 0; // Counter for the result

    while (n--) {
        int x; cin >> x; // Read an element
        if (s.count(x)) { // If x is already in the set
            ++ans; // Increment the answer
            s.erase(x); // Remove x from the set
        } else {
            s.emplace(x); // Insert x into the set if it isn't already present
        }
    }

    cout << ans << '\n'; // Output the result for this test case
}
int main() {
    cin.tie(0)->sync_with_stdio(0); // Optimize input/output
    int t; cin >> t; // Read the number of test cases
    while (t--) run(); // Process each test case using `run()`
}//new line
