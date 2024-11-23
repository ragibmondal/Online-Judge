/***************************************
Author: Ragib Hasan
Date: 2024-11-20 19:02:42
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
    vector<ll>v(n);
    loop{
        cin>>v[i];
    }
    sort(v.begin(),v.end());
   
    int count=0;
    loop{
        if(v[i]>50){
            count++;
        }
    }
     loop{
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<count<<endl;

    return 0;
}