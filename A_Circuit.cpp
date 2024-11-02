#include <bits/stdc++.h>

using namespace std;
int main(){
    int x;
    cin>>x;
    while(x--){
    int p;
    cin>>p;
    int s=0;
    for(int i=0;i<p*2;i++){
        int n;
        cin>>n;
        s+=n;
    }
    int mini=s%2;
    int max=min(s,2*p-s);
    cout<<mini<<" "<<max<<endl;
}
return 0;
}