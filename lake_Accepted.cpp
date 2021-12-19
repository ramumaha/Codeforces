#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <utility>
#include <vector>
using namespace std;
template<typename T> void get_int(T &x)
{
	char t=getchar();
	bool neg=false;
	x=0;
	for(; (t>'9'||t<'0')&&t!='-'; t=getchar());
	if(t=='-')neg=true,t=getchar();
	for(; t<='9'&&t>='0'; t=getchar())x=x*10+t-'0';
	if(neg)x=-x;
}
template<typename T> void print_int(T x)
{
	if(x<0)putchar('-'),x=-x;
	short a[20]= {},sz=0;
	while(x>0)a[sz++]=x%10,x/=10;
	if(sz==0)putchar('0');
	for(int i=sz-1; i>=0; i--)putchar('0'+a[i]);
}
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define get1(a) get_int(a)
#define get2(a,b) get1(a),get1(b)
#define get3(a,b,c) get1(a),get2(b,c)
#define printendl(a) print_int(a),puts("")
typedef long long LL;
typedef unsigned long long uLL;
typedef pair<int,int> pii;
const int inf=0x3f3f3f3f;
const LL Linf=1ll<<61;
const double pi=acos(-1.0);
 
template<typename T> inline void updmax(T &x,const T y){if(x<y)x=y;}
template<typename T> inline void updmin(T &x,const T y){if(x>y)x=y;}
 
char s[55][55],ss[55][55];
int n,m,cnt,k;
vector<pair<int,pii> > t;
vector<pii> cur[55][55];
void dfs(int x,int y,int tx,int ty)
{
	if(x==-1||x==55||y==-1||y==55)return;
	if(s[x][y]=='*')return;
	s[x][y]='*';
	cur[tx][ty].pb(mp(x,y));
	cnt++;
	dfs(x-1,y,tx,ty);
	dfs(x+1,y,tx,ty);
	dfs(x,y-1,tx,ty);
	dfs(x,y+1,tx,ty);
}
int main()
{
	get3(n,m,k);
	for(int i=1;i<=n;i++)scanf("%s",s[i]+1);
	memcpy(ss,s,sizeof(s));
	for(int i=0;i<55;i++)for(int j=0;j<55;j++)
		if(i<1||i>n||j<1||j>m)s[i][j]='.';
	dfs(0,0,0,0);
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
		{
			if(s[i][j]=='.')
			{
				cnt=0;
				dfs(i,j,i,j);
				t.pb(mp(cnt,mp(i,j)));
			}
		}
	sort(t.begin(),t.end());
	int ans=0;
	for(int i=0;i<(int)t.size()-k;i++)
	{
		ans+=t[i].ff;
		int x=t[i].ss.ff,y=t[i].ss.ss;
		for(int j=0;j<(int)cur[x][y].size();j++)
			ss[cur[x][y][j].ff][cur[x][y][j].ss]='*';
	}
	printendl(ans);
	for(int i=1;i<=n;i++)printf("%s\n",ss[i]+1);
	return 0;
}