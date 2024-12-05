#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int a;
        cin >> a;
        
        vector<int> v(a);
        long long total = 0, sum_odd = 0, sum_even = 0;
        
        for (int i = 0; i < a; i++) {
            cin >> v[i];
            total += v[i];
            
            if (i % 2 == 0) sum_odd += v[i];
            else sum_even += v[i];
        }
        
        bool is_balanced = false;
        
        if (total % a == 0) {
            long long target = total / a;
            int count_odd = (a + 1) / 2;
            int count_even = a / 2;
            
            is_balanced = (sum_odd == target * count_odd && 
                           sum_even == target * count_even);
        }
        
        cout << (is_balanced ? "YES" : "NO") << endl;
    }
    
    return 0;
}