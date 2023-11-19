#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("dotuoi.inp", "r", stdin);
    freopen("dotuoi.out", "w", stdout);

    int n;
    cin >> n;

    int arr[1000005];
    
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max_streak = 0, prev = 0, streak = 1;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == prev)
        {
            streak++;
        }
        else
        {
            prev = arr[i];
            max_streak = max(max_streak, streak);
            streak = 1;
        }
    }

    cout << max_streak << endl;

    return 0;
}