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
// #define sort(a) sort(a,a+n)
#define loop(i,a,b) for(int i=a;i<b;i++)

ll int sum_digit(ll int x){
    ll int ans=0;
    while(x>0){
        ans+=x%10;
        x/=10;
    }
    return ans;

}

ll int power(ll int base,ll int pwr){
    if(pwr==0){
        return 1;
    }
    return base*power(base,pwr-1);
}

void solve()
{ll int a,b,c;
cin>>a>>b>>c;
vector<int>ans;
for(int i=1;i<=81;i++){
    ll int x=((b)*(power(i,a)))+c;
    // cout<<i<<" "<<sum_digit(x)<<"\n";
    if(i==sum_digit(x)&& x<1000000000){
        ans.push_back(x);

    }
}
cout<<ans.size()<<"\n";
for(auto i:ans){
    cout<<i<<" ";
}

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