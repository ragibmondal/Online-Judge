#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   ll t;
   cin>>t;
   while(t--){
    ll n;
    cin>>n;
    vector<ll>v(n);

    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    ll st=0;
    bool flag=false;
   
    while(!flag){
        flag=true;
        for(int i=0;i<n-1;i++){
        if(v[i]<v[i+1]){
            ll temp=0;
            temp=v[i];
            v[i]=v[i+1];
            flag=false;
        }
        
    }
    if(!flag){
            st++;
        }
    }
    cout<<st<<endl;
   }
}