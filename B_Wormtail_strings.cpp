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

ll int shift_right(string str,string base){
    string temp = str;
    int ret = 0;
    for(int i=0;i<str.length();i++)
    {
        if(temp==base)
            return ret;
        ret++;
        temp=temp.substr(1)+temp[0];
    }
    return INT_MAX;
}



void solve(){
     ll int n;
    string str,str1;
    vector<string>arr(n);
    cin>>n;
    cin>>arr[0];
    str=arr[0];
    sort(str.begin(),str.end());
    ll int ans=0;
    if(n==1){
        cout<<0<<"\n";
        return;
    }
    for(int i=1;i<n;i++){
        cin>>arr[i];
        str1=arr[i];
        sort(str1.begin(),str1.end());
        if(str1!=str){
            cout<<"-1\n";
            return;
        }
    }
    
    ll int f_ans=INT_MAX;
    for(int i=0;i<n;i++){
        ans=0;
        // cout<<arr[i]<<"\n\n";
        for(int j=0;j<n;j++){
            if(j==i)continue;
            ans+=shift_right(arr[j],arr[i]);
        }
        f_ans=min(f_ans,ans);
        // cout<<ans<<"\n\n";
    }
    if(f_ans==INT_MAX){
        cout<<-1<<"\n";
        return;
    }
    cout<<f_ans<<"\n";



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