#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll int n,m;
    cin>>n>>m;
    vector<ll int>arr(n+1);
    for(ll int i=1;i<=n;i++){
        cin>>arr[i];
    }
    ll int ans=0;
    ll int x,y;
    while(m--){
        cin>>x>>y;
        ans+=min(arr[x],arr[y]);
    }
    cout<<ans<<"\n";
}