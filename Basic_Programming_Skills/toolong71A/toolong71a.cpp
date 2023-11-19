#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("toolong71a.inp", "r", stdin);
    freopen("toolong71a.out", "w", stdout);

    int n;
    cin >> n;

    while (n--)
    {
        string s;
        cin >> s;

        if(s.size() > 10)
        {
            int len = s.size() - 2;
            cout << s[0] << len << s[s.size() - 1] << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
    

    return 0;
}