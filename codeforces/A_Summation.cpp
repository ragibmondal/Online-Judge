/***************************************
Author: Ragib Hasan
Date: 2024-11-11 19:54:02
****************************************/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    long long sum = 0;
    int arr[n];
    for(int i = 0; i < n; i++) {
       cin >> arr[i];
       sum += arr[i];
    }
    long long s = abs(sum);
    cout << s << endl;
    return 0;
}
