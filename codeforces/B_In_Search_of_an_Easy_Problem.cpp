#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int count=0;
    cin>>n;
    for(int i=0;i<n;i++){
      int p;
      cin>>p;
      count+=p;
    }

    if(count==0){
        cout<<"EASY"<<endl;
    }
    else if(count>0){
        cout<<"HARD"<<endl;
    }
    return 0;
}