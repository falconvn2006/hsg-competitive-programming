#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    int res = 0;

    sort(arr.begin(), arr.end());

    for(int i = 0; i < arr.size(); i++)
    {
        for(int j = 0; j < arr.size(); j++)
        {
            if(abs(arr[i] - arr[j]) <= min(arr[i],arr[j]))
                res = max(res, arr[i] ^ arr[j]);
        }
    }

    cout << res << endl;

    return 0;
}