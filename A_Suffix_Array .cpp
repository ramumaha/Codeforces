#include<bits/stdc++.h>
using namespace std;
 string s;
 int n;
   vector<int>p(n),c(n);
void change_suffix(){
 vector<pair<char,int>>a(n);
        for(int i=0;i<n;i++){
            a[i]={s[i],i};
        }
        sort(a.begin(),a.end());

        for(int i=0;i<n;i++){
            p[i]=a[i].second;
        }
        c[p[0]]=0;
        for(int i=1;i<n;i++){
            if(a[i].first==a[i-1].first){
                c[p[i]]=c[p[i-1]];
            }else{
                c[p[i]]=c[p[i-1]]+1;
            }
        }
}





int main(){
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    cin>>s;
    s+='$';
    int n =s.size();
    {
        //k=0
        change_suffix();
       
    }
    int k=0;
    while((1<<k) <n){
        //k->k+1
        vector<pair<pair<int,int>,int>>a(n);
        for(int i=0;i<n;i++){
            a[i]={{c[i],c[(i+(1<<k))%n]},i};   
        }
        sort(a.begin(),a.end());
        change_suffix();
    }
    for(int i=0;i<n;i++){
        cout<<p[i]<<" ";
    }
}