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


vll adj[26];//a vector of vectors 
vector<bool>visited(26,0);
string ans;

void dfs(ll int x,ll&n)
{
    if(n==0)
    return;
    visited[x]=1;//we are currently in that letter
    for(ll u:adj[x])//going to that adjacency matrix of that curr.letter
    {
        if(n==0)
        return;
        char ch='a'+u;//converting into char
        ans+=ch;
        n--;
        if(n==0)
        return;
        if(!visited[u])
        dfs(u,n);
        if(x==u)continue;//when try to print rev of string
        if(n==0)
        return;
        ans+='a'+x;//if diff than exisitng add to ans
        n--;
        if(n==0)
        return;
    }
}






int main()
{
    ios:: sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    cout<<fixed; cout<<setprecision(10);
    ll int n,k;
    cin>>n>>k;
    if(n==1)
    {
        cout<<'a';
        exit(0);
    }
    ll int length=n;

    for(ll int i=0;i<k;i++)//first k characters to be used
    {
        for(ll int j=i;j<k;j++)
        {
            adj[i].pb(j);
        }
    }

    ans+="a";
    n--;
    dfs(0,n);
    string res;
    while((ll)res.length()<length)
    {
        res+=ans.substr(1);//coz 'a' is by default.
    }
    cout<<res.substr(0,length);

 
    
}