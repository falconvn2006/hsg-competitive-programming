#include<bits/stdc++.h>

using namespace std;

int res = 0;

bool isPadlindrome(string s)
{
    if(s.size() <= 1) return false;

    for(int i = 0; i < s.size()/2; i++)
    {
        if(s[i] != s[s.size()-i-1])
            return false;
    }

    return true;
}

void solve(string s)
{
    if(s.empty()) return;

    // if(begin)
    // {
    //     set<char> ss(s.begin(), s.end());

    //     if(ss.size() == 1)
    //     {
    //         res += s.size();
    //         return;
    //     }
    // }

    if(isPadlindrome(s))
    {
        res++;
    }
    for(int i = 0; i < s.size(); i++)
    {
        solve(s.erase(i, 1));
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("trees.inp", "r", stdin);
    freopen("trees.out", "w", stdout);

    int t;
    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;

        res = 0;

        solve(s);

        cout << res << "\n";
    }

    return 0;
}