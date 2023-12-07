#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("vbgrass.inp", "r", stdin);
    freopen("vbgrass.out", "w", stdout);

    int r, c;
    cin >> r >> c;

    int count = 0;

    for(int i = 0; i < r; ++i)
    {
        char prev = '0';

        for(int j = 0; j < c; ++j)
        {
            char current;
            cin >> current;

            if(prev == '0')
                prev = current;

            if(current == '.')
            {
                if(prev == '#')
                {
                    count++;
                    prev = current;
                }
            }

            prev = current;
        }
    }

    cout << count << endl;

    return 0;
}