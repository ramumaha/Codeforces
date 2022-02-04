#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin >> n;
	string dir;
	cin >> dir;
	vector <int> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	vector <bool> u(n);
	int cur = 0;
	while (1) {
		u[cur] = 1;
		if (dir[cur] == '<') {
			cur -= a[cur];
		} else {
			cur += a[cur];
		}
		if (cur < 0 || cur >= n) {
			cout << "FINITE" << endl;
			return 0;
		}
		if (u[cur]) {
			cout << "INFINITE" << endl;
			return 0;
		}
	}
}