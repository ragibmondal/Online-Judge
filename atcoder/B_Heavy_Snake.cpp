#include <bits/stdc++.h>
using namespace std;
int main(){
  int a,b;
  cin>>a>>b;
  vector<int>v(a);
  vector<int>w(a);
  for(int i=0;i<a;i++){
  cin>>v[i];
  cin>>w[i];
  }
  for(int j=1;j<=b;j++){
    int maxw=0;
    for(int i=0;i<a;i++){
        int w1=v[i]*(w[i]+j);
        if(w1>maxw){
            maxw=w1;
        }
    }
    cout<<maxw<<endl;
  }

}