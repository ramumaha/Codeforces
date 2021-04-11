#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll n;
    cin>>n;
    int a[n],b[n],c[100001],count=0;;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        c[b[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        c[b[i]]-=1;
        if(c[a[i]]==0)
        {
            count++;
        }
        c[b[i]]+=1;
    }
    cout<<count;

}