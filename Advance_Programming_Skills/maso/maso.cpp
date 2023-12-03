#include<bits/stdc++.h>

using namespace std;

const int maxN = 10000006;

int k;
string maso;
int weight[maxN];
string letters;


int main()
{
    freopen("maso.inp", "r", stdin);
    freopen("maso.out", "w", stdout);

    cin >> k;
    cin >> maso;

    for(int i = 0; i < 7; ++i)
        cin >> weight[i];

    cin >> letters;

    long long product = 1;
    for(int i = 0; i < 7; ++i)
    {
        product += (maso[i] - '0') * weight[i];
    }

    int mod = product % k;

    cout << letters[mod-1] << endl;

    return 0;
}