#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("neck.inp", "r", stdin);
    freopen("neck.out", "w", stdout);

    unordered_map<char, int> mp;

    mp['Y'] = 0; mp['G'] = 0; mp['R'] = 0;

    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'Y')
            mp['Y']++;
        if(s[i] == 'G')
            mp['G']++;
        if(s[i] == 'R')
            mp['R']++;
    }

    if(mp['Y'] == mp ['G'] && mp['G'] == mp['R'] && mp['Y'] == mp['R'])
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}