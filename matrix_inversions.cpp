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
    string str;
    cin>>str;
    ll int n=str.length();
    ll int ones_count=0,cur_max=0,max_diff=0;
    for(int i=0;i<n;i++){
        if(str[i]=='1'){
            ones_count++;
        }
       ll int val=(str[i]=='1')?-1:1;
        cur_max=max(val,cur_max+val);
        max_diff=max(max_diff,cur_max);

    }
    max_diff=max((ll int )0,max_diff);
    
    cout<<ones_count+max_diff<<"\n";


    

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