#define ll long long

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;

    string a(n+1, (char)'0');

    for(ll i = 1; i <= k; i++)
    {
        // for(ll j = 1; j <= n; j++)
        // {
        //     if(j % (i+1) == 0)
        //         if(a[j] == '0')
        //             a[j] = '1';
        //         else
        //             a[j] = '0';
        // }
    }

    ll count = 0;
    for(ll i = 1; i <= n; i++)
    {
        if(a[i] == '1')
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}