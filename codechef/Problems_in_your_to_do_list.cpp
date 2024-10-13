/***************************************
Author: Ragib Hasan
Date: 2024-10-14 02:09:11
****************************************/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>results;
    int n;
    cin>>n;
    for(int j=0;j<n;j++){
        int n1;
        cin>>n1;
        int arr[n1];
        for(int i=0;i<n1;i++){
            cin>>arr[i];
        }
         int c=0;
        for(int i=0;i<n1;i++){
           if(arr[i]>=1000){
            c++;
           }
        }
        results.push_back(c);
        
    }
     for(int j=0;j<n;j++){
     cout<<results[j]<<endl;}


    return 0;
}