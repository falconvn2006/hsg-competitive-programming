#include<bits/stdc++.h>

using namespace std;


int n;
int disAboard, aBoard;
int maxHolder = -1;


int main()
{
    freopen("tram116a.inp", "r", stdin);
    freopen("tram116a.out", "w", stdout);

    cin >> n;

    int currentPassenger = 0;

    for(int i = 1; i <= n; ++i)
    {
        cin >> disAboard >> aBoard;

        currentPassenger += aBoard;
        currentPassenger -= disAboard;

        maxHolder = max(maxHolder, currentPassenger);
    }

    cout << maxHolder << endl;

    return 0;
}