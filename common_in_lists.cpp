#include<bits/stdc++.h>
using namespace std;
#define limit 10000

int main(){
    int n,m,x;
    cin>>n>>m;
    vector<int>a(limit,0);
    vector<int>b(limit,0);
    vector<int>ans;
    for(int i=0;i<n;i++){
        cin>>x;
        a[x]++;
    }
    for(int i=0;i<m;i++){
        cin>>x;
        b[x]++;
    }
    for(int i=0;i<limit;i++){
        int mini=min(a[i],b[i]);
        if(mini!=0){
            for(int k=0;k<mini;k++){
                ans.push_back(i);
            }

        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}