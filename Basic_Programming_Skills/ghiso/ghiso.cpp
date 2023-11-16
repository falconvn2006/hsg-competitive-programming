#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("ghiso.inp", "r", stdin);
    freopen("ghiso.out", "w", stdout);

    int n;
    cin >> n;

    int count = 0;

    while(n > 0)
    {
        if(n % 2 == 0) n /= 2;
        else n--;

        count++;
    }

    cout << count << endl;

    return 0;
}