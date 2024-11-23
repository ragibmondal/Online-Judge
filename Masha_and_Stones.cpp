/***************************************
Author: Ragib Hasan
Date: 2024-11-20 18:30:36
****************************************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop for(int i=0;i<n;i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<ll>v(n);
    loop{
        cin>>v[i];
        }
    bool alleven=true;
    bool allodd=true;
    loop{
        if(v[i]%2==0){
            allodd=false;
        }
        else{
            alleven=false;
        }
    }
    if(alleven ||allodd){
        cout<<"Yes"<<endl;
    } 
    else{
        cout<<"No"<<endl;
    }   


    return 0;
}