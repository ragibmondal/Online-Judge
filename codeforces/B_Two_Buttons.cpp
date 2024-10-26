#include <bits/stdc++.h>
using namespace std;
int main(){
    int x1,x2;
    cin>>x1>>x2;
    int c=0;
    while(x2>x1){
        if(x2%2==0){
            x2/=2;
        }
        else{
            x2++;
        }
        c++;
    }
    c+=(x1-x2);
    cout<<c<<endl;
    return 0;
}

