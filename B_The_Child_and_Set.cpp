#include <bits/stdc++.h>
using namespace std;
int n, lim;
vector<pair<int, int> > S;
vector<int> ans;
int main()
{
    cin >> n >> lim;
    for(int i = 1; i <= lim; i++)
    {
        S.push_back(make_pair(i & -i, i));
    }
    sort(S.rbegin(), S.rend());
    for(unsigned i = 0; i < S.size(); i++)
    {
        if(n >= S[i].first)
        {
            n -= S[i].first;
            ans.push_back(S[i].second);
        }
    }
    if(n)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ans.size() << endl;
        for(unsigned i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << ' ';
        }
    }
    return 0;
}