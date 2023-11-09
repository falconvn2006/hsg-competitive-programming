#include<bits/stdc++.h>

using namespace std;

bool isPalidrome(string s)
{
    for(int i = 0; i < s.size()/2; i++)
    {
        if(s[i] != s[s.size() - i - 1])
            return false;
    }

    return true;
}

int main()
{
    string a,b;

    getline(cin, a);
    getline(cin, b);

    //***************1**************

    if(a[a.size()-1] == b[0])
    {
        cout << "Co" << endl;
    }
    else
    {
        cout << "Khong" << endl;
    }

    //***************2**************

    int count = 0;
    for(int i = 0; i < a.size(); i++)
    {
        if(a[i] == b[0])
            count++;
    }

    cout << count << endl;

    //***************3**************

    string revA = a;
    reverse(revA.begin(), revA.end());

    cout << revA << endl;

    //***************4**************

    string spaceB = "";
    for(auto x : b)
    {
        if(x != ' ')
            spaceB += x;
    }

    cout << spaceB << endl;

    //***************5**************

    string c = "";

    for(int i = 0; i < a.size(); i++)
    {
        if(a[i] >= '0' && a[i] <= '9')
        {
            c += a[i];
        }
    }

    cout << c << endl;
    
    //***************6**************

    if(isPalidrome(c))
        cout << "Co" << endl;
    else
        cout << "Khong" << endl;

    return 0;
}