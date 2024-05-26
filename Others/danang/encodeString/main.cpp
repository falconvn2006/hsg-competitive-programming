#include<bits/stdc++.h>

using namespace std;

int main()
{
    string encodeList, messageY;

    cin >> encodeList >> messageY;

    unordered_map<char, char> mp;

    for(int i = 0; i < encodeList.size(); i += 2)
    {
        int x = i+1;

        mp.insert(make_pair(encodeList[i], encodeList[x]));
        mp.insert(make_pair(encodeList[x], encodeList[i]));
        // mp[encodeList[i]] = encodeList[i++];
        // mp[encodeList[i++]] = encodeList[i];
    }

    string res = "";
    for(int i = 0; i < messageY.size(); i++)
    {
        if(mp[messageY[i]])
            res += mp[messageY[i]];
        else
            res += messageY[i];
    }

    cout << res << "\n";

    return 0;
}