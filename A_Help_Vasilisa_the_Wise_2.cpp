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
{int r1,r2,c1,c2,d1,d2,x1,x2,x3,x4;
set<int>a;
cin>>r1>>r2>>c1>>c2>>d1>>d2;
if((c1-r2!=r1-c2 ||(c1-r2==0 && r1-c2==0)) && (c2-r2!=r1-c1 || (c2-r2==0 && r1-c1==0)))
{
    cout<<-1;
    return;
}
else
{x4=-(r1-c2-d1)/2;
x1=d1-x4;
x2=c2-x4;
x3=c1-x1;   
a.insert(x1);
a.insert(x2);
a.insert(x3); 
a.insert(x4);

}
if(x1>9 || x2>9|| x3>9|| x4>9 || x1<1 || x2<1 ||x3<1||x4<1 || a.size()!=4)
{
    cout<<-1;
    return;
}
else
{
    cout<<x1<<" "<<x2<<"\n"<<x3<<" "<<x4;
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