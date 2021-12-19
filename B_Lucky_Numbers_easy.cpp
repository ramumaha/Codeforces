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
#define MAX 10000000000000
vector<ll int>arr;
void lucky(ll int n){
    if(n>MAX)return;
    if(n<=MAX)arr.push_back(n);
    lucky(n*10+4);
    lucky(n*10+7);
    

}

bool good(ll int x){
    string s=to_string(x);
    ll int c_4=0,c_7=0;
    for(ll int i=0;i<s.length();i++){
        if(s[i]=='4'){
            c_4++;
        }else{
            c_7++;
        }
    }
    return c_7==c_4;
}




void solve(){
  ll int n;
  cin>>n;

  vector<ll int>ans;
  for(ll int i=0;i<arr.size();i++){
      if(good(arr[i])){
          ans.push_back(arr[i]);

      }
  }
  sort(ans.begin(),ans.end());
    ll int l=0,r=ans.size();
  while(l<=r){
      ll int mid=(l+r)>>1;
      if(ans[mid]>n){
          r=mid-1;
      }else if(ans[mid]<n){
          l=mid+1;
      }else{
          cout<<n;
          return;
      }
  }
   cout<<ans[l];



}




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int t=1;
    // cin>>t;
    lucky(0);
    sort(arr.begin(),arr.end());
    while(t--)
    {
        solve();
    }
       
    
    
}