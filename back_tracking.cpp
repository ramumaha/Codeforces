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
int x[]={0,-1,0,+1,0};
int y[]={0,0,1,0,-1};
vector<vector<int>>arr(n,vector<int>(n));
loop(i,0,n){
    loop(j,0,n){
        cin>>arr[i][j];
    }
}
bool visited[n][n];
memset(visited,0,sizeof(visited));
stack<pair<int,int>>s;
s.push({0,0});
while(!s.empty()){
    pair<int,int>t=s.top();
    s.pop();
    if(!visited[t.first][t.second]){
        visited[t.first][t.second]=1;
        int dx=t.first+x[arr[t.first][t.second]];
        int dy=t.second+y[arr[t.first][t.second]];
        if(arr[dx][dy]==9){
            cout<<"YES\n";
            return;
        }
        if(dx<0 || dy<0 || dx>n || dy>n){
            continue;
        }
        if(!visited[dx][dy]){
            s.push({dx,dy});
        }
    }
}
cout<<"NO\n";



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