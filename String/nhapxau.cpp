#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s1, s2;

    int dif = 0;

    getline(cin, s1);
    getline(cin, s2);

    if(s1.size() > s2.size())
    {
        cout << "s1 lon hon s2" << endl;
        dif = s1.size() - s2.size();
    }
    else if(s1.size() < s2.size())
    {
        cout << "s2 lon hon s1" << endl;
        dif = s1.size() - s2.size();
    }
    else
    {
        cout << "s1 bang voi s2" << endl;
        dif = s1.size() - s2.size();
    }

    string s3 = s1 + " " + s2;

    cout << "s3 la : " << s3 << endl;

    if(dif > 0)
    {
        cout << "s1 dai hon s2 khoang " << dif << " ki tu";
    }
    else if(dif < 0)
    {
        cout << "s2 dai hon s1 khoang " << abs(dif) << " ki tu";
    }
    else
    {
        cout << "s1 va s2 khong khac so ki tu";
    }

    return 0;
}