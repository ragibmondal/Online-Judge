/***************************************
Author: Ragib Hasan
Date: 2024-10-17 10:42:42
****************************************/
#include <bits/stdc++.h>
using namespace std;
bool isDecreasing(vector <int>&arr){
    for(int i=1;i<arr.size();i++){
    if(arr[i]<arr[i-1]){
    return false;
    }}
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> difficulties(n);
        for(int i=0;i<n;i++){
            cin>>difficulties[i];
        }
        if(isDecreasing(difficulties)){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
    

    return 0;
}