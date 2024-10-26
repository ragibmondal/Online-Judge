#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n); // Use vector instead of array
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    sort(arr.begin(), arr.end());
    int total = 0;
    
    for (int i = 0; i < n; i+=2) { // Ensure not to access arr[i + 1] out of bounds
       total+= abs(arr[i] - arr[i + 1]);
        
    }
    
    cout << total<<endl;
    return 0;
}
