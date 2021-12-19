#include<bits/stdc++.h>
using namespace std;
#define ll long long 

char s[55][55],ss[55][55];
int n,m,cnt,k;
vector<pair<int,pair<int,int>>>t;
vector<pair<int,int>>cur[55][55];

template<typename T> void print_int(T x)
{
	if(x<0)putchar('-'),x=-x;
	short a[20]= {},sz=0;
	while(x>0)a[sz++]=x%10,x/=10;
	if(sz==0)putchar('0');
	for(int i=sz-1; i>=0; i--)putchar('0'+a[i]);
}
#define printendl(a) print_int(a),puts("")
void dfs(int x,int y,int tx,int ty){
    if(x==-1 || x==55||y==-1||y==55)return;
    if(s[x][y]=='*')return;
    s[x][y]='*';
    cur[tx][ty].push_back({x,y});
    cnt++;
    dfs(x-1,y,tx,ty);
    dfs(x+1,y,tx,ty);
    dfs(x,y-1,tx,ty);
    dfs(x,y+1,tx,ty);
}

int main(){
    ll int n,m,k;
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++){scanf("%s",s[i]+1);}
    memcpy(ss,s,sizeof(s));
    for(int i=0;i<55;i++){
        for(int j=0;j<55;j++){
            if(i<1||i>n||j<1||j>m){
                s[i][j]='.';
            }
        }
    }
    dfs(0,0,0,0);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s[i][j]=='.'){
                cnt=0;
                dfs(i,j,i,j);
                t.push_back({cnt,{i,j}});
            }
        }
    }
    sort(t.begin(),t.end());
    int ans=0;
    for(int i=0;i<(int)t.size()-k;i++){
        ans+=t[i].first;
        int x=t[i].second.first;
       int  y=t[i].second.second;
        for(int j=0;j<(int)cur[x][y].size();j++){
            ss[cur[x][y][j].first][cur[x][y][j].second]='*';
        }
    }
    printendl(ans);
    for(int i=1;i<=n;i++)printf("%s\n",ss[i]+1);
	return 0;
}