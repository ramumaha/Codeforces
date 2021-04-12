#include<bits/stdc++.h>
using namespace std;
#define ll long long
/*void solve()
{int n=1,q=2;
//cin>>n>>q;
cout<<n<<q;
char y,x;
string arr;
string query;
for(ll int i=0;i<n;i++)
{
    cin>>y>>x;
    cout<<y<<" ";
    arr+=to_string(y);
}
//cout<<arr<<" ";
for(ll int i=0;i<q;i++)
{
    cin>>y>>x;
    query+=to_string(y);
}
for(ll int i=0;i<q;i++)
{
    int index=arr.find(query[i]);
    //cout<<index<<" ";
    string p=query[i]+arr.substr(0,index)+arr.substr(index+1);
    arr=p;

}

}*/




int main()
{
  
    int n,q,index;
    cin>>n>>q;
    //cout<<n<<" "<<q;
    vector<int>arr(n);
    vector<int>query(q);
    for(ll int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(ll int i=0;i<q;i++)
    {
        cin>>query[i];
    }
    for(ll int i=0;i<q;i++)
    {   ll int j=0;
        for(j=0;j<n;j++)
        {
            if(arr[j]==query[i])
            {   index=j+1;
                cout<<index<<" ";
                break;
            }
        }
        //remember last element
    for(int k=index-2;k>=0;k--)
    {
    arr[k+1] = arr[k]; //move all element to the right except last one
    }
    arr[0] = query[i];
        /*for(ll int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }*/
       // cout<<"\n";
    }

    
    
}