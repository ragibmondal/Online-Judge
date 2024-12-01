/***************************************
Author: Ragib Hasan
Date: 2024-11-21 13:29:10
****************************************/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    int adj[n+1][m+1];
    for(int i=0;i<n;i++){
        int u,v;
        cin>>u>>v;
        adj[u][v]=1;//space complexity O(n*n)
        adj[v][u]=1;
    }
    return 0;
}