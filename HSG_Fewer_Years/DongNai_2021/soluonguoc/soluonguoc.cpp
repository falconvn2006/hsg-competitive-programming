#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("soluonguoc.inp", "r", stdin);
    freopen("soluonguoc.out", "w", stdout);

    int n;
    cin >> n;

    long long mul = 1;
    for(int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;

        mul *= x;
    }

    int count = 0;
    for(int i = 1; i <= mul; i++)
    {
        if(mul % i == 0)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}