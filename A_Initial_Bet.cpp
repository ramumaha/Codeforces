#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int ans=0,x;
    for(ll int i=0;i<5;i++)
    {
        cin>>x;
        ans+=x;
    }
    if(ans%5!=0 || ans==0)
    {
        cout<<-1;
    }
    else
    {
        cout<<ans/5;
    }
   
}