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
ll int bi,si,ci,bn,sn,cn,bm,cm,sm,money;

bool good(ll int x){ // we assume we can make x
   ll int tb=x*bn; // to make x burger how much bun needed
    ll int ts=x*sn; // to make x burger how much sausage needed
    ll int tc=x*cn; // to make x burger how much cheese needed
    tb=max(0ll,tb-bi);  //how much extra bun to buy
    ts=max(0ll,ts-si);  //how much extra sausage to buy
    tc=max(0ll,tc-ci);  //how much extra cheese to buy
    return money>=(tb*bm + ts*sm + tc*cm); // can we buy it?
}



void solve()
{string str;
ll int ans=0;
cin>>str;
cin>>bi>>si>>ci;
cin>>bm>>sm>>cm>>money;
loop(i,0,str.size()){
    if(str[i]=='B'){
        bn++;
    }else if(str[i]=='C')cn++;
    else{
        sn++;
    }
}
ll int l=0,r=1000000000000000ll;
while(l<=r){
    ll mid=(l+r)>>1;
    if(good(mid)){
        ans=max(ans,mid);
        l=mid+1;
    }else{
        r=mid-1;
    }
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