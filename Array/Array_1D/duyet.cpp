#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a;
    for(int i = 0; i < n; i ++)
    {
        int x;
        cin >> x;

        a.push_back(x);
    }

    long long sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;
    for(int i = 0; i < n; i++)
    {
        sum1 += a[i];
        sum2 += pow(a[i], i+1);

        if(a[i] % 3 == 0)
            sum3 += a[i];
    }

    for(int i = n-1; i <= 0; i--)
    {
        sum4 += pow(a[i], i+1);
    }

    cout << sum1 << endl;
    cout << sum2 << endl;
    cout << sum3 << endl;
    cout << sum4 << endl;

    return 0;
}