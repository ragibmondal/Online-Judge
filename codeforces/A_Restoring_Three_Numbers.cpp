#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=4;
    vector<int>v;
   for(int i=0;i<n;i++){
        int p;
        cin>>p;
        v.push_back(p);
    }
    sort(v.begin(),v.end());
    int n1=v[3]-v[2];
    int n2=v[3]-v[1];
    int n3=v[3]-v[0];
    cout<<n1<<" "<<n2<<" "<<n3<<endl;
    return 0;
}