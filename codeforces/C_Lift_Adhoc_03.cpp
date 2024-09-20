#include <bits/stdc++.h>
using namespace std;
int main(){
 int n;
 cin>>n;
 int running=4;
 int oc=3;
 int ie=5;
 for(int i=0;i<n;i++){
     int hfloor,lfloor;
     cin>>lfloor;
     cin>>hfloor;
     int tfloor=abs(lfloor-hfloor)+lfloor;
     int doortime=3*oc;
     int floortime=tfloor*running;
     int openclose=2*ie;
     int totaltime= floortime+doortime+openclose;
     cout<<"Case "<<i+1<<": "<<totaltime<<endl; 
 }
return 0;
}