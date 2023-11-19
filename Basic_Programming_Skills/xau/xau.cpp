#include<bits/stdc++.h>

using namespace std;

bool isPadlindrome(string s)
{
    for(int i = 0; i < s.size()/2; i++)
    {
        if(s[i] != s[s.size() - i - 1])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    freopen("xau.inp", "r", stdin);
    freopen("xau.out", "w", stdout);

    int n;
    cin >> n;

    vector<int> ans;
    for(int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;

        if(isPadlindrome(s))
        {
            ans.push_back(i);
        }
    }

    cout << ans.size() << endl;
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    cout << endl;

    return 0;
}