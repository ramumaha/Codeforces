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
    ll int n,m,x,y,a,b;
    cin>>n>>m>>x>>y>>a>>b;
    int dx=1,dy=1,cnt=0;
    while(1){
        if(x==a || y==b){
            break;
        }
        cnt++;
        if(x+dx<1 || x+dx>n){dx=-dx;}
        if(y+dy<1 || y+dy>m){dy=-dy;}
        x+=dx;
        y+=dy;
    }
   cout<<cnt<<"\n";

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