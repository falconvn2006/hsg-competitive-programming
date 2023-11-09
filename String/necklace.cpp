#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    unordered_map<char, int> mp;

    mp['Y'] = 0;
    mp['R'] = 0;
    mp['G'] = 0;

    for(int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }

    if(mp['Y'] == mp['R'] && mp['Y'] == mp['G'] && mp['R'] == mp['G'])
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}