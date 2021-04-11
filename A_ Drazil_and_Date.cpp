#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int a,b,s;
    cin>>a>>b>>s;
    ll int distance=a+b;
    if(s<distance)
    {
        cout<<"No";
    }
    else if(s>distance &&(distance -s)%2==0)
    {
        cout<<"Yes\n";
    }
    else
    {
        cout<<"No";
    }
}