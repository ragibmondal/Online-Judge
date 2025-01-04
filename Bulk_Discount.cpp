#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--){
      ll a;
      cin>>a;
      vector<ll>v(a);
      for(int i=0;i<a;i++){
          cin>>v[i];
      }
      sort(v.begin(),v.end());
      ll total=0;
        for (int i=0; i<a;i++) {
            total+=max(0LL, v[i] - i);
        }

        cout << total << "\n"; 
    }
      
    }

