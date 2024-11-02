#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    int pos=s.find("username=")+9;
    string username = s.substr(pos); 
    pos=username.find("&");
    username=username.substr(0,pos);
    pos=s.find("pwd=")+4;
    string pwd=s.substr(pos);
    pos=pwd.find("&");
    pwd=pwd.substr(0,pos);
    pos=s.find("profile=")+8;
    string profile=s.substr(pos);
    pos=profile.find("&");
    profile=profile.substr(0,pos);
    pos=s.find("role=")+5;
    string role=s.substr(pos);
    pos=role.find("&");
    role=role.substr(0,pos);
    pos=s.find("key=")+4;
    string key=s.substr(pos);
    cout<<"username: "<<username<<endl;
    cout<<"pwd: "<<pwd<<endl;
    cout<<"profile: "<<profile<<endl;
    cout<<"role: "<<role<<endl;
    cout<<"key: "<<key<<endl;

    
    return 0;
}