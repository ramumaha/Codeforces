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
{string s;
cin>>s;
int a=stoi(s.substr(0,2));
int b=stoi(s.substr(3));
while(a!=24)
{
    b++;
    if(b%60==0)
    {
        b=0;
        a++;
    }
    if(b/10==a%10 && a/10==b%10)
    {
        break;
    }
}
if(a==24)
{
    cout<<"00"<<":"<<"00";
}
else
{
    printf("%02d:%02d\n", a, b);
}
}




int main()
{
        ios:: sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    cout<<fixed; cout<<setprecision(10);
 
    int test_cases = 1;
   // cin>>test_cases;
    while(test_cases--)
    {
        solve();
    }
}