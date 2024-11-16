#include <bits/stdc++.h>

using namespace std;

int main() {
	bool found=false;
	long long x;
	long long p;
	cin>>x>>p;
	long long arr[x];
	long long l=0;
	for(int i=0;i<x;i++){
		cin>>arr[i];
	}
	for(int i=0;i<x;i++){
	if(arr[i]==p){
		found=true;
		break;
	}
	else{
		found;
	}
	}
	if(found){
		cout<<"Senti Aunti Ramva will never be mine"<<endl;
	}
	else{
		cout<<"Senti Aunti Ramva is mine"<<endl;
	}
	return 0;
}
