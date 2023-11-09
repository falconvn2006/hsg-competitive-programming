#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;

    int a[1000];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    if(sum % 2 == 0)
        sum /= 2;

    int count = 0;
    for(int i = 1; i < n; i++)
    {
        int sum2 = 0;
        for(int j = 0; j <= i; j++)
        {
            sum2 += a[j];
        }

        if(sum2 == sum)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}