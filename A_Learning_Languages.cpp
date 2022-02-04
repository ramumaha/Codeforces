#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 101
ll int parent[mx];
ll int rnk[mx]={0};
ll int freq[mx]={0};

ll int find_parent(ll int x){
    if(parent[x]!=x){
        parent[x]=find_parent(parent[x]);
    }
    return parent[x];
}

void Union(ll int x,ll int y){
    ll int a=find_parent(x);
    ll int b=find_parent(y);
    if(a==b)return;
    if(rnk[a]<rnk[b]){
        parent[a]=b;
    }else{
        parent[b]=a;
        if(rnk[b]==rnk[a]){
            rnk[b]++;
        }
    }
}




int main(){
    ll int n,m;
    ll int no_language=0,count=0;
    for(ll int i=0;i<mx;i++){
        parent[i]=i;
    }
    cin>>n>>m;
    ll int u,v,k;
    for(ll int i=0;i<n;i++){
        cin>>k;
        if(k==0){
            no_language++;
            continue;
        }
        cin>>u;
        freq[u]++;
        for(int j=1;j<k;j++){
            cin>>v;
            freq[v]++;
            Union(u,v); //club same language together
        }
    }
    ll int ans=0;
    for(ll int i=1;i<=m;i++){
        if(freq[i]==0){
            count++;
        }else if(parent[i]==i){
            ans++;
        }
    }
    ans--;
    if(count==m){
        cout<<n<<"\n";
    }else{
        cout<<ans+no_language<<"\n";
    }







    return 0;
}





