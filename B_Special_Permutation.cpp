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
{
ll int n,a,b;
vector<int>left,right;
unordered_set<int>used;
cin>>n>>a>>b;
int c=(n/2)-1;
for(int i=1;i<b&&c>0;i++){
    if(i!=a){
        c--;
        used.insert(i);
        right.push_back(i);
    }
}
used.insert(b);
right.push_back(b);
if(right.size()!=(n/2)){
    cout<<-1<<"\n";
    return;
}
c=n/2-1;
for(int i=1;i+a<=n;i++){
    if(used.find(a+i)==used.end()){
        c--;
        used.insert(a+i);
        left.push_back(a+i);
    }
}
left.push_back(a);
if(left.size()!=n/2){
    cout<<-1<<"\n";
    return;
}



for(auto i:left){
    cout<<i<<" ";
}
for(auto i:right){
    cout<<i<<" ";
}

cout<<"\n";
  
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