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

void solve()
{string str;
cin>>str;
ll int n=str.size();
vector<ll int>prefix(n+1,0);
for(int i=1;i<n;i++){
    if(str[i]==str[i-1]){
        prefix[i]=prefix[i-1]+1;
    }else{
        prefix[i]=prefix[i-1];
    }
}
ll int m,l,r;
cin>>m;
while(m--){
    cin>>l>>r;
    cout<<prefix[r-1]-prefix[l-1]<<"\n";

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