#include <iostream>
#include <math.h>
#define ll long long
using namespace std;
ll cj(ll k) {
    ll a = 0;
    while (k > 0) {
        a += k % 10;
        k = k / 10;
    }
    return a;
}
ll n, i, g, j, xn = -1;
double x1, x2;
int main() {
    cin >> n;
    for (i = 1; i <= 81; i++) {
        x1 = (-i + sqrt(i * i + 4 * n)) / 2;
        x2 = (-i - sqrt(i * i + 4 * n)) / 2;
        g = (int) x1;
        j = (int) x2;
        if (g == x1 && j == x2) {
            if (g > j && g > 0 && cj(g) == i) {
                xn = (ll)x1;
                break;
            } else if (j > g && j > 0 && cj(j) == i) {
                xn = (ll)x2;
                break;
            }
        }
    }
    cout << xn;
}

