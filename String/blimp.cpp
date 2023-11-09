#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> res;

    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for(int j = 0; j < s.size(); j++)
            if(s[j] == 'F' && s[j+1] == 'B' && s[j+2] == 'I')
            {
                res.push_back(i+1);
                break;
            }
    }

    if(!res.empty())
    {
        for(auto x : res)
        {
            cout << x << endl;
        }
    }
    else
    {
        cout << "GO" << endl;
    }

    return 0;
}