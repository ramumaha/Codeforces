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

void solve()
{ll int x,y;
cin>>x>>y;
ll int c=abs(x)+abs(y);
if(x>0 && y>0){
    cout<<0<<" "<<c<<" "<<c<<" "<<0;
}else if(x>0 && y<0){
    cout<<0<<" "<<-c<<" "<<c<<" "<<0;
}else if(x<0 && y>0){
    cout<<-c<<" "<<0<<" "<<0<<" "<<c;
}else{
    cout<<-c<<" "<<0<<" "<<0<<" "<<-c;
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