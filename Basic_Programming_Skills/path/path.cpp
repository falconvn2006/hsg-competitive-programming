#include<bits/stdc++.h>

using namespace std;

int main()
{

    freopen("path.inp", "r", stdin);
    freopen("path.out", "w", stdout);

    int n, d;
    cin >> n >> d;

    int res = 0;
    for(int i = 0; i < n; i++)
    {
        char c;
        int x;

        cin >> c >> x;

        res += d * x;
    }

    cout << res << endl;

    return 0;
}