#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<int,string>mp;
    mp.insert({1 ,"one"});
    mp.insert({2,"two"});
    mp.insert({3,"three"});
    mp.insert({4,"four"});
    mp.insert({5,"five"});
    mp.insert({6,"six"});
    mp.insert({7,"seven"});
    mp.insert({8,"eight"});
    mp.insert({9,"nine"});
    mp.insert({10,"ten"});
    mp.insert({11,"eleven"});
    mp.insert({12,"twelve"});
    mp.insert({13,"thirteen"});
    mp.insert({14,"fourteen"});
    mp.insert({15,"fifteen"});
    mp.insert({16,"sixteen"});
    mp.insert({17,"seventeen"});
    mp.insert({18,"eighteen"});
    mp.insert({19,"nineteen"});
    mp.insert({20,"twenty"});
    mp.insert({30,"thirty"});
    mp.insert({40,"forty"});
    mp.insert({50,"fifty"});
    mp.insert({60,"sixty"});
    mp.insert({70,"seventy"});
    mp.insert({80,"eighty"});
    mp.insert({90,"ninety"});
    mp.insert({0,"zero"});
    if(n<20 || n%10==0)
    {
        cout<<mp[n];
    }
    else
    {
        cout<<mp[(n/10)*10]<<"-"<<mp[n%10];
    }
    
    

  
}