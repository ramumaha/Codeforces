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
    ll int n,x,y;
    cin>>n;
    queue<ll int>q1;
    queue<ll int>q2;
    ll int ans=0;
    
        cin>>x;
        for(ll int i=0;i<x;i++){
            cin>>y;
        q1.push(y);}
    
    
        cin>>x;
        for(ll int i=0;i<x;i++){
            cin>>y;
            q2.push(y);

        }
        
    
    while(!q1.empty()&& !q2.empty()){
       x=q1.front();
       y=q2.front();
       q1.pop();
       q2.pop();
       if(x>y){
           q1.push(y);
           q1.push(x);
           ans++;
       }else if(y>x){
            q2.push(x);
           q2.push(y);
           ans++;
           
       }
       if(ans>10000){
           cout<<-1;
           return;
       }
    }
    cout<<ans<<" ";
    if(!q1.empty()){
        cout<<1;
    }else{
        cout<<2;
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