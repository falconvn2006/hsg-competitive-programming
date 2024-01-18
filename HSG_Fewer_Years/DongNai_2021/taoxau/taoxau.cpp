#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("taoxau.inp", "r", stdin);
    freopen("taoxau.out", "w", stdout);

    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    unordered_map<char, int> mp1, mp2;

    for(int i = 0; i < s1.size(); i++)
        if(isalnum(s1[i]))
            mp1[tolower(s1[i])]++;

    for(int i = 0; i < s2.size(); i++)
        if(isalnum(s2[i]))
            mp2[tolower(s2[i])]++;

    for(auto ch : mp1)
    {
        if(ch.second > mp2[ch.first])
        {
            cout << 0 << "\n";
            return 0;
        }
    }

    cout << 1 << "\n";

    return 0;
}