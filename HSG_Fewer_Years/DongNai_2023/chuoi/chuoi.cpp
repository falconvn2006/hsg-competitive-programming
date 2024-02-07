#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("chuoi.inp", "r", stdin);
    freopen("chuoi.out", "w", stdout);

    string s;
    cin >> s;

    int res = 0;
    for(int i = 0; i < s.size(); i++)
    {
        int l = i, r = i;

        while(l >= 0 && r <= s.size() && s[l] == s[r])
        {
            res = max(r - l + 1, res);

            l--, r++;
        }

        l = i, r = i+1;
        while(l >= 0 && r <= s.size() && s[l] == s[r])
        {
            res = max(r - l + 1, res);

            l--, r++;
        }
    }

    cout << res << "\n";

    return 0;
}