#define ll long long

#include <bits/stdc++.h>

using namespace std;

ll myPow(ll a, ll b)
{
    if(b == 1) return a;

    ll tmp = myPow(a, b / 2);
    ll result = tmp * tmp;

    if(b % 2 == 1) result *= a;
    return result;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(--t)
    {
        ll l, r;
        cin >> l >> r;

        while(l <= r)
        {
            ll mid = l + (r - l)/2;
        }
    }

    return 0;
}