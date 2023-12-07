#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("daugianguoc.inp", "r", stdin);
    freopen("daugianguoc.out", "w", stdout);

    int n;
    cin >> n;

    map<int, int> mp;

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        mp[x]++;
    }

    int res = 1e9;
    for(auto el : mp)
    {
        if(el.second == 1)
        {
            res = min(res, el.first);
        }
    }

    cout << res << "\n";

    return 0;
}