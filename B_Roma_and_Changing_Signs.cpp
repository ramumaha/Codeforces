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
{ll int n,k;
cin>>n>>k;
vector<ll int>arr(n);
loop(i,0,n){
    cin>>arr[i];
}

ll int sum=0;
ll int i=0;
while(k>0 && i<n){
   if(arr[i]<0){
       arr[i]=-arr[i];
         k--;
   }
   i++; 
}
sort_v(arr);
if(k>0){
    if(k%2){
        arr[0]=-arr[0];
    }
}
loop(i,0,n){
    sum+=arr[i];
}

cout<<sum;
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