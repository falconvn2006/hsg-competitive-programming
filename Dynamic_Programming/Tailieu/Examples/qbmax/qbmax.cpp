typedef long long ll;

#include<bits/stdc++.h>

using namespace std;

const char* INPUT = "qbmax.inp";
const char* OUTPUT = "qbmax.out";

int main()
{

    freopen(INPUT, "r", stdin);
    freopen(OUTPUT, "w", stdout);

    cin.tie(0);
    cin.sync_with_stdio();

    // Code here

    int m, n;
    cin >> m >> n;

    int arr[m+1][n+1];
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> arr[m][n];
        }
    }

    int f[1000][1000] = {0};

    // memset(f, 0, sizeof(arr));

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            f[j][i] = max({ f[j-1][i-1], f[j][i-1], f[j+1][i-1] }) + arr[j][i];
        }
    }

    int res = 0;

    for(int i = 0; i < m; i++)
    {
        if(f[i][n] > res) res = f[i][n];
    }

    cout << res << "\n";

    return 0;
}