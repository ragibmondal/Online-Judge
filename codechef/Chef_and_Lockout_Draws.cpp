#include <bits/stdc++.h>
using namespace std;

int main() {
     int t;
     cin>>t;
     while(t--){
         long long a,b,c;
         cin>>a>>b>>c;
         long long total=a+b+c;
         long long maxscore=max(a,max(b,c));
         if(2*maxscore==total){
             cout<<"YES"<<endl;
         }
         else{
             cout<<"NO"<<endl;
         }
         
         
         
     }

}
