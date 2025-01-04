#include <bits/stdc++.h>
using namespace std;

int main() {
int a;
cin>>a;
vector<long long>v(a);
for(int i=0;i<a;i++){
    cin>>v[i];
    
}
sort(v.begin(),v.end());
for(auto c:v){
    cout<<c<<endl;
}

}
