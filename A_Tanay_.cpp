#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll int  ans = 0,n,x1,x2,y1,y2;
	cin >> n;
	for (ll int i = 0; i < n; i++)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		ans += (x2-x1+1)*(y2-y1+1);
	}
	cout << ans << endl;
	return 0;
}