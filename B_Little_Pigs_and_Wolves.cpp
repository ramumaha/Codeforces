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

int visited[15][15];
char arr[15][15];
ll int n,m,c=0;



void solve()
{
cin>>n>>m;
loop(i,1,n+1){
    loop(j,1,m+1){
        cin>>arr[i][j];
    }
}
loop(i,1,n+1){
    loop(j,1,m+1){
        if(arr[i][j]=='W'){
            visited[i][j]=1;
            // cout<<i<<" "<<j<<"\n";
             if(arr[i][j+1]=='P' &&!visited[i][j+1]){
                 visited[i][j+1]=1;
                 c++;
             }else if(arr[i-1][j]=='P'&&!visited[i-1][j]){
                 visited[i-1][j]=1;
                 c++;
             }else if(arr[i][j-1]=='P' &&!visited[i][j-1]){
                 visited[i][j-1]=1;
                 c++;
             }else if(arr[i+1][j]=='P' &&!visited[i+1][j]){
                 visited[i+1][j]=1;
                 c++;
             }
        }
    }
}
cout<<c<<"\n";

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