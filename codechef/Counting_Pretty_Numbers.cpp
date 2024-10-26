/***************************************
Author: Ragib Hasan
Date: 2024-10-17 10:12:16
****************************************/
#include <bits/stdc++.h>
using namespace std;
bool isPreety(int num){
    int lastdigit=num%10;
    return (lastdigit==2||lastdigit==3||lastdigit==9);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        int count=0;
        for(int i=l;i<=r;i++){
         if(isPreety(i)){
            count++;
         }
        }
        cout<<count<<"\n";
    }
    

    return 0;
}