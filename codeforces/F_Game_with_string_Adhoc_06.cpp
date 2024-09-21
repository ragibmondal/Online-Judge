#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int n=s.length();

    bool flag=false;
    int i,m=0;

    for(i=0;i<n-1;i++)
    {
        if(s.at(i)==s.at(i+1))
        {
            s.erase(i,2);
            m++;
            i = -1;
            n = s.length();
        }
    }

    if(m%2==1)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }

    return 0;
}