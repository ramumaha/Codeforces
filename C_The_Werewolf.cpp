#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int maxn=100010;

int a[maxn],type[maxn],l[maxn],c[maxn];
ll len[maxn];


int getpos(ll int pos,int n){
    int p=lower_bound(len+1,len+n+1,pos)-len;
    if(type[p]==1){
        return a[p];
    }else{
        return getpos((pos-len[p-1]-1)%l[p]+1,n);
    }

}

int main(){
    int n,m;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>type[i];
        if(type[i]==1){
            cin>>a[i];
            len[i]=len[i-1]+1;
        }else{
            cin>>l[i]>>c[i];
            len[i]=len[i-1]+l[i]*c[i];
        }
        
    }
    cin>>m;
        ll int pos;
        for(int i=0;i<m;i++){
            cin>>pos;
            cout<<getpos(pos,n)<<" ";
        }

}
