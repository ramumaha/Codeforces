#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,l;
    cin>>n>>m;
    set<int>s;
    int a[n+10],b[n+10];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=n;i>=1;i--)
    {
        s.insert(a[i]);
        b[i]=s.size();
    }
    for(int i=0;i<m;i++)
    {cin>>l;
    cout<<b[l]<<"\n";

    }
    return 0;
}