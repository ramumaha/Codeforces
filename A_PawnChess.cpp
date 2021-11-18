#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define pii pair<int, int>
#define mp make_pair
#define f first
#define s second
#define mii map<int, int>
#define fo(i,n) for(i=0;i<n;i++)
#define clr(x) memset(x, 0, sizeof(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define sort_v(a) sort(a.begin(),a.end())
#define sort(a) sort(a,a+n)
#define loop(i,a,b) for(int i=a;i<b;i++)
vector<vector<char>>arr(8,vector<char>('-',0));

int min_w(int r,int c){

    for(int i=r-1;i>=0;i--){
        if(arr[i][c]!='.'){
            
            return INT_MAX;
        }
    }
    return r;
}

int min_b(int r,int c){
    for(int i=r+1;i<8;i++){
        if(arr[i][c]!='.'){
            return INT_MAX;
        }
    }
    return 7-r;
}



void solve()
{
for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
        cin>>arr[i][j];
    }
}
int miniw=INT_MAX,minib=INT_MAX;
for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
        if(arr[i][j]=='B'){
            minib=min(minib,min_b(i,j));
        }
        if(arr[i][j]=='W'){
            miniw=min(miniw,min_w(i,j));
        }
    }
}
if(minib==miniw){
    cout<<"A\n";
}else{
    cout<< (miniw<minib?"A":"B")<<"\n";
}

}




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
       
    
    
}