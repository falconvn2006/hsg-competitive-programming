#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("songuyen.inp", "r", stdin);
    freopen("songuyen.out", "w", stdout);

    int m, n;
    cin >> m >> n;

    int count = 0;
    for(; m <= n; m++)
    {
        int target = m;
        while(target > 0)
        {
            if(target % 10 == 0)
            {
                count++;
            }

            target /= 10;
        } 
    }

    cout << count << endl;

    return 0;
}