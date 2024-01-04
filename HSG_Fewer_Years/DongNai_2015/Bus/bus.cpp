#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("bus.inp", "r", stdin);
    freopen("bus.out", "w", stdout);

    int n, m;
    cin >> n >> m;

    double arr[10003];
    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    int x, y, z, t;
    cin >> x >> y >> z >> t;

    int arrv, endv;
    cin >> arrv >> endv;

    double dist = arr[endv] - arr[arrv];

    if(dist < m*(1/4)) cout << x << "\n";
    else if(dist >= m*(1/4) && dist < m*(1/3)) cout << y << "\n";
    else if(dist >= m*(1/3) && dist < m*(1/2)) cout << z << "\n";
    else if(dist >= m*(1/2)) cout << t << "\n";

    return 0;
}