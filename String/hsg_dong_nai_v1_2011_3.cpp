#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    bool res = true;

    int l = 0, r = s.size() - 1;
    while(l <= r)
    {
        if(s[l] != s[r])
        {
            if(s[l] == '?' || s[r] == '?')
            {
                if(s[l] != '?')
                    s[r] = s[l];
                else
                    s[l] = s[r];
            }
            else
            {
                res = false;
                break;
            }
        }
        else
        {
            if(s[l] == '?' && s[r] == '?')
            {
                s[l] = 'A';
                s[r] = 'A';
            }
        }

        l++;
        r--;
    }

    if(!res)
        cout << -1 << endl;
    else
        cout << s << endl;

    return 0;
}