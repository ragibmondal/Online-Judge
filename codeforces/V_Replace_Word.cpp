/***************************************
Author: Ragib Hasan
Date: 2024-11-03 19:28:07
****************************************/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string S;
    cin >> S;

    string to_replace = "EGYPT";
    
    int pos = S.find(to_replace);
    while (pos != string::npos) {
        S.replace(pos, to_replace.length(), " ");
        pos = S.find(to_replace, pos + 1);
    }

    cout << S << endl;

    return 0;
}
