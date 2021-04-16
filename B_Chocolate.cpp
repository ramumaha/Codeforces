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
#define msi map<string,int>
#define mss map<string,string>
#define mci map<char,int>
#define mic map<int,char>
#define fo(i,n) for(int i=0;i<n;i++)
#define clr(x) memset(x, 0, sizeof(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define sort(a) sort(a.begin(),a.end())
#define reverse(a) reverse(a.begin(),a.end())

void solve()
{ll int n,x,ans=1;
cin>>n;
vi arr;
fo(i,n)
{
    cin>>x;
    if(x==1)
    {
        arr.push_back(i+1);
    }
}

if(arr.size()==1)
{
    cout<<1<<"\n";
}
else if(arr.size()==0)
{
    cout<<0<<"\n";
}
else
{for(int i=0,j=1;i<arr.size(),j<arr.size();)
{ans*=(arr[j]-arr[i]);
//cout<<ans<<" ";
i=j;
j++;

}
cout<<ans;
}
}




int main()
{
        ios:: sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    cout<<fixed; cout<<setprecision(10);
 
    int test_cases = 1;
    //cin>>test_cases;
    while(test_cases--)
    {
        solve();
    }
}