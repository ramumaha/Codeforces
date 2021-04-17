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
#define reverse(a) reverse(a.begin(),a.end())
void solve()
{long int a,b;
cin>>a>>b;
string str;
cin>>str;
for(int times=0;times<2;times++)
{
    for(int i=0;i<str.size();i++)
    {
        int j=str.size()-i-1;
        if(str[i]!='?')
        {
            if(str[j]=='?')
            {
                str[j]=str[i];
            }   
        else if(str[i]!=str[j])
        {
            cout<<-1<<"\n";
            return;
        }
        }
    }
}
reverse(str);
a-=count(str.begin(),str.end(),'0');
b-=count(str.begin(),str.end(),'1');
int ques=count(str.begin(),str.end(),'?');
bool emptymid=(str.size()%2==1 && str[str.size()]/2=='?');
if(a<0 || b<0 || a+b!=ques || (emptymid && a%2==0 && b%2==0))
{
    cout<<-1<<"\n";
    return;
}
if(a%2==1 ||b%2==1)
{
    int i=str.size()/2;
    if(str[i]!='?')
    {
        cout<<-1<<"\n";
        return;
    }
    str[i]=(a%2 ==1 ?'0':'1');
    if(a%2==1)
    {a--;
    }
    else
    {
        b--;
    }
}
if(a%2==1 ||b%2==1)
{
    cout<<-1<<"\n";
    return;
}
for(int i=0;i<str.size();i++)
{
    if(str[i]=='?')
    {
        int j=str.size()-i-1;
        if(a>0)
        {
            a-=2;
            str[i]=str[j]='0';
        }
        else
        {b-=2;
        str[i]=str[j]='1';

        }
    }
    
}
cout<<str<<"\n";

}




int main()
{
    ios:: sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    cout<<fixed; cout<<setprecision(10);
 
    int test_cases = 1;
    cin>>test_cases;
    while(test_cases--)
    {
        solve();
    }
}