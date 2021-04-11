#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    ll int n,ans=0;
    cin>>n;
    int arr[n];
    map<int,int>mp;
    for(ll int i=0;i<n;i++)
    {
       cin>>arr[i];
       mp[arr[i]]+=1;
    }
    for(auto i:mp)
    {
      if(i.second==1)
      {
          ans=i.first;
      }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==ans)
        {
            cout<<i+1<<"\n";
            break;
        }
    }

}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    
   
    
    
    
}