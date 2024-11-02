/***************************************
Author: Ragib Hasan
Date: 2024-11-01 22:23:00
****************************************/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        vector<int>v;
        int a;
        cin>>a;
        v.push_back(a);
    }
    bool flag=true;
    for(int i=0;i<n;i++){
        if(v[i]%2==0){
            flag=true;
        }
        else if(v[i]%2!=0){
            flag=false;
        }
    }
    if(flag==true){
        cout<<"YES"<<endl;
    }
    else if(flag==false){
        cout<<"YES"<<endl;
    }
    else if(flag==true||flag==false){
        cout<<"NO"<<endl;
    }
    return 0;
}