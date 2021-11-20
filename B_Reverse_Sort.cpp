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
{ll int n;
cin>>n;
string s,t;
cin>>s;
t=s;
if(is_sorted(s.begin(),s.end())){
    cout<<0<<"\n";
    return;
}
cout<<1<<"\n";
vector<int>ans;
sort_v(t);
for(int i=0;i<n;i++){
    if(s[i]!=t[i]){
        ans.push_back(i+1);
    }
}
cout<<ans.size()<<" ";
for(auto i:ans){
    cout<<i<<" ";
}

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