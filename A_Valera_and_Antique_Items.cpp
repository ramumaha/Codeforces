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
#define fo(i,n) for(int i=0;i<n;i++)
#define clr(x) memset(x, 0, sizeof(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)

void solve()
{

}




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int t,n,y;
    cin>>t>>n;
    set<int>arr;
    fo(i,t)
    {int c;
    cin>>c;
    fo(j,c)
    {
        cin>>y;
        if(y<n)
        {
            arr.insert(i+1);
        }
    }

    }
    cout<<arr.size()<<"\n";
    if(arr.size()>0)
    {tr(itr,arr)
    {
        cout<<*itr<<" ";
    }}
    
       
    
    
}