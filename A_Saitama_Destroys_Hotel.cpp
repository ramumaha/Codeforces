#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll int n;

int main()
{
    ll int n,s,a,b;
    cin>>n>>s;
    int f[n],t[n];
    for(int i=0;i<n;i++)
    {
        cin>>f[i]>>t[i];
    }
    reverse(f,f+n);
    reverse(t,t+n);
    int time=0,floor=f[0];
   if(floor!=s)
   {
       time+=s-f[0];
       if(time<t[0])
       {
           time+=t[0]-time; }
   }
   else
   {
       if(time<t[0])
       {
           time+=t[0]-time;
       }
   }

   for(int i=1;i<n;i++)
   { time+=floor-f[i];
    if(time<t[i])
       {
           time+=t[i]-time; }
    floor=f[i];
   }
   cout<<time+floor;

    
}