#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define pii pair<int, int>
#define mp make_pair
#define f first
#define s second
#define mii map<int, int>
#define fo(i,n) for(i=0;i<n;i++)
#define clr(x) memset(x, 0, sizeof(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define sort_v(a) sort(a.begin(),a.end())
#define loop(i,a,b) for(int i=a;i<b;i++)





void solve(){
    ll int n;
    cin>>n;
    vector<ll int>arr(n);
    map<int,int>mp;
    loop(i,0,n){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    vector<ll int>ans;
    
    ll int i=0;
    while(i<n){
        ll int mex=0;
        while(mp[mex]>0){
            mex++;
        }
        vector<ll int>seen(mex,0);
        ll int c=0;
        while(i<n){
            if(arr[i]<mex &&!seen[arr[i]]){
                seen[arr[i]]=1;
                c++;
            }
            mp[arr[i]]-=1;
            i++;
            if(c==mex)break;        }
        ans.push_back(mex);
    }
   cout<<ans.size()<<"\n";
   for(auto i:ans){
       cout<<i<<" ";
   }
   cout<<"\n";


}




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
       
    
    
}