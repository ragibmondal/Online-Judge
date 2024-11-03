#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n, k;
    cin >> n >> k;
   
    map<int, vector<int>> brand_costs;

    for(int i = 0; i < k; i++) {
        int brand, cost;
        cin >> brand >> cost;
        brand_costs[brand].push_back(cost);
    }
    
    vector<int> all_costs;
    for(auto &[brand, costs] : brand_costs) {
        sort(costs.rbegin(), costs.rend());

        for(int cost : costs) {
            all_costs.push_back(cost);
        }
    }

    sort(all_costs.rbegin(), all_costs.rend());

    ll total = 0;
    for(int i = 0; i < min(n, (int)all_costs.size()); i++) {
        total += all_costs[i];
    }
    
    cout << total << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}
