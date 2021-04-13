#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define pii pair<int, int>
#define m_p make_pair
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
{int n,x,y,sum_=0,c=0,p=0;
cin>>n;
int arr[n];
fo(i,n)
{
    cin>>arr[i];
    sum_+=arr[i];
}
cin>>x>>y;
//cout<<sum_;
fo(i,n)
{p+=arr[i];
sum_-=arr[i];
//cout<<p<<" "<<sum_<<"\n";
if(p>=x && p<=y && sum_>=x && sum_<=y)
{
    c=i+2;
}
}
if(c>0)
{
    cout<<c;
}
else
{
    cout<<0;
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