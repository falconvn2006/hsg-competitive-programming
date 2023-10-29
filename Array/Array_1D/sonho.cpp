#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int a[1000005];

    unordered_map<int, int> mp;
    for(int i = 1; i <= n; i++)
    {
        a[i] = i;
    }

    for(int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;

        a[max(x,y)] = min(x,y);
    }

    int count1 = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] == i)
            count1++;

        mp[a[i]]++;
    }

    int maxEl = 0;
    for(auto el : mp)
    {
        maxEl = max(maxEl, el.second);
    }

    cout << count1 << endl;
    cout << maxEl+1 << endl;

    return 0;
}