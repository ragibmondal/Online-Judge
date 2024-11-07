/***************************************
Author: Ragib Hasan
Date: 2024-11-07 20:57:49
****************************************/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr[n];
        int count=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            if(arr[i]>=m){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}