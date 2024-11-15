/***************************************
Author: Ragib Hasan
Date: 2024-11-15 14:26:22
****************************************/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s, t;
    cin >> s >> t;
    
    int s_len = s.size();
    int t_len = t.size();
    int c_length = 0;

    while (c_length < s_len && c_length < t_len &&s[s_len - c_length - 1] == t[t_len - c_length - 1]) {
        c_length++;
    }

    cout << (s_len - c_length) + (t_len - c_length) << endl;
    
    return 0;
}
