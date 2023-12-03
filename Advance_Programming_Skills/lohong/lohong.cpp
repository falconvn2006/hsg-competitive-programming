#include<bits/stdc++.h>

using namespace std;

int main()
{

    freopen("lohong.inp", "r", stdin);
    freopen("lohong.out", "w", stdout);

    string s;
    cin >> s;

    int count = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '8')
        {
            count += 2;
        }
        else if(s[i] == '0' || s[i] == '4' || s[i] == '6' || s[i] == '9')
        {
                count++;
        }
    }

    cout << count << endl;

    return 0;
}