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
    vector<pair<ll int,ll int>>arr(n);
    loop(i,0,n){
        cin>>arr[i].first>>arr[i].second;
    }
    sort(arr.begin(),arr.end());
    ll int ans=-1;
    loop(i,0,n){
        if(ans<=arr[i].second){
            ans=arr[i].second;
        }else{
            ans=arr[i].first;
        }

    }
    cout<<ans<<"\n";

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