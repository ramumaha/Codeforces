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
#define loop(i,a,b) for(int i=a;i<b;i++)

void solve()
{ll int n,k;
cin>>n>>k;
vector<pair<ll int,ll int>>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i].first>>arr[i].second;
}
ll int maxi=INT_MIN;
for(auto i:arr){
    if(i.second>k){
        maxi=max(maxi,i.first-(i.second-k));
    }else{
        maxi=max(maxi,i.first);
    }
}
cout<<maxi<<"\n";
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