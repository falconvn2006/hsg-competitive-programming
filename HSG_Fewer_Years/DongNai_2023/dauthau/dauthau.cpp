#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("dauthau.inp", "r", stdin);
    freopen("dauthau.out", "w", stdout);

    int n;
    cin >> n;
    
    unordered_map<string, int> mp;
    for(int i = 0; i < n; i++)
    {
        string name;
        int val;

        cin >> name >> val;
        mp[name] = val;
    }

    int maxRes = 0;
    string res = "";
    for(auto el : mp)
    {
        if(el.second > maxRes)
        {
            maxRes = el.second;
            res = el.first;
        }
    }

    cout << res << "\n";

    return 0;
}