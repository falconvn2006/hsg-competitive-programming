#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("chuso.inp", "r", stdin);
    freopen("chuso.out", "w", stdout);

    int m, n;
    cin >> m >> n;

    string res = to_string((long long)pow(m, n));
    cout << res[res.size() - 1] << "\n";

    return 0;
}