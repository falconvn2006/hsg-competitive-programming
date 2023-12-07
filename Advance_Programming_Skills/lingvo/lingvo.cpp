#include<bits/stdc++.h>

using namespace std;

int main()
{

    freopen("lingvo.inp", "r", stdin);
    freopen("lingvo.out", "w", stdout);

    vector<string> numbers;

    for(int i = 0; i < 10; ++i)
    {
        string s;
        cin >> s;

        numbers.push_back(s);
    }

    sort(numbers.begin(), numbers.end());

    for(int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }

    cout << "\n";

    int n;
    cin >> n;

    while(n--)
    {
        string num;
        cin >> num;

        char target = *max_element(num.begin(), num.end());

        cout << numbers[target - '0'] << endl;
    }

    return 0;
}