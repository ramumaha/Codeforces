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
#define loop(i,a,b) for(int i=a;i<b;i++)
#define MAX 1000000
 bool prime[MAX+1];
void sieve(){
   
    memset(prime,true,sizeof(prime));
    prime[1]=false;
    for(ll int p=2;p*p<=MAX;p++){
        if(prime[p]==true){
            for(ll int i=p*p;i<=MAX;i+=p){
                prime[i]=false;
            }
        }
    }

}

void solve(){
    ll int n,m;
    cin>>n>>m;
    int arr[n][m];
    vector<ll int>row;
    vector<ll int>col;
    loop(i,0,n){
        loop(j,0,m){
            cin>>arr[i][j];
        }
    }
    loop(i,0,n){
         ll int moves=0;
        loop(j,0,m){
            if(!prime[arr[i][j]]){
                for(ll int x=arr[i][j];x<=MAX;x++){
                    if(prime[x]){
                        break;
                    }else{
                        moves++;

                    }
                }
                

            }
        }
        row.push_back(moves);
       
    }
   for(int j=0;j<m;j++){
         ll int moves=0;
       for(int i=0;i<n;i++){
          if(!prime[arr[i][j]]){
              
                for(ll int x=arr[i][j];x<=MAX;x++){
                    if(prime[x]){
                         break;
                       
                    }else{
                       
                         moves++;
                    }
                }
              
       }
   }
     col.push_back(moves);
   }
   ll int minr=INT_MAX,minc=INT_MAX;
    for(auto i:row){
        minr=min(minr,i);
    }
     for(auto i:col){
        minc=min(minc,i);
    }
    cout<<min(minc,minr);

}




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int t=1;
    // cin>>t;
    sieve();
    while(t--)
    {
        solve();
    }
       
    
    
}