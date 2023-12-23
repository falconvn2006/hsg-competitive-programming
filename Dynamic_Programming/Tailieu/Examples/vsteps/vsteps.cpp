typedef long long ll;

#include<bits/stdc++.h>

using namespace std;

const char* INPUT = "vsteps.inp";
const char* OUTPUT = "vsteps.out";

int main()
{

    freopen(INPUT, "r", stdin);
    freopen(OUTPUT, "w", stdout);

    cin.tie(0);
    cin.sync_with_stdio();

    // Code here
    int n, k;
    cin >> n >> k;

    bool broken[100004] = {false};

    for(int i = 0; i < k; i++)
    {
        int x;
        cin >> x;

        broken[x] = true;
    }

    int f[100004];

    if(broken[1]) f[1] = 0;
    else f[1] = 1;

    if(broken[2]) f[2] = 0;
    else
    {
        if(broken[1]) f[2] = 1;
        else f[2] = 2;
    }

    for(int i = 3; i < n; i++)
    {
        if(broken[i]) f[i] = 0;
        else f[i] = (f[i-1] + f[i-2]) % 14062008;
    }

    cout << f[n] << "\n";

    return 0;
}