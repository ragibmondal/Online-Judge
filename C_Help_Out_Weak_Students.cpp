/***************************************
Author: Ragib Hasan
Date: 2024-11-20 19:45:11
****************************************/
#include <bits/stdc++.h>
#define ll long long
#define loop for(int i=0;i<n;i++)
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<pair<int,int>>v(n);
    loop{
        cin>>v[i].first>>v[i].second;

    }
    sort(v.begin(),v.end(),[](pair<int,int> &a,pair<int,int> &b){
        return a.second<b.second;
    });

    int sum = v[0].second + v[1].second + v[2].second;
    if(sum<150){
        cout<<"Counseling Support Required"<<endl;
    }
    else{
        cout<<"Counseling Support Not Required"<<endl;
        cout<<v[0].second<<" "<<v[1].second<<" "<<v[2].second<<endl;
        
    }
    
    return 0;
}