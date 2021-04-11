#include<bits/stdc++.h>
using namespace std;
#define ll long long 


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int n,t;
    cin>>n>>t;
        ll int ans=0,y;
        for(ll int i=0;i<n;i++)
        {cin>>y;
        ans+=y;

        }
        if(ans+(n-1)*10>t)
        {
            cout<<-1;
        }
        else
        {
            cout<<(t-ans)/5;
        }
}