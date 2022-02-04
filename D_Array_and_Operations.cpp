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
    ll int n,k;
    cin>>n>>k;
    vector<ll int>arr(n);
    loop(i,0,n){
        cin>>arr[i];
    }
    ll int ans=0;
    sort(arr.begin(),arr.end());
    vector<ll int>visited(n,0);
    for(int i=0;i<n-2*k;i++){
        ans+=arr[i];
        visited[i]=1;
    }
    // cout<<ans<<"\n";
    ll int index,x;
    for(int i=n-2*k;i<n && k>0;i++){
        int mini=INT_MAX;
        visited[i]=1;
        for(int j=i+1;j<n;j++){
            if(!visited[j]){
            x=arr[i]/arr[j];
            if(x<mini){
                index=j;
                mini=x;

            }
        }
       

    }
     visited[index]=1;
        ans+=mini;
        k--;
    // cout<<mini<<" ";
  

}
  cout<<ans<<"\n";
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