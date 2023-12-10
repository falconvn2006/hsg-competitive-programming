typedef long long ll;

#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("xaudx.inp", "r", stdin);
    freopen("xaudx.out", "w", stdout);

    cin.tie(0);
    cin.sync_with_stdio();

    string s;
    cin >> s;

    for(int i = 0; i <= s.size()/2; i++)
    {
        if(s[i] != '?' && s[s.size()-i-1] != '?')
        {
            if(s[i] != s[s.size()-i-1])
            {
                cout << -1 << "\n";
                exit(0);
            }
        }
        else if(s[i] == '?' && s[s.size()-i-1] != '?')
        {
            s[i] = s[s.size()-i-1];
        }
        else if(s[i] != '?' && s[s.size()-i-1] == '?')
        {
            s[s.size()-i-1] = s[i];
        }
        else if(s[i] == '?' && s[s.size()-i-1] == '?')
        {
            s[i] = s[s.size()-i-1] = 'A';
        }
    }

    cout << s << "\n";

    return 0;
}