#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t,a,b,c;
    cin>>t;
    while(t--)
    {cin>>a>>b>>c;
    long long int sum=a+b+c;
    long long int slot=sum/9;
    if(sum%9==0 && a>=slot && b>=slot && c>=slot)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }

    }

}