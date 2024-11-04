/***************************************
Author: Ragib Hasan
Date: 2024-11-04 19:23:57
****************************************/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
      
    int maxIndex = 0;
        for(int i=1;i<n;i++){
        if(arr[maxIndex]<arr[i]){
            maxIndex =i;
        }
        else if (arr[i] == arr[maxIndex] && i > maxIndex) {
            maxIndex = i;
    }}
     cout<<maxIndex+1<<endl;
    return 0;
}