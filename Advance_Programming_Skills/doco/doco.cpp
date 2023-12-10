#include<bits/stdc++.h>

using namespace std;

int main()
{

    freopen("doco.inp", "r", stdin);
    freopen("doco.out", "w", stdout);

    cin.tie(0);
    cin.sync_with_stdio();

    int n;
    cin >> n;

    int res = -1;
    for(int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;

        if(res == -1)
        {
            res = x;
            cout << res-1 << "\n";
        }
        else
        {
            res++;
            cout << res << "\n";
            res = max(res, x);
        }
    }

    return 0;
}