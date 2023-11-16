#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("dao.inp", "r", stdin);
    freopen("dao.out", "w", stdout);

    int k;
    cin >> k;

    int energy = 0;

    while(k > 2)
    {
        if(k % 2 == 0)
        {
            k /= 2;
            energy += 4;
        }
        else
        {
            k -= 1;
            energy += 2;
        }
    }
    
    cout << energy+2 << endl;

    return 0;
}