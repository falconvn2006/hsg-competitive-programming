#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, maxEl = 0;
    string ss[1000], maxS = "";

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> ss[i];
        if(ss[i].size() > maxEl)
        {
            maxEl = ss[i].size();
            maxS = ss[i];
        }
    }

    cout << *max_element(ss, ss+n) << endl;
    cout << maxS << endl;

    return 0;
}