/***************************************
Author: Ragib Hasan
Date: 2024-11-08 21:07:47
****************************************/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string x,y;
    cin>>x>>y;
    cout<<x.length()<<" "<<y.length()<<endl;
    cout<<x+y<<endl;
    swap(x[0],y[0]);
    cout<<x<<" "<<y<<endl;
    return 0;
}