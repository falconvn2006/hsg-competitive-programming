#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("xepgach.inp", "r", stdin);
    freopen("xepgach.out", "w", stdout);

    int n;
    int a[100004];
    
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int left = 0, avg = round((double)*max_element(a, a+n)/(double)2), count = 0;

    bool res = true;

    for(int i = 0; i < n; i++)
    {
        if(a[i] > avg)
        {
            left += a[i] - avg;
            a[i] = avg;
        }
    }

    count = left;

    for(int i = 0; i < n; i++)
    {
        if(a[i] < avg)
        {
            if(left > 0)
            {
                a[i] += left;
                left -= avg - a[i];
            }
            else
            {
                res = false;
                break;
            }
        }
    }

    if(!res)
        cout << -1 << endl;
    else
        cout << count << endl;

    return 0;
}