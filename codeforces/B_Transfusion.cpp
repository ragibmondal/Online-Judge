#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin>>a;
    vector<int>n(a);
    for(int i=0;i<a;i++){
    cin>>n[i];
    }
    bool flag=false;

    for(int i=1;i<a;i++){
    if(n[i]<=n[i-1]){
     flag=true;
     break;
    }
    }
    for(int i=1;i<a;i++){
    if(n[i]>=n[i-1]){
     flag=true;
     break;
    }
}
   if(flag){
    cout<<"Not Increasing decreasing"<<endl;

   }   
   else{
    cout<<"Increasing decreasing"<<endl;
   }
    
    return 0;
}