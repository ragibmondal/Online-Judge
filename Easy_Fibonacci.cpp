#include <bits/stdc++.h>
using namespace std;
int main(){
 int n1=0;
 int n2=1;
 int nt=0;
 int t;
 cin>>t;
 for(int i=0;i<t;i++){
    cout<<n1<<" ";
    nt=n1+n2;
    n1=n2;
    n2=nt;
 }
 return 0;
}