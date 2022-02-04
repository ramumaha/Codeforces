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
    ll int n,s,t;
    cin>>n>>s>>t;
    vector<ll int>v(n+1,0);
    vector<ll int>arr(n+1);
    for(ll int i=1;i<=n;i++){
        cin>>arr[i];
    }
    ll int ans=0;
    while(1){
        if(s==t){
            cout<<ans<<"\n";
            return;
        }
        if(v[s]){
            cout<<-1<<"\n";
            return;
        }
        v[s]=1;
        s=arr[s];
        ans++;


        
    }


}




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
       
    
    
}