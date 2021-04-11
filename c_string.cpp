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
#define fo(i,n) for(int i=0;i<n;i++)
#define clr(x) memset(x, 0, sizeof(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)

void solve()
{ll int n;
cin>>n;
vi arr(n+2);
fo(i,n+2){cin>>arr[i];}
sort(arr.begin(),arr.end());
ll int s=0;
fo(i,n){s+=arr[i];}
if(s==arr[n])
{
    fo(i,n)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return;
}
else
{   //cout<<"ANS"<<" ";
    s+=arr[n];
    for(int i =0; i<n+1; i++){
     if(s-arr[i]==arr[n+1]){
      for(int j =0; j<n+1; j++){
          if(i!=j){
              cout<<arr[j]<<" ";
          }
      }
      cout<<"\n";
      return;}}
    
       
}
cout<<"-1\n";
}




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
       
    
    
}