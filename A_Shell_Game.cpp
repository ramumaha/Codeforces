#include<bits/stdc++.h>
using namespace std;

int main()
{   freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int init,a[3],b[3];
    cin>>init;
    for(int i=0;i<3;i++)
    {   
        cin>>a[i]>>b[i];    
    }
    for(int i=0;i<3;i++)
    {
        if(a[i]==init)
        {
            init=b[i];
        }
        else if(b[i]==init)
        {
            init=a[i];
        }
    }
   cout<<init;

}