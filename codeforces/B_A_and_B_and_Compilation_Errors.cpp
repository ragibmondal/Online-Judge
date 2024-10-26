
/***************************************
Author: Ragib Hasan
Date: 2024-10-26 15:22:47
****************************************/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);

    }
    vector<int> v1;
    for(int i=0;i<n-1;i++){
        int x;
        cin>>x;
        v1.push_back(x);
    }
    vector<int>v2;
    for(int i=0;i<n-2;i++){
        int x;
        cin>>x;
        v2.push_back(x);
    }
         // Find first disappeared error
    long long sum1 = 0, sum2 = 0;
    for(int x : v) sum1 += x;
    for(int x : v1) sum2 += x;
    int first_error = sum1 - sum2;
    
    // Find second disappeared error
    sum1 = 0;
    sum2 = 0;
    for(int x : v1) sum1 += x;
    for(int x : v2) sum2 += x;
    int second_error = sum1 - sum2;
    
    cout << first_error << "\n" << second_error << "\n";

    return 0;
}