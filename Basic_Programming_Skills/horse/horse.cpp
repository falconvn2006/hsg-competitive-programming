#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("horse.inp", "r", stdin);
    freopen("horse.out", "w", stdout);

    int n;
    cin >> n;

    int arr[1000005];
    cin >> arr[0];
    int minEl = arr[0], res = 0; 
    for(int i = 1; i < n; i++)
    {
        cin >> arr[i];

        res += minEl;

        minEl = min(minEl, arr[i]);
    }

    cout << res << endl;

    return 0;
}