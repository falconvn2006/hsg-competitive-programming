#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("differ.inp", "r", stdin);
    freopen("differ.out", "w", stdout);

    int m, n;
    cin >> m >> n;

    int a[100][100];
    for(int i = 0; i < m; i++)
    {
        string s;
        cin >> s;

        for(int j = 0; j < n; j++)
        {
            a[i][j] = s[j];
        }
    }

    int count = 0;
    for(int i = 0; i < m; i++)
    {
        string s;
        cin >> s;
        for(int j = 0; j < n; j++)
        {
            if(s[j] != a[i][j])
                count++;
        }
    }

    cout << count;

    return 0;
}