#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    for(int i=1;i<=x;i++){
    int n;
    cin>>n;
    int temp=n;
    int sum=0;
    while(n>0){ 
    int r=n%10;
    sum=(sum*10)+r;
    n=n/10;

        }
    if(temp==sum){
        cout<<"Case "<<i<<":"<<" Yes"<<endl;

    }
    else{
        cout<<"Case "<<i<<":"<<" No"<<endl;
    }
    }
    return 0;
}