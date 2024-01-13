#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int m, n;
    cin >> m >> n;

    int count = 0, prev_inc = 1;
    int index = 1, target = 1;
    while(m < n*1024)
    {
        count++;

        if(count == target)
        {
            m = m * 2;
            index++;
            prev_inc = target;
            target = index + prev_inc;
        }
    }

    cout << count << "\n";

    return 0;
}