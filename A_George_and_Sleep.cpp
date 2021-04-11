#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll int n;

int main()
{
    string a,b;
    cin>>a>>b;
    int a1=stoi(a.substr(0,2));
    int a2=stoi(a.substr(3));
    int b1=stoi(b.substr(0,2));
    int b2=stoi(b.substr(3));
    int c2=a2-b2;
    if(c2<0)
    {
        c2=60+c2;
        a1--;
    }
    int c1=a1-b1;
    if(c1<0)
    {c1=24+c1;
        
    }
    if(c1<10 && c2<10)
    {   
         cout<<0<<c1<<":"<<0<<c2;}
    else if(c1<10)
    {
        cout<<0<<c1<<":"<<c2;
    }
    else if(c2<10)
    {
        cout<<c1<<":"<<0<<c2;
    }
    else
    {
        cout<<c1<<":"<<c2;
    }

}