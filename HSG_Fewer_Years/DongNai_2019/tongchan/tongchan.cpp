#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("tongchan.inp", "r", stdin);
    freopen("tongchan.out", "w", stdout);

    int n;
    cin >> n;

    int arr[1000005];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int max_sum = -1;
    vector<int> res;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            vector<int> arr2(0);
            arr2.push_back(arr[i]);
            int sum = arr[i];
            for(int j = i+1; j < n; j++)
            {
                if(arr[j] % 2 == 0)
                {
                    arr2.push_back(arr[j]);
                    sum += arr[j];
                }
                else
                {
                    i = j;
                    break;
                }
            }

            if(sum > max_sum)
            {
                res = arr2;
                max_sum = sum;
            }
        }
    }

    for(int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}