#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s,t;
    string marge_string;
    vector<string> v;
    for(int i=0;i<n;i++){
        cin>>s>>t;
        marge_string="";
        int min_len=min(s.length(),t.length());
        for(int j=0;j<min_len;j++){
              marge_string+=s[j];
              marge_string+=t[j];

        }
        if(s.length()>t.length()){
            marge_string += s.substr(min_len);
        }
        else{
            marge_string +=t.substr(min_len);
        }
        v.push_back(marge_string);
    }
    for(auto x: v){
        cout<<x<<"\n";
    }
    return 0;
}