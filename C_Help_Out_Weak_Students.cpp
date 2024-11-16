/***************************************
Author: Ragib Hasan
Date: 2024-11-16 18:26:29
****************************************/
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<pair<int,int>> v;

    for(int i=0;i<n;i++){
        int p,q;
        cin>>p>>q;
        v.pb({q,p});

    }
    sort(v.begin(),v.end());
    int sum=v[0].first+v[1].first+v[2].first;
    if(sum<150){
       cout<<"Counseling Support Required"<<endl; 
    }
    else{
        cout<<"Counseling Support Not Required"<<endl;
        cout<<v[0].first<<" "<<v[1].first<<" "<<v[2].first<<endl;
    }
        return 0;
}