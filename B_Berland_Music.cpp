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
#define loop(i,a,b) for(int i=a;i<b;i++)





void solve(){
    ll int n;
    cin>>n;
    string str;
    vector<ll int>arr(n);
    map<ll int,ll int>mp;
    ll int count=n;
    vector<ll int>upper;
    vector<ll int>lower;
    loop(i,0,n){
        cin>>arr[i];
    }
    cin>>str;
    for(int i=0;i<n;i++){
        if(str[i]=='0'){
            lower.push_back(arr[i]);
        }else{
            upper.push_back(arr[i]);
        }
    }
    sort(upper.begin(),upper.end(),greater<int>());
    sort(lower.begin(),lower.end(),greater<int>());
    for(int i=0;i<upper.size();i++){
        mp[upper[i]]=count;;
        count--;
    }
    for(int i=0;i<lower.size();i++){
        mp[lower[i]]=count;
        count--;
    }
    for(int i=0;i<n;i++){
        cout<<mp[arr[i]]<<" ";
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