#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("biendoi.inp", "r", stdin);
    freopen("biendoi.out", "w", stdout);

    int n;
    int a[100004], b[100004];

    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    int res[100004];

    int count = 0;

    for(int i = 0; i < n; i++)
    {
        res[i] = 0;

        for(int j = i; j < n; j++)
        {
            if(a[j] == b[i])
            {
                res[i] = j;
                break;
            }
        }

        if(res[i] != 0)
        {
            count += res[i] - i;

            for(int j = res[i] - 1; j >= 0; j--)
            {
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
        else
        {
            cout << -1 << "\n";
            exit(0);
        }
    }

    cout << count << "\n";
    for(int i = 0; i < n; i++)
    {
        for(int j = res[i] - 1; j >= i; j--)
        {
            cout << j+1 << " ";
        }
    }

    return 0;
}