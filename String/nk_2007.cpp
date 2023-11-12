#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> res = {1};

    for(int mid = 1; mid < n; mid++)
    {
        int count = 0;
        int l = 0, r = mid;

        while(l < r)
        {
            if(s[l] == s[r])
            {
                count++;
            }
            else
            {
                l++;
                r--;
                continue;
            }

            l++;
            r--;
        }

        res.push_back(count);
    }

    for(int x : res)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}