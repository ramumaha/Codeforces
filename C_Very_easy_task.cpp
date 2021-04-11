#include<bits/stdc++.h>
using namespace std;
long long int n,a,b;
bool good(long long int  m)
{return ((m)/a + (m)/b)+1 >= n;

}





int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>a>>b;
    long long int l=0,r=2;
    while(!good(r)){r*=2;}
    for(int i=0;i<100;i++)
    {
        long long int mid=(l+r)/2;
        if(good(mid))
        {
            r=mid;
        }
        else
        {
            l=mid;
        }
    }
    cout<<r+min(a,b)<<"\n";


}