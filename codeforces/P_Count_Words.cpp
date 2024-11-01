#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
        for(int i=0;i<s.length();i++){
        
        if (s[i]==' '||s[i]=='.'||s[i]==','||s[i]=='!'||s[i]=='?') {
            s[i] = ' ';
        }
    }
    int count=0;
    stringstream ss(s);
    string word;
    while(ss>>word){
        count++;
    }
    cout<<count;
    return 0;
}