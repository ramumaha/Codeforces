#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int n,k,x;
     cin>>n>>k;
     vector<int>a(n);
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
     for(int i=0;i<k;i++)
     {cin>>x;
     int l=-1;
     int r=n;
     while(r>l+1)
     {
         int m=(l+r)/2;
         if(a[m]<=x)
         {
             l=m;
         }
         else
         {
             r=m;
         }
     }
     if(l>-1 && a[l]==x)
     {
         cout<<"YES\n";
     }
     else
     {
         cout<<"NO\n";
     }

     }
     
    return 0;

}