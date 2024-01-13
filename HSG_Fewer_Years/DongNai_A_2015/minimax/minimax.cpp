#include<bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("minimax.inp", "r", stdin);
    freopen("minimax.out", "w", stdout);

    int n;
    cin >> n;

    int a[10003];
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int x, y;
    cin >> x >> y;

    int res = 0, minEl = 0;
    for(int i = x; i <= y; i++)
    {
        int b[10003];
        for(int j = 0; j < n; j++)
        {
            b[j] = abs(a[j] - i);
        }

        int k = *min_element(b, b+n);

        if(k > minEl)
        {
            k = max(k, minEl);
            res = i;
        }
    }

    cout << res << "\n";

    return 0;
}