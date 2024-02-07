#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("banh.inp", "r", stdin);
    freopen("banh.out", "w", stdout);

    int l, n;
    cin >> l >> n;

    cout << (l*8 + n*3) - 28 << "\n";

    return 0;
}