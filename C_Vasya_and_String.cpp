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

int n ,k;
int arr[1<<17];
char a[1<<17];
int ans,l,r;


void solve()
{l=1;
for(int r=1;r<=n;r++){
    while(l<r && arr[r]-arr[l-1]>k)l++;
    if(arr[r]-arr[l-1]<=k)ans=max(ans,r-l+1);
}
}




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   cin>>n>>k;
   cin>>(a+1);
   for(int i=1;i<=n;i++){
       if(a[i]=='a')arr[i]=1;
       else arr[i]=0;
       arr[i]+=arr[i-1];

   }
   solve();
   for(int i=1;i<=n;i++){
       if(a[i]=='b')arr[i]=1;
       else arr[i]=0;
       arr[i]+=arr[i-1];
   }
   solve();
   cout<<ans<<"\n";
       
    
    
}