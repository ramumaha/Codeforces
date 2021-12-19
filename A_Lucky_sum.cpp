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
// #define sort(a) sort(a,a+n)
#define loop(i,a,b) for(int i=a;i<b;i++)



vector<ll> v;
ll a, b;
 
void go(ll x) {
	if (x > 1000000000000000) return;
	if (x >= a) v.pb(x);
	go(x * 10 + 4);
	go(x * 10 + 7);
}
 
int main() {
	cin >> a >> b;
	go(0);
	sort(v.begin(),v.end());
	ll res = 0;
	for (ll x : v) {
		res += (x) * (min(x, b) - a + 1);
		a = x + 1;
		if (a > b) break;
	}
	cout << res << endl;
	return 0;
}