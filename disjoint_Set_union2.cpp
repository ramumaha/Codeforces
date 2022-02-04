#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 500000

vector<int>parent(MAX);
vector<int>rnk(MAX);
vector<int>maxi(MAX);
vector<int>mini(MAX);
vector<int>c(MAX);

void init(){
    for(int i=0;i<MAX;i++){
        parent[i]=i;
        mini[i]=i;
        maxi[i]=i;
        c[i]=1;
    }
}

int getParent(int x){
    if(parent[x]!=x){
        parent[x]=getParent(parent[x]);
    }
    return parent[x];
}


void Union(int x,int y){
    int a=getParent(x);
    int b=getParent(y);
    if(a==b)return;
    if(rnk[a]>rnk[b]){
        parent[b]=a;   
        maxi[a]=max(maxi[a],maxi[b]);
        mini[a]=min(mini[a],mini[b]);
        c[a]+=c[b];
    }
    else{
        parent[a]=b;
        if(rnk[a]==rnk[b]){
            rnk[b]++;
        }
        maxi[b]=max(maxi[a],maxi[b]);
        mini[b]=min(mini[a],mini[b]);
        c[b]+=c[a];

    }
    
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    init();
    while(m--){
        string q;
        int x,y;
        cin>>q;
        if(q=="union"){
            cin>>x>>y;
            Union(x,y);
        }else{
            cin>>x;
            ll int p=getParent(x);
            cout<<mini[p]<<" "<<maxi[p]<<" "<<c[p]<<"\n";
        }
    }











    return 0;
}