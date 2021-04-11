#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int ans1=s.find("AB");
    int ans2=s.find("BA",ans1+2);
    int ans3=s.find("BA");
    int ans4=s.find("AB",ans3+2);
    if((ans1!=-1 && ans2!=-1)||(ans3!=-1&&ans4!=-1))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    }
