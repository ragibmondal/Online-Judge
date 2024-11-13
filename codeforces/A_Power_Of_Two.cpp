/***************************************
Author: Ragib Hasan
Date: 2024-11-13 00:18:46
****************************************/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    unsigned long long n;
    cin >> n;
    
    if ((n & (n - 1)) == 0 && n != 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
