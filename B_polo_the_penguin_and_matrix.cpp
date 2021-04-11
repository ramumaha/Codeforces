#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m,d;
    set<ll>s;
    cin>>n>>m>>d;
    vector<ll>v(n*m);
    for(ll i=0;i<n*m;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(ll i=0;i<n*m;i++)
    {
        s.insert(v[i]%d);
    }
    if(s.size()>1)
    {
        cout<<-1;
    }
    else
    {
        ll median=v[(n*m/2)];
        ll ans=0;
        for(int i=0;i<n*m;i++)
        {
            ans+=abs(v[i]-median);
        }
        cout<<ans/d;
    }

    

}