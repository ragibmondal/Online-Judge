/***************************************
Author: Ragib Hasan
Date: 2024-11-11 23:24:47
****************************************/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
         cin>>arr[i];
    }
    int p=(2*n)/3;
    int r=(3*n)/4;
    sort(arr.begin(),arr.begin()+p,greater<int>());
    sort(arr.end()-r,arr.end());
    int s=arr[n/2];
    cout<<s<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}