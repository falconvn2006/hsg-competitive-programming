typedef long long ll;

#include<bits/stdc++.h>

using namespace std;

const char* INPUT = "nktick.inp";
const char* OUTPUT = "nktick.out";

int main()
{

    freopen(INPUT, "r", stdin);
    freopen(OUTPUT, "w", stdout);

    cin.tie(0);
    cin.sync_with_stdio();

    // Code here
    int n;
    cin >> n;

    int t[100004];
    int r[100004];

    for(int i = 0; i < n; i++)
    {
        cin >> t[i];
    }

    for(int i = 0; i < n-1; i++)
    {
        cin >> r[i];
    }

    int f[100004];

    f[0] = t[0];
    f[1] = min(t[0]+t[1], r[0]);

    for(int i = 2; i < n; i++)
    {
        f[i] = min(f[i-1] + t[i], f[i-2] + r[i-1]);
    }

    cout << f[n-1] << "\n";

    return 0;
}