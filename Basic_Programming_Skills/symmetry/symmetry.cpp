#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("symmetry.inp", "r", stdin);
    freopen("symmetry.out", "w", stdout);

    string s;
    cin >> s;

    bool res = true;

    for(int i = 0; i < s.size()/2; i++)
    {
        if(s[i] != s[s.size() - i - 1])
        {
            res = false;
            break;
        }
    }

    if(res)
        cout << 1;
    else
        cout << 0;

    return 0;
}