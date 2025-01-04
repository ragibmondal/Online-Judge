#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
     int a,b,c;
     cin>>a>>b>>c;
     int minu = INT_MAX;
        
        for (int i = 1; i <= b; i++) {
            for (int j=1;j<=a;j++) {
                int pera=2*(i+j);
                minu = min(minu, abs(pera - c));
            }
        }
        
        cout<<minu<<endl;

    }
}