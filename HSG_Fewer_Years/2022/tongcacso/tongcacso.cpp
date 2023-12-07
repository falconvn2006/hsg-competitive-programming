#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("tongcacso.inp", "r", stdin);
    freopen("tongcacso.out", "w", stdout);

    string s;
    cin >> s;

    long long sum = 0;
    for(long long i = 0; i < s.size(); i++)
    {
        sum += s[i] - '0';
    }

    cout << sum << "\n";

    return 0;
}