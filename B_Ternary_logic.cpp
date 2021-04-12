#include<bits/stdc++.h>
using namespace std;

int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    long long int a,c,b=0,p=1;
    cin>>a>>c;
    while(a||c)
    {
       b+=((c%3-a%3+3)%3)*p;
       p*=3;
       a/=3;
       c/=3;
    }
    cout<<b;

}


