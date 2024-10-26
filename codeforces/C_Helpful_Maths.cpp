#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
    string num="";
    for(char c:a){
        if(c!='+'){
            num+=c;
        }
    }
    sort(num.begin(),num.end());
    for(int i=0;i<num.length();i++){
        cout<<num[i];
        if(i<num.length()-1) cout<<"+";
    }
    cout<<endl;
    
    return 0;
}