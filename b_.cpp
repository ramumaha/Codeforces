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

bool good(ll int x,ll int y,ll int z){
    if(x<z || y<z){
        return false;
    }
    ll int rem=(x-z)+(y-z);
    if(rem<2*z)return false;
    else return true;
}


void solve()
{ll int n,m;
cin>>n>>m;
if(n==0||m==0){
    cout<<0<<"\n";
    return;
}
ll int  temp=min(n,m);
ll int l=1,h=temp;
ll int ans=0;
while(l<=h){
    ll int mid=(l+h)>>1;
    if(good(n,m,mid)){
        ans=mid;
        l=mid+1;
    }else{
        h=mid-1;
    }
}
cout<<ans<<"\n";

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