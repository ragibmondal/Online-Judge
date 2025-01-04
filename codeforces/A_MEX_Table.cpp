#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
     ll a,b;
     cin>>a>>b;
     ll mex=max(a,b)+1;
     cout<<mex<<endl;
    }
}