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
vector<ll int>arr(100005);

ll int n;
vector<int>changes;



void solve()
{ll int m,x,v,y,q,t;
cin>>n>>m;
ll int s=0;
loop(i,1,n+1){
    cin>>arr[i];
   
}
while(m--){
    cin>>t;
    if(t==1){
        cin>>v>>x;
        arr[v]=x-s;
        
    }else if(t==2){
        cin>>y;
        s+=y;

    }else{
        cin>>q;
        cout<<arr[q]+s<<"\n";
    }
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