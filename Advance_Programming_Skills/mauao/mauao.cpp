typedef long long ll;

#include<bits/stdc++.h>

using namespace std;

int main()
{

    freopen("mauao.inp", "r", stdin);
    freopen("mauao.out", "w", stdout);

    cin.tie(0);
    cin.sync_with_stdio();

    int n;
    cin >> n;

    unordered_map<int, int> home;
    unordered_map<int, int> guest;

    int maxIndex = -1;

    for(int i = 1; i <= n; i++)
    {
        int h, a;
        cin >> h >> a;

        home[h]++;
        guest[a]++;

        maxIndex = max({maxIndex, h, a});
    }

    ll result = 0;

    for(int i = 0; i < maxIndex+1; i++)
    {
        result += home[i]*guest[i];
    }

    cout << result << "\n";

    return 0;
}