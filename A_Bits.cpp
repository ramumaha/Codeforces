#include<bits/stdc++.h>
using namespace std;
#define ll long long
 ll int ans=0;
unsigned ll int bits(unsigned ll int x){
    unsigned ll int ans=0;
    while(x!=0){
        ans++;
        x >>=1;
    }
    return ans;
}
ll int power(ll int base,ll int p){
    if(p==0)return 1;
    return base*power(base,p-1);

}
ll int bits(ll int l ,ll int r){
    if(r==0)return 0;
    ll int max_bits=bits(r);
    ll int maxi=power(2,max_bits-1);
    ll int maxi_1=power(2,max_bits);
    if(l==r){
       ans=l;
    }else if(maxi-1<l && maxi-1<r){
     ans= bits(l-maxi,r-maxi)+maxi;
    }else if(maxi_1-1<=r){
       ans=maxi_1-1;
    }else{
        ans=maxi-1;
    }
    return ans;
}
void solve(){
    ll int l,r;
    cin>>l>>r;
    cout<<bits(l,r)<<"\n";


}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int n;
    cin>>n;
    while(n--){
       solve();
        

        

    }
    return 0;

}