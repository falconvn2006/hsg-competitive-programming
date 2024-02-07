#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("mathuat.inp", "r", stdin);
    freopen("mathuat.out", "w", stdout);

    int arr[4][4];
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    int target = arr[0][0] + arr[0][1] + arr[0][2] + arr[0][3];
    for(int i = 0; i < 4; i++)
    {
        int sum = 0;
        for(int j = 0; j < 4; j++)
        {
            sum += arr[i][j];
        }

        if(sum != target)
        {
            cout << "not magic\n";
            return 0;
        }
    }

    for(int i = 0; i < 4; i++)
    {
        int sum = 0;
        for(int j = 0; j < 4; j++)
        {
            sum += arr[j][i];
        }

        if(sum != target)
        {
            cout << "not magic\n";
            return 0;
        }
    }

    cout << "magic\n";

    return 0;
}