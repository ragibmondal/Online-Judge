/***************************************
Author: Ragib Hasan
Date: 2024-11-20 19:33:29
****************************************/
#include <bits/stdc++.h>
#define ll long long
#define loop for(int i=0;i<n;i++)
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,p;
    cin>>n>>p;

    vector<int>v(n);
    loop{
        cin>>v[i];
    }
    bool found=false;
    loop{
        if(v[i]==p){
         found=true;
        }
    }
    if(found){
        cout<<"Senti Aunti Ramva will never be mine"<<endl;
    }
    else{
        cout<<"Senti Aunti Ramva is mine"<<endl;
    }


    return 0;
}