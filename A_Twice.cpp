/***************************************
Author: Ragib Hasan
Date: 2024-11-17 20:41:48
****************************************/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        unordered_map<int, int> freq;
        for (int num : a) {
            freq[num]++;
        }
        
        // Calculate the score
        int score = 0;
        for (auto &[num, count] : freq) {
            score += count / 2; // Maximum pairs for this element
        }
        
        cout << score << endl;
    }
    return 0;
}