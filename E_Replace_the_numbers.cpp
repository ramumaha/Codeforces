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

const int N=500*1000+13;




void solve(){
    ll int q;
    cin>>q;
    vector<ll int>t(q),x(q),y(q);
    for(ll int i=0;i<q;i++){
        cin>>t[i]>>x[i];
         if(t[i]==2){
        cin>>y[i];
    }
    }
    vector<int>p(N);
      iota(p.begin(), p.end(), 0);
    vector<ll int>ans;
    for(ll int i=q-1;i>=0;i--){
        if(t[i]==1){
            ans.push_back(p[x[i]]);
        }else{
            p[x[i]]=p[y[i]];
        }
    }
    reverse(ans.begin(),ans.end());
    for(auto i:ans){
        cout<<i<<" ";
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