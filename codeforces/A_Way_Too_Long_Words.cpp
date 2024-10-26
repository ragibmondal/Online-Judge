#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    while(n--){
        string s;
        cin>>s;
        int p=s.size();
        if(p<=10){
            cout<<s<<endl;
        }
        else{
            cout<<s[0]<<p-2<<s[p-1]<<endl;
        }
    }
    return 0;
}