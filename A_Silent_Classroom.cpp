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
{map<char,int>mp;
string name;
ll int n,c=0;
cin>>n;
fo(i,n)
{
    cin>>name;
    mp[name[0]]++;
}

for(auto i:mp)
{
    if(i.second>2)
    {
       int d=i.second/2;
            int  x=i.second%2;

             int y=d+x;
             c+=(( d*(d-1) )/2) + (( y*(y-1) )/2)  ;
    }
}
/*for(auto i:mp)
{
    cout<<i.first<<" "<<i.second<<"\n";
}*/
cout<<c;









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