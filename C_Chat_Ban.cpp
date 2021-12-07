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

bool good(ll int mid,ll int x){
    return 2*(mid*(mid+1)/2)-mid<=x;

}

void solve()
{
ll int k,x;
cin>>k>>x;
ll int l=1,r=2*(k*(k+1)/2)-k;

while(l<=r){
    ll int mid=(r+l)>>1;
    if(!good(mid,x)){
        r=mid-1;
    }else{
        l=mid+1;
    }
}
cout<<r<<"\n";

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