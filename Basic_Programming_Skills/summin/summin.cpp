#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("summin.inp", "r", stdin);
    freopen("summin.out", "w", stdout);

    int n;
    cin >> n;

    int arr[1000005];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int minRes = abs(arr[0] - arr[1]), pos = 0;
    for(int i = 1; i < n; i++)
    {
        if(abs(arr[i] - arr[i+1]) <= minRes)
        {
            minRes = abs(arr[i] - arr[i+1]);
            pos = i;
        }
    }

    cout << minRes << endl;
    cout << pos << " " << pos + 1;

    return 0;
}