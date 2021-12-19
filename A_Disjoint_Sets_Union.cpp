#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000000
vector<ll int>parent(MAX);
vector<ll int>r(MAX);
void init(ll int n){
    for(ll int i=0;i<=n;i++){
        parent[i]=i;
    }
}

ll int get(ll int x){
    if(parent[x]!=x){
        parent[x]=get(parent[x]);
    }
    return parent[x];
}

void u(ll int x,ll int y){
    ll int xset=get(x);
    ll int yset=get(y);
    if(x==y)return;
    if(r[xset]<r[yset]){
        parent[xset]=yset;
    }else if(r[xset]>r[yset]){
        parent[yset]=xset;
    }else{
        r[xset]++;
        parent[yset]=xset;
    }
}








int main(){
    ll int n,m;
    cin>>n>>m;
    init(n);
    while(m--){
        string str;
        ll int x,y;
        cin>>str>>x>>y;
        if(str=="get"){
            if(get(x)==get(y)){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }else{
            u(x,y);

        }
    }
}