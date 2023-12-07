#include<bits/stdc++.h>

using namespace std;

int main()
{

    freopen("quocky.inp", "r", stdin);
    freopen("quocky.out", "w", stdout);

    int n, k; double x, y;
    cin >> n >> k >> y;

    double flag = (sqrt(5)-1)/2;

    double kFlagX = y/flag, kFlagY = y;
    for(double i = k+1; i <= n; i++)
    {
        x = y;
        y = flag*x;
    }

    cout << setprecision(6) << x << " " << setprecision(6) << y << "\n";

    kFlagX = (double)2*kFlagY/flag;

    for(double i = k-1; i >= 0; i--)
    {
        kFlagY = kFlagX;
        kFlagX = (double)2*kFlagY/flag;
    }

    cout << setprecision(6) << kFlagX << " " << setprecision(6) << kFlagY << "\n";

    return 0;
}