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

void solve()
{ll int a,b,c,x=1,y=1;
cin>>a>>b>>c;
for(ll int i=1;i<a;i++)
{
    x*=10;
}
for(ll int i=1;i<b;i++)
{
    y*=10;
}

if(a<b)
{
y+=pow(10,c-1);
}
else
{
    x+=pow(10,c-1);
}
cout<<x<<" "<<y<<"\n";

}




int main()
{
  long long int t;
  cin>>t;
  while(t--)
 
    {solve();
}}