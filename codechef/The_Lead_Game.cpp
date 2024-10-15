/***************************************
Author: Ragib Hasan
Date: 2024-10-15 18:51:44
****************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
     vector<pair<int,int>>v;
    for(int i;i<n;i++){
    
     int ti,pi;
     cin>>ti>>pi;
     v.push_back({ti,pi});
     }

     int comulative_p1=0;
     int comulative_p2=0;
     int max_lead=0;
     int winner=0;

     for(int i=0;i<n;i++){
        comulative_p1+=v[i].first;
        comulative_p2+=v[i].second;
        int lead=abs(comulative_p1-comulative_p2);
        int current_leader=(comulative_p1>comulative_p2)?1:2;

        if(lead>max_lead){
            max_lead=lead;
            winner=current_leader;
        }
        
     }

     cout<<winner<<" "<<max_lead;
    

    return 0;
}