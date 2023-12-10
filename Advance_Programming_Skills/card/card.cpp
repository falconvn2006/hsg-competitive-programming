#include<bits/stdc++.h>

using namespace std;

int main()
{

    freopen("card.inp", "r", stdin);
    freopen("card.out", "w", stdout);

    cin.tie(0);
    cin.sync_with_stdio();

    int n, m;
    cin >> n >> m;

    int pos = 1;

    for(int i = 1; i <= m; i++)
    {
        int x, y;
        cin >> x >> y;

        if(pos == x)
        {
            pos = y;
        }
    }

    cout << pos << "\n";

    return 0;
}