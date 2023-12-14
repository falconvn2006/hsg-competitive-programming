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

    // sort(numbers.begin(), numbers.end());

    // for(int i = 0; i < numbers.size(); i++)
    // {
    //     cout << numbers[i] << " ";
    // }

    // cout << "\n";

    int n;
    cin >> n;

    while(n--)
    {
        string num;
        cin >> num;

        string maxEl = numbers[num[0] - '0'];
        for(int i = 1; i < num.size(); i++)
        {
            maxEl = max(maxEl, numbers[num[i] - '0']);
        }

        cout << maxEl << "\n";
    }

    return 0;
}