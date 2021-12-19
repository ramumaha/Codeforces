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
// #define sort(a) sort(a,a+n)
#define loop(i,a,b) for(int i=a;i<b;i++)

void print(vector<pair<ll int,ll int>>&mp){
    for(auto i:mp){
        cout<<i.second<<" ";
    }
    cout<<"\n";
}

void solve()
{
ll int n,x;
cin>>n;
vector<pair<ll int,ll int>>mp;
loop(i,0,n){
    cin>>x;
    mp.push_back({x,i+1});
}
sort(mp.begin(),mp.end());
vector<pair<ll int,ll int>>index;
for(ll int i=0;i<mp.size()-1;i++){
    if(mp[i].first==mp[i+1].first){
        index.push_back({i,i+1});
    }
}
if(index.size()<2){
    cout<<"NO\n";
    return;
}
cout<<"YES\n";
print(mp);
swap(mp[index[0].first],mp[index[0].second]);
print(mp);
swap(mp[index[1].first],mp[index[1].second]);
print(mp);



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