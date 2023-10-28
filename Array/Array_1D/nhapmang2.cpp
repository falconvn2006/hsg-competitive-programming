#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<long long> a;
    for(int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        a.push_back(x);
    }

    for(int i = 0; i <= n; i++)
        if(a[i] == a[k])
            cout << "a" << i << " ";

    cout << endl;

    return 0;
}