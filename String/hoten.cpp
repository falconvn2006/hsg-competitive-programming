#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    s[0] = toupper(s[0]);

    int whiteSpaceCount = 0, maxLetters = 0, letterCount = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == ' ')
        {
            s[i+1] = toupper(s[i+1]);

            whiteSpaceCount++;
            maxLetters = max(maxLetters, letterCount);
            letterCount = 0;
        }
        else
        {
            letterCount++;
        }
    }

    cout << whiteSpaceCount + 1 << endl;
    cout << maxLetters << endl;
    cout << s << endl;

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] != ' ')
            cout << s[i];
        else
            cout << endl;
    }

    cout << endl;

    return 0;
}