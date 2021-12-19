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
    string ans;
    vector<ll int>a(n);
    vector<ll int>g(n);
    ll int difference=0;
    loop(i,0,n){
        cin>>a[i]>>g[i];
    }
    ll int x=0,y=0;
    for(ll int i=0;i<n;i++){
        if(difference + a[x]<=500){
            ans+='A';
            difference+=a[x];
            x++;
            y++;
        }else{
            ans+='G';
            difference-=g[y];
            y++;
            x++;
        }
    }
    // cout<<difference;
    if(difference>500){
        cout<<-1;
        return;
    }else{
        cout<<ans;
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