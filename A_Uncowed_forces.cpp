#include<bits/stdc++.h>
using namespace std;

double arr[]={500, 1000, 1500, 2000,2500};

int main()
{
    double ans=0;
    double a[5],b[5],x,y;
    for(int i=0;i<5;i++)
    {cin>>a[i];}
     for(int i=0;i<5;i++)
    {cin>>b[i];}
    cin>>x>>y;
    ans=100*x-50*y;
    for(int i=0;i<5;i++)
    {  ans+=max(0.3*arr[i],(arr[i]*250 -a[i]*arr[i])/250 - b[i]*50);
    }
    cout<<ans;
    
}