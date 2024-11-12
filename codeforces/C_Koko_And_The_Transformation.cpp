/***************************************
Author: Ragib Hasan
Date: 2024-11-12 23:17:53
****************************************/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    int arr[n];
    int ar[m];
    int sum1=0;
    int sum2=0;
    for(int i=0;i<n;i++){
      cin>>arr[i];
      sum1+=arr[i];
    }
    for(int i=0;i<m;i++){
        cin>>ar[i];
        sum2+=ar[i];
    }
    if(sum1==sum2){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}