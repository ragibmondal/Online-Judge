/***************************************
Author: Ragib Hasan
Date: 2024-10-14 10:37:44
****************************************/
#include <bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n==0||n==1){
        return 1;
    }
    else
    return n*factorial(n-1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    int arr[t];
    
    vector<int>v;
    
    for(int i=0;i<t;i++){
    int a=0;
     cin>>arr[i];
     a=factorial(arr[i]);
     v.push_back(a);
    }
    for(int i=0;i<t;i++){
        cout<<v[i]<<"\n";
    }

    return 0;
}