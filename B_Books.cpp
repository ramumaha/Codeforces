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
    ll int n,t;
    cin>>n>>t;
    vector<ll int>min(n);
    loop(i,0,n){
        cin>>min[i];
    }
    ll int l=0,ans=0,x=0;
    for(ll int r=0;r<n;r++){
        x+=min[r];
        while(x>t){
            x-=min[l];
            l++;
        }
        ans=max(ans,r-l+1);


    }
    cout<<ans;

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