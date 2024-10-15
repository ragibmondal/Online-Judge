/***************************************
Author: Ragib Hasan
Date: 2024-10-15 19:23:19
****************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    string p= "START38";
    string q= "LTIME108";
    vector<pair<int,int>>v;

    for( int i=0;i<n;i++){
        int f=0;
        int l=0;
        int n1;
        cin>>n1;
        
        for(int j=0;j<n1;j++){
          string a;
          cin>>a;
          if(p==a){
            f++;
          }
          else if(q==a){
            l++;
          }
          
        }
        v.push_back({f,l});
    }
    for(int i=0;i<n;i++){
        cout<<v[i].first<<" "<<v[i].second<<"\n";
    }

    

    return 0;
}