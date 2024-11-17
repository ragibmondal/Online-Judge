#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int MAX_A = 1e6 + 1;
const int MOD = 998244353;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a) cin >> x;

    vector<int> spf(MAX_A);
    iota(spf.begin(), spf.end(), 0);


    for (int i = 2; i * i < MAX_A; i++) {
        if (spf[i] == i) {
            for (int j = i * i; j < MAX_A; j += i) {
                if (spf[j] == j) spf[j] = i;
            }
        }
    }

    vector<ll> sum_m(MAX_A, 0); 
    ll answer = 0;

    for (int i = 0; i < n; i++) {
        ll dp = 0;

        if (i == 0) {
            dp = 1; 
        } else {
        
            vector<int> factors;
            int x = a[i];
            while (x > 1) {
                int p = spf[x];
                factors.push_back(p);
                while (x % p == 0) x /= p;
            }

        
            int k = factors.size();
            if (k > 0) {
                ll s = 0;
                for (int mask = 1; mask < (1 << k); mask++) {
                    int m = 1, cnt = 0;
                    for (int j = 0; j < k; j++) {
                        if (mask & (1 << j)) {
                            m *= factors[j];
                            cnt++;
                        }
                    }
                    if (cnt & 1) s = (s + sum_m[m]) % MOD;
                    else s = (s - sum_m[m] + MOD) % MOD;
                }
                dp = s;
            }
        }

        if (i == n - 1) {
            answer = dp;
        }

        vector<int> factors;
        int x = a[i];
        while (x > 1) {
            int p = spf[x];
            factors.push_back(p);
            while (x % p == 0) x /= p;
        }

        int k = factors.size();
        for (int mask = 1; mask < (1 << k); mask++) {
            int m = 1;
            for (int j = 0; j < k; j++) {
                if (mask & (1 << j)) m *= factors[j];
            }
            sum_m[m] = (sum_m[m] + dp) % MOD;
        }
    }

    cout << answer;
    return 0;
}
