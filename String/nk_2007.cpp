#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> res;

    for(int mid = 0; mid < n; mid++)
    {
        int count = 0;
        int l = 0, r = mid;

        while(l <= r && r < n)
        {
            if(s[l] == s[r])
            {
                count++;
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

    return 0;
}