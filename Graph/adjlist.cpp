/***************************************
Author: Ragib Hasan
Date: 2024-11-21 13:37:15
****************************************/
#include <bits/stdc++.h>
#define loop for(int i=0;i<m;i++)
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n,m;
    vector<int>adj[n+1];
    loop{
        int u,v;
        cin>>u>>v;
        //if directed then adj[v].push_back(u); kata
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    return 0;
}