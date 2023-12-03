#include<bits/stdc++.h>

using namespace std;

const int maxN = 10000006;

int n;
int arr[maxN];


int main()
{

    freopen("tichmax_nk2007.inp", "r", stdin);
    freopen("tichmax_nk2007.out", "w", stdout);

    cin >> n;

    for(int i = 1; i <= n; ++i)
        cin >> arr[i];

    int maxVal1 = -99999, maxKey1 = 0;
    for(int i = 1; i <= n; ++i)
    {
        if(arr[i] > maxVal1)
        {
            maxVal1 = arr[i];
            maxKey1 = i;
        }
    }

    arr[maxKey1] = -99999;

    int maxVal2 = -99999, maxKey2 = 0;
    for(int i = 1; i <= n; ++i)
    {
        if(arr[i] > maxVal2)
        {
            maxVal2 = arr[i];
            maxKey2 = i;
        }
    }

    arr[maxKey2] = -99999;

    int maxVal3 = -99999, maxKey3 = 0;
    for(int i = 1; i <= n; ++i)
    {
        if(arr[i] > maxVal3)
        {
            maxVal3 = arr[i];
            maxKey3 = i;
        }
    }

    arr[maxKey1] = -99999;

    cout << maxVal1 * maxVal2 * maxVal3 << endl;

    return 0;
}