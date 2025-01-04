#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--){
       int a;
       cin>>a;
       vector<int>v(a);
       for(int i=0;i<a;i++){
         cin>>v[i];  
           
       }
       
       int b;
       cin>>b;
       int c= v[b- 1];
       sort(v.begin(),v.end());
       auto d= find(v.begin(),v.end(),c)-v.begin();
       cout<<d+1<<endl;

   }
   return 0;

}
