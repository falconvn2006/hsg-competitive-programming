#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("blimp.inp", "r", stdin);
    freopen("blimp.out", "w", stdout);

    int n;
    cin >> n;

    vector<int> pos;

    for(int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;

        for(int j = 0; j < s.size(); j++)
        {
            if(s[j] == 'F' && s[j+1] == 'B' && s[j+2] == 'I')
            {
                pos.push_back(i);
            }
        }
    }

    if(!pos.empty())
    {
        for(int i = 0; i < pos.size(); i++)
        {
            cout << pos[i] << " ";
        }
    }
    else
    {
        cout << "GO" << endl;
    }

    return 0;
}