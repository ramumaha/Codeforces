#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int a,b,c,d;
    cin>>a>>b;
    vector<ll int>x(a);
    vector<ll int>y(b);
    cin>>c>>d;
    for(ll i=0;i<a;i++)
    {
        cin>>x[i];
    }
     for(ll i=0;i<b;i++)
    {
        cin>>y[i];
    }
    
    //ll s=b-1,i=0;
    /*for(ll i=0;i<c;i++)
    {
        if(y[s]>x[i])
        {
            s--;
            d--;
        }
    }*/
   if(x[c-1]>= y[b-d])
   {
       cout<<"NO";
   }
   else
   {
       cout<<"YES";
   }
    


}