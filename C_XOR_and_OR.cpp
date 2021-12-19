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
    string str1,str2;
    cin>>str1>>str2;
    if(str1.size()!=str2.size()){
        cout<<"NO\n";
        return;
    }
    if(str1==str2){
        cout<<"YES\n";
        return;
    }
    ll int x=0,y=0;
    for(ll int i=0;i<str1.size();i++){
        if(str1[i]=='0'){
            x++;
        }
        if(str2[i]=='0'){
        y++;
    }
    }
    if(x==str1.size() || y==str2.size()){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";


}




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
       
    
    
}