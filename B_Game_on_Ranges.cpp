#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
     ll int n;
      cin>>n;
      vector<vector<bool>>mark(n+1,vector<bool>(n+1));
      vector<int>l(n),r(n);
      for(int i=0;i<n;i++){
          cin>>l[i]>>r[i];
          mark[l[i]][r[i]]=true;
      }
    for(int i=0;i<n;i++){
        for(int d=l[i];d<=r[i];d++){
            if((d==l[i] || mark[l[i]][d-1])  && (d==r[i] || mark[d+1][r[i]])){
                cout<<l[i]<<" "<<r[i]<<" "<<d<<"\n";
                break;
            }
        }
    }

}





int main(){
      cin.tie(0)->sync_with_stdio(0);
      ll int t;
      cin>>t;
      while(t--){
          solve();
      }
     
    return 0;
}