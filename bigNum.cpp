#include <bits/stdc++.h>

using namespace std;

string bigNum_Add(string a, string b)
{
    string res = "";
    int carry = 0, sum;

    while(a.length() < b.length())
        a = '0' + a;
    while(b.length() < a.length())
        b = '0' + b;

    int x, y;
    for(int i = a.length()-1; i >= 0; i--)
    {
        x = (int)a[i] - 48;
        y = (int)b[i] - 48;

        sum = x + y + carry;
        carry = sum / 10;
        res += (char)(sum % 10+ 48);
    }

    if(carry > 0)
        res = '1' + res;

    return res;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    // string a, b;
    // cin >> a >> b;

    cout << bigNum_Add("879423567123456", "5678901234567890") << endl;

    return 0;
}