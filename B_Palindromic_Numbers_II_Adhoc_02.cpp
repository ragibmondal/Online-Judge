#include <bits/stdc++.h>
using namespace std;
int main(){
int n,t;

cin>>t;
for(int i=0;i<t;i++){
  cin>>n;
  int temp=n;
  int sum=0;
  while(n>0){
    int r=n%10;
    sum=(sum*10)+r;
    n=n/10;
  }
  if(temp==sum){
    cout<<"Case "<<i+1<<": "<<"Yes"<<endl;
  }
  else{
    cout<<"Case "<<i+1<<": "<<"No"<<endl;
  }
}


return 0;


}