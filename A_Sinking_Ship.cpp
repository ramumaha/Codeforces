#include<bits/stdc++.h>
using namespace std;
#define ll long long 



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int n;
    cin>>n;
     string a[n][2];
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<2;j++)
         {
             cin>>a[i][j];
         }
     }
     for(int i=0;i<n;i++)
     {
         if(a[i][1]=="rat")
         {
             cout<<a[i][0]<<"\n";
         }
     }
    
     for(int i=0;i<n;i++)
     {
         if(a[i][1]=="woman"||a[i][1]=="child")
         {
             cout<<a[i][0]<<"\n";
         }
     }
      for(int i=0;i<n;i++)
     {
         if(a[i][1]=="man")
         {
             cout<<a[i][0]<<"\n";
         }
     }
      for(int i=0;i<n;i++)
     {
         if(a[i][1]=="captain")
         {
             cout<<a[i][0]<<"\n";
         }
     }

    
    

}