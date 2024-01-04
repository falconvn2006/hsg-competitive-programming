#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("number.inp", "r", stdin);
    freopen("number.out", "w", stdout);

    string s;
    cin >> s;

    sort(s.begin(), s.end());

    cout << s << "\n";

    return 0;
}