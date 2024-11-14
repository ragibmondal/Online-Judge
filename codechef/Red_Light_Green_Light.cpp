/***************************************
Author: Ragib Hasan
Date: 2024-11-14 14:33:47
****************************************/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        int arr[a];
        int out=0;
        for(int i=0;i<a;i++){
            cin>>arr[i];
            if(arr[i]>b){
                out++;
            }

        }
        cout<<out<<endl;
    }
    return 0;
}