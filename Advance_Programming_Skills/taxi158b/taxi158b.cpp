#include<bits/stdc++.h>

using namespace std;

const int maxN = 10000006;

int n;
int a[maxN];

int main()
{
    freopen("taxi158b.inp", "r", stdin);
    freopen("taxi158b.out", "w", stdout);

    cin >> n;

    for(int i = 1; i <= n; ++i)
        cin >> a[i];

    sort(a, a+n);

    int currentLen = 0, count = 0;

    for(int i = 1; i <= n; ++i)
    {
        currentLen += a[i];

        if(currentLen > 4)
        {
            currentLen = a[i];
            count++;
        }
    }

    if(currentLen != 0)
        count++;

    cout << count << endl;

    return 0;
}