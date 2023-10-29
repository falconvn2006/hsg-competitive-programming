#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int a[1000000]; // 10^6

    for(int i = 1; i <= n; i++)
    {
        a[i] = 0; // All green
    }

    for(int i = 1; i <= k; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(j % (i+1) == 0)
                if(a[j] == 0)
                    a[j] = 1;
                else
                    a[j] = 0;
        }
    }

    int count = 0;
    for(int i = 1; i <= n; i++)
    {
        if(a[i] == 1)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}