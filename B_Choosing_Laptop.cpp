#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,index;
    cin>>n;
    bool arr[n+1];
    memset(arr,1,sizeof(arr));
    int speed[n+1],ram[n+1],hdd[n+1],cost[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>speed[i]>>ram[i]>>hdd[i]>>cost[i];
    }
    for(int i=1;i<=n;i++)
    {
       for(int j=1;j<=n;j++)
       {
           if(speed[i]<speed[j] && ram[i]<ram[j] && hdd[i]<hdd[j])
           {
               arr[i]=0;
           }
       }
    }
    int min_=1e8;
    for(int i=1;i<=n;i++)
    {
       if(arr[i])
       {if(min_>cost[i])
       {
           min_=cost[i];
           index=i;
       }

           
       }
    }
    cout<<index;
}