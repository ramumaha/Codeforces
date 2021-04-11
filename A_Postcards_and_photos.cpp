#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    ll int f=0;
    for(ll int i=0;i<s.length();)
    {
        
        if(s[i]=='C' && s[i+1]=='C')
        {   int c=1;
            
             i++;
                while(s[i]=='C' && c<5)
               { c++;
                i++;}
                
            
            f++;
        }
        else if(s[i]=='P' && s[i+1]=='P')
        {
            int c=1;
              i++;
                while(s[i]=='P' && c<5)
            {
                c++;
                i++;
            }
            f++;
        }
        else
        {
            f++;
            i++;
        }
    }
    cout<<f;
    
}