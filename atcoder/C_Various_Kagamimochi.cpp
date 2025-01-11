#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
int n;
cin>>n;
vector<int>v(n);
for(ll i=0;i<n;i++){
    cin>>v[i];
}
    int64_t count = 0;
    for(int j=0;j<n;j++) {
        int div= v[j] / 2;
        auto it = upper_bound(v.begin(), v.begin() + j, div);
        count += it - v.begin();
    }
    cout <<count<<endl;

}